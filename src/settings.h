#ifndef __SETTINGS_H_
#define __SETTINGS_H_

#include <unordered_map>
#include "Weapons.h"
#include "SDK.h"

enum TracerType
{
	BOTTOM,
	CURSOR
};


enum AntiAimType
{
	SPIN,
	JITTER,
	SIDE,
	STATIC
};

namespace Settings
{
	namespace Aimbot
	{
		extern bool enabled;
		
		namespace AutoAim
		{
			extern bool enabled;
		}
		
		namespace RCS
		{
			extern bool enabled;
		}
		
		namespace AutoShoot
		{
			extern bool enabled;
		}
		

		namespace AutoCrouch
		{
			extern bool enabled;
		}

		namespace AutoStop
		{
			extern bool enabled;
		}
	}

	namespace Triggerbot
	{
		extern bool enabled;
		extern ButtonCode_t key;
	}

	namespace AntiAim
	{
		extern bool enabled;
		extern AntiAimType type;
	}
	
	namespace ESP
	{
		extern bool enabled;
		
		namespace Tracer
		{
			extern TracerType type;
			extern bool enabled;
		}
		
		namespace Walls
		{
			extern bool enabled;
		}
		
		namespace Name
		{
			extern bool enabled;
			extern bool showHealth;
		}
		
		namespace Bones
		{
			extern bool enabled;
		}
	}
	
	namespace Spammer
	{
		extern bool enabled;
	}
	
	namespace BHop
	{
		extern bool enabled;
	}

	namespace AutoStrafe
	{
		extern bool enabled;
	}

	namespace SkinChanger
	{
		extern std::unordered_map<int, std::tuple<int, int, float, int, const char*, const char *>> getSettings();
	}
}

#endif