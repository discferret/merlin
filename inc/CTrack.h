/**
 * CTrack: representation of a data track
 */

#ifndef MERLIN_CTrack_h
#define MERLIN_CTrack_h

#include <cstdint>

class CTrack {
	private:
		vector<uint8_t> data;
		long cyl, head, sector;

	public:
		CTrack(long c, long h, long s)
		{
		}
};

#endif // MERLIN_CTrack_h