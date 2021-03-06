#include <vector>

#include "CTrack.h"

using namespace std;

/**
 * CTrack: representation of a data track
 */

/**
 * Create an empty track, with the address fields set to "not known".
 */
CTrack::CTrack()
{
	cyl = hd = sec = -1;
	frq = 1;	// 1Hz.. a bit poor, but it prevents Divide By Zeros
}

/**
 * Copy constructor: make a copy of an existing track
 */
CTrack::CTrack(const CTrack &orig)
{
	// Copy CHS address and frequency
	cylinder(orig.cylinder());
	head(orig.head());
	sector(orig.sector());
	freq(orig.freq());

	// Reserve some space for the data and copy it across
	this->data.reserve(orig.data.size());
	for (CTrack::data_citer i = orig.data.begin(); i != orig.data.end(); i++)
		this->data.push_back(*i);
}

/**
 * Create a track with no timing data stored.
 */
CTrack::CTrack(long c, long h, long s)
{
	cylinder(c);
	head(h);
	sector(s);
	freq(1);
}

