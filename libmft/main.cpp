#include "Other.h"
#include "MFT.h"

int main()
{
	unsigned long res = 0;

	Disk disk;

	if (disk.OpenDisk(L'D') != 0)
		return -1;

	if (LoadMFT(disk.GetDisk()) < 0)
		return -1;

	if (ParseMFT(disk.GetDisk(), FetchOption::kStandardInfo) < 0)
		return -1;	

	return 0;
}