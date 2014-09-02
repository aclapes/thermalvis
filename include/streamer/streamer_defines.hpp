/*! \file	streamer_defines.hpp
 *  \brief	Defines for streamer node configuration.
*/

#define NO_FILTERING 						0
#define GAUSSIAN_FILTERING 					1
#define BILATERAL_FILTERING 				2

#define DETECTOR_MODE_RAW					0
#define DETECTOR_MODE_LUM					1
#define DETECTOR_MODE_INS					2
#define DETECTOR_MODE_RAD					3
#define DETECTOR_MODE_TMP					4

#define USB_MODE_16							1
#define USB_MODE_8							2

#define DATATYPE_8BIT 						0
#define DATATYPE_RAW  						1
#define DATATYPE_MM   						2
#define DATATYPE_DEPTH						3

#define NORM_MODE_FULL_STRETCHING 			0
#define NORM_MODE_EQUALIZATION 				1
#define NORM_MODE_CENTRALIZED				2
#define NORM_MODE_FIXED_TEMP_RANGE			3
#define NORM_MODE_FIXED_TEMP_LIMITS			4

#define CONFIG_MAP_CODE_GRAYSCALE			0
#define CONFIG_MAP_CODE_CIECOMP				1
#define CONFIG_MAP_CODE_BLACKBODY			2
#define CONFIG_MAP_CODE_RAINBOW				3
#define CONFIG_MAP_CODE_IRON				4
#define CONFIG_MAP_CODE_BLUERED				5
#define CONFIG_MAP_CODE_JET					6
#define CONFIG_MAP_CODE_CIELUV				7
#define CONFIG_MAP_CODE_ICEIRON				8
#define CONFIG_MAP_CODE_ICEFIRE				9
#define CONFIG_MAP_CODE_REPEATED			10
#define CONFIG_MAP_CODE_HIGHLIGHTED			11

#define DEFAULT_DEGREES_PER_GRAYLEVEL           0.01
#define DEFAULT_DESIRED_DEGREES_PER_GRAYLEVEL   0.05
