/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          https://www.mrpt.org/                         |
   |                                                                        |
   | Copyright (c) 2005-2019, Individual contributors, see AUTHORS file     |
   | See: https://www.mrpt.org/Authors - All rights reserved.               |
   | Released under BSD License. See: https://www.mrpt.org/License          |
   +------------------------------------------------------------------------+ */
#ifndef XSDATAFORMAT_H
#define XSDATAFORMAT_H

#include "xsoutputmode.h"
#include "xsoutputsettings.h"
#include "xstypesconfig.h"

/*! \brief A structure for storing data formats. */
struct XsDataFormat
{
	/** The stored output mode */
	XsOutputMode m_outputMode;
	/** The stored output settings */
	XsOutputSettings m_outputSettings;

#ifdef __cplusplus
	/*! \brief Construct an XsDataFormat specifier

	  \param mode the outputmode
	  \param settings the output settings
	*/
	inline explicit XsDataFormat(
		const XsOutputMode mode = XS_DEFAULT_OUTPUT_MODE,
		const XsOutputSettings settings = XS_DEFAULT_OUTPUT_SETTINGS)
		: m_outputMode(mode), m_outputSettings(settings)
	{
	}

	//! Copy constructor
	inline XsDataFormat(const XsDataFormat& other)
		: m_outputMode(other.m_outputMode),
		  m_outputSettings(other.m_outputSettings)
	{
	}

	//! Assignment operator
	inline const XsDataFormat& operator=(const XsDataFormat& other)
	{
		// lint --e{1529} assignment to self ok
		m_outputMode = other.m_outputMode;
		m_outputSettings = other.m_outputSettings;
		return *this;
	}

	//! Equality operator
	inline bool operator==(const XsDataFormat& other) const
	{
		return m_outputMode == other.m_outputMode &&
			   m_outputSettings == other.m_outputSettings;
	}
#endif
};

#endif  // file guard
