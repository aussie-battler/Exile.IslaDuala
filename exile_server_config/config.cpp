/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgBuildings
//Loot positions created with @Lootpos by Patrix87 http://multi-jeux.quebec
{
#include "CfgBuildings.hpp"
};	


#include "CfgLootTables.hpp"


class CfgSettings
{
#include "CfgSettings.hpp"
};
