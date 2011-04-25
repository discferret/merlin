/**
 * CTrack: representation of a data track
 */

#ifndef MERLIN_CTrack_h
#define MERLIN_CTrack_h

#include <cstdint>
#include <vector>

class CTrack {
	private:
		/// Track data
		std::vector<std::uint32_t> data;
		/// Cylinder
		long cyl;
		/// Head
		long hd;
		/// Sector
		long sec;

	public:

		const long cylinder() const	{ return cyl; };
		const long head() const		{ return hd; };
		const long sector() const	{ return sec; };
		void cylinder(long val)		{ cyl = val; };
		void head(long val)			{ hd = val; };
		void sector(long val)		{ sec = val; };

		/**
		 * Create an empty track, with the address fields set to "not known".
		 */
		CTrack()
		{
			cyl = hd = sec = -1;
		}

		/**
		 * Copy constructor: make a copy of an existing track
		 */
		CTrack(const CTrack &orig)
		{
			// Copy CHS address
			cylinder(orig.cylinder());
			head(orig.head());
			sector(orig.sector());

			// Reserve some space for the data and copy it across
			this->data.reserve(orig.data.size());
			for (std::vector<std::uint32_t>::const_iterator i = orig.data.begin(); i != orig.data.end(); i++)
				this->data.push_back(*i);
		}

		/**
		 * Create a track with no timing data stored.
		 */
		CTrack(long c, long h, long s)
		{
			cylinder(c);
			head(h);
			sector(s);
		}
};

#endif // MERLIN_CTrack_h
