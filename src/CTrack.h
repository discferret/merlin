/**
 * CTrack: representation of a data track
 */

#ifndef MERLIN_CTrack_h
#define MERLIN_CTrack_h

#include <vector>
#include <stdint.h>

class CTrack {
	private:
		/// Cylinder
		long cyl;
		/// Head
		long hd;
		/// Sector
		long sec;
		/// Acquisition frequency in Hz
		double frq;

	public:
		// Iterator helpers for data store
		typedef std::vector<uint32_t>::iterator data_iter;
		typedef std::vector<uint32_t>::const_iterator data_citer;

		/// Track data
		std::vector<uint32_t> data;

		const long cylinder() const	{ return cyl; };
		const long head() const		{ return hd; };
		const long sector() const	{ return sec; };
		const double freq() const	{ return frq; };
		void cylinder(long val)		{ cyl = val; };
		void head(long val)			{ hd = val; };
		void sector(long val)		{ sec = val; };
		void freq(double val)		{ frq = val; };

		/**
		 * Create an empty track, with the address fields set to "not known".
		 */
		CTrack();

		/**
		 * Copy constructor: make a copy of an existing track
		 */
		CTrack(const CTrack &orig);

		/**
		 * Create a track with no timing data stored.
		 */
		CTrack(long c, long h, long s);
};

#endif // MERLIN_CTrack_h
