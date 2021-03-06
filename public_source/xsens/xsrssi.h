/*	WARNING: COPYRIGHT (C) 2016 XSENS TECHNOLOGIES OR SUBSIDIARIES WORLDWIDE. ALL RIGHTS RESERVED.
	THIS FILE AND THE SOURCE CODE IT CONTAINS (AND/OR THE BINARY CODE FILES FOUND IN THE SAME
	FOLDER THAT CONTAINS THIS FILE) AND ALL RELATED SOFTWARE (COLLECTIVELY, "CODE") ARE SUBJECT
	TO A RESTRICTED LICENSE AGREEMENT ("AGREEMENT") BETWEEN XSENS AS LICENSOR AND THE AUTHORIZED
	LICENSEE UNDER THE AGREEMENT. THE CODE MUST BE USED SOLELY WITH XSENS PRODUCTS INCORPORATED
	INTO LICENSEE PRODUCTS IN ACCORDANCE WITH THE AGREEMENT. ANY USE, MODIFICATION, COPYING OR
	DISTRIBUTION OF THE CODE IS STRICTLY PROHIBITED UNLESS EXPRESSLY AUTHORIZED BY THE AGREEMENT.
	IF YOU ARE NOT AN AUTHORIZED USER OF THE CODE IN ACCORDANCE WITH THE AGREEMENT, YOU MUST STOP
	USING OR VIEWING THE CODE NOW, REMOVE ANY COPIES OF THE CODE FROM YOUR COMPUTER AND NOTIFY
	XSENS IMMEDIATELY BY EMAIL TO INFO@XSENS.COM. ANY COPIES OR DERIVATIVES OF THE CODE (IN WHOLE
	OR IN PART) IN SOURCE CODE FORM THAT ARE PERMITTED BY THE AGREEMENT MUST RETAIN THE ABOVE
	COPYRIGHT NOTICE AND THIS PARAGRAPH IN ITS ENTIRETY, AS REQUIRED BY THE AGREEMENT.
*/

#ifndef XSRSSI_H
#define XSRSSI_H

#include "xstypesconfig.h"

#define XS_RSSI_MAX		(128)
#define XS_RSSI_UNKNOWN	(-XS_RSSI_MAX)

#ifdef __cplusplus
extern "C" {
#endif

XSTYPES_DLL_API int XsRssi_max(void);
XSTYPES_DLL_API int XsRssi_unknown(void);
XSTYPES_DLL_API int XsRssi_unbiased(int raw);

#ifdef __cplusplus
} // extern "C"
namespace XsRssi {
	/*! \brief The bias on biased RSSI values. */
	static const int bias = XS_RSSI_MAX;

	/*! \brief The maximum RSSI value. */
	static const int max = XS_RSSI_MAX;
	/*! \brief The RSSI value that was reserved for when the RSSI is unknown. */
	static const int unknown = XS_RSSI_UNKNOWN;

	/*! \brief The maximum unbiased RSSI value. */
	static const int maxUnbiased = XS_RSSI_MAX + XS_RSSI_MAX;
	/*! \brief The RSSI value that was reserved for when the RSSI is unknown (unbiased). */
	static const int unknownUnbiased = XS_RSSI_UNKNOWN + XS_RSSI_MAX;

	/*! \copydoc XsRssi_unbiased */
	inline int unbiased(int raw)
	{
		return XsRssi_unbiased(raw);
	}
}
#endif

#endif // file guard
