/*
* Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
* Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TRINITY_SHAREDDEFINES_H
#define TRINITY_SHAREDDEFINES_H

//#include "DetourNavMesh.h"
#include <cassert>
#include <mutex>

#include "WorldStates.h" // include it just in specific files and remove from here

static uint16 const MAX_ACHIEVEMENT = 13000;
static uint32 const MAX_CRITERIA = 40000;
static uint32 const MAX_CRITERIA_TREE = 66000;
static uint32 const MAX_MODIFIER_TREE = 72000;

const auto MAX_GUILD_PROFESSIONS = 2;

enum EncounterCreditType
{
    ENCOUNTER_CREDIT_KILL_CREATURE  = 0,
    ENCOUNTER_CREDIT_CAST_SPELL     = 1,
};

enum SpellEffIndex
{
    EFFECT_0            = 0,
    EFFECT_1            = 1,
    EFFECT_2            = 2,
    EFFECT_3            = 3,
    EFFECT_4            = 4,
    EFFECT_5            = 5,
    EFFECT_6            = 6,
    EFFECT_7            = 7,
    EFFECT_8            = 8,
    EFFECT_9            = 9,
    EFFECT_10           = 10,
    EFFECT_11           = 11,
    EFFECT_12           = 12,
    EFFECT_13           = 13,
    EFFECT_14           = 14,
    EFFECT_15           = 15,
    EFFECT_16           = 16,
    EFFECT_17           = 17,
    EFFECT_18           = 18,
    EFFECT_19           = 19,
    EFFECT_20           = 20,
    EFFECT_21           = 21,
    EFFECT_22           = 22,
    EFFECT_23           = 23,
    EFFECT_24           = 24,
    EFFECT_25           = 25,
    EFFECT_26           = 26,
    EFFECT_27           = 27,
    EFFECT_28           = 28,
    EFFECT_29           = 29,
    EFFECT_30           = 30,
    EFFECT_31           = 31,

    MAX_SPELL_EFFECTS
};

enum Roles : uint8
{
    ROLES_TANK      = 0,
    ROLES_HEALER    = 1,
    ROLES_DPS       = 2,
    ROLES_DEFAULT   = 3,
};

enum RoleForSoloQ : uint8
{
  SOLOQ_ROLE_UNKWN   = 0,  
  SOLOQ_ROLE_MELEE   = 1,  
  SOLOQ_ROLE_RANGE   = 2,  
  SOLOQ_ROLE_HEALER  = 3,  
    
};

enum SpecIndex
{
    SPEC_NONE                   = 0,
    SPEC_PET                    = 1,
    SPEC_MAGE_ARCANE            = 62,
    SPEC_MAGE_FIRE              = 63,
    SPEC_MAGE_FROST             = 64,

    SPEC_PALADIN_HOLY           = 65,
    SPEC_PALADIN_PROTECTION     = 66,
    SPEC_PALADIN_RETRIBUTION    = 70,

    SPEC_WARRIOR_ARMS           = 71,
    SPEC_WARRIOR_FURY           = 72,
    SPEC_WARRIOR_PROTECTION     = 73,

    SPEC_PET_FEROCITY           = 74,
    SPEC_PET_TENACITY           = 81,
    SPEC_PET_CUNNING            = 79,

    SPEC_DRUID_BALANCE          = 102,
    SPEC_DRUID_CAT              = 103,
    SPEC_DRUID_BEAR             = 104,
    SPEC_DRUID_RESTORATION      = 105,

    SPEC_DK_BLOOD               = 250,
    SPEC_DK_FROST               = 251,
    SPEC_DK_UNHOLY              = 252,

    SPEC_HUNTER_BEASTMASTER     = 253,
    SPEC_HUNTER_MARKSMAN        = 254,
    SPEC_HUNTER_SURVIVAL        = 255,

    SPEC_PRIEST_DISCIPLINE      = 256,
    SPEC_PRIEST_HOLY            = 257,
    SPEC_PRIEST_SHADOW          = 258,

    SPEC_ROGUE_ASSASSINATION    = 259,
    SPEC_ROGUE_COMBAT           = 260,
    SPEC_ROGUE_SUBTLETY         = 261,

    SPEC_SHAMAN_ELEMENTAL       = 262,
    SPEC_SHAMAN_ENHANCEMENT     = 263,
    SPEC_SHAMAN_RESTORATION     = 264,

    SPEC_WARLOCK_AFFLICTION     = 265,
    SPEC_WARLOCK_DEMONOLOGY     = 266,
    SPEC_WARLOCK_DESTRUCTION    = 267,

    SPEC_MONK_BREWMASTER        = 268,
    SPEC_MONK_WINDWALKER        = 269,
    SPEC_MONK_MISTWEAVER        = 270,

    SPEC_PET_ADAPTATION_FEROCITY = 535,
    SPEC_PET_ADAPTATION_CUNNING  = 536,
    SPEC_PET_ADAPTATION_TENACITY = 537,

    SPEC_DEMON_HUNER_HAVOC      = 577,
    SPEC_DEMON_HUNER_VENGEANCE  = 581,

    MAX_SPECS
};

enum SpecTypes
{
    SPEC_TYPE_DEFAULT   = 0,
    DPS_AGILITY         = 1,
    DPS_STRENGH         = 2,
    DPS_INTELLECT       = 3,
    HEALER_INTELLECT    = 4,
    TANK_AGILITY        = 5,
    TANK_STRENGH        = 6
};

enum PvPStats : uint32
{
    MainStatValue       = 13645,
    StaminaStatValue    = 57874,
    SecondaryStatValue  = 6698,
};

// used in script definitions
const auto EFFECT_FIRST_FOUND = 254;
const auto EFFECT_ALL = 255;

#define MAX_CHARACTERS_PER_REALM 16

enum Expansions
{
    EXPANSION_LEVEL_CURRENT            = -1,
    EXPANSION_CLASSIC                  = 0,
    EXPANSION_THE_BURNING_CRUSADE      = 1,
    EXPANSION_WRATH_OF_THE_LICH_KING   = 2,
    EXPANSION_CATACLYSM                = 3,
    EXPANSION_MISTS_OF_PANDARIA        = 4,
    EXPANSION_WARLORDS_OF_DRAENOR      = 5,
    EXPANSION_LEGION                   = 6,
    EXPANSION_BATTLE_FOR_AZEROTH       = 7,

    MAX_EXPANSIONS
};

static uint8 const CURRENT_EXPANSION = EXPANSION_LEGION;
static uint16 const START_DK_LEVEL = 55;
static uint16 const START_DH_LEVEL = 98;

enum Gender
{
    GENDER_UNKNOWN                     = -1,
    GENDER_MALE                        =  0,
    GENDER_FEMALE                      =  1,
    GENDER_NONE                        =  2
};

// Race value is index in ChrRaces.dbc
enum Races
{
    RACE_NONE                   = 0,    // 0
    RACE_HUMAN                  = 1,    // 1
    RACE_ORC                    = 2,    // 2
    RACE_DWARF                  = 3,    // 4
    RACE_NIGHTELF               = 4,    // 8
    RACE_UNDEAD_PLAYER          = 5,    // 16
    RACE_TAUREN                 = 6,    // 32
    RACE_GNOME                  = 7,    // 64
    RACE_TROLL                  = 8,    // 128
    RACE_GOBLIN                 = 9,    // 256
    RACE_BLOODELF               = 10,   // 512
    RACE_DRAENEI                = 11,   // 1024
    //RACE_FEL_ORC              = 12,   // 2048
    //RACE_NAGA                 = 13,   // 4096
    //RACE_BROKEN               = 14,   // 8192
    //RACE_SKELETON             = 15,   // 16384
    //RACE_VRYKUL               = 16,   // 32768
    //RACE_TUSKARR              = 17,   // 65536
    //RACE_FOREST_TROLL         = 18,   // 131072
    //RACE_TAUNKA               = 19,   // 262144
    //RACE_NORTHREND_SKELETON   = 20,   // 524288
    //RACE_ICE_TROLL            = 21,   // 1048576
    RACE_WORGEN                 = 22,   // 2097152
    //RACE_GILNEAN              = 23    // 4194304
    RACE_PANDAREN_NEUTRAL       = 24,   // 8388608
    RACE_PANDAREN_ALLIANCE      = 25,   // 16777216
    RACE_PANDAREN_HORDE         = 26,   // 33554432
    RACE_NIGHTBORNE             = 27,   // 67108864
    RACE_HIGHMOUNTAIN_TAUREN    = 28,   // 134217728
    RACE_VOID_ELF               = 29,   // 268435456
    RACE_LIGHTFORGED_DRAENEI    = 30,   // 536870912

    MAX_RACES
};

const auto MAX_PLAYABLE_RACES = 15;

//All - 52430847
constexpr auto RACEMASK_ALL_PLAYABLE =
((1 << (RACE_HUMAN - 1)) |
(1 << (RACE_ORC - 1)) |
(1 << (RACE_DWARF - 1)) |
(1 << (RACE_NIGHTELF - 1)) |
(1 << (RACE_UNDEAD_PLAYER - 1)) |
(1 << (RACE_TAUREN - 1)) |
(1 << (RACE_GNOME - 1)) |
(1 << (RACE_TROLL - 1)) |
(1 << (RACE_BLOODELF - 1)) |
(1 << (RACE_DRAENEI - 1)) |
(1 << (RACE_GOBLIN - 1)) |
(1 << (RACE_WORGEN - 1)) |
(1 << (RACE_PANDAREN_NEUTRAL - 1)) |
(1 << (RACE_PANDAREN_ALLIANCE - 1)) |
(1 << (RACE_PANDAREN_HORDE - 1)) |
(1 << (RACE_NIGHTBORNE - 1)) |
(1 << (RACE_HIGHMOUNTAIN_TAUREN - 1)) |
(1 << (RACE_VOID_ELF - 1)) |
(1 << (RACE_LIGHTFORGED_DRAENEI - 1)));

//Alliance - 18875469
constexpr auto RACEMASK_ALLIANCE =
((1 << (RACE_HUMAN - 1)) |
(1 << (RACE_DWARF - 1)) |
(1 << (RACE_NIGHTELF - 1)) |
(1 << (RACE_GNOME - 1)) |
(1 << (RACE_DRAENEI - 1)) |
(1 << (RACE_WORGEN - 1)) | 
(1 << (RACE_PANDAREN_ALLIANCE - 1)) |
(1 << (RACE_VOID_ELF - 1)) |
(1 << (RACE_LIGHTFORGED_DRAENEI - 1)));

//Horde - 33555378
constexpr auto RACEMASK_HORDE = (RACEMASK_ALL_PLAYABLE & ~RACEMASK_ALLIANCE) & ~(1 << (RACE_PANDAREN_NEUTRAL - 1));

// Class value is index in ChrClasses.dbc
enum Classes
{
    CLASS_NONE          = 0,
    CLASS_WARRIOR       = 1,
    CLASS_PALADIN       = 2,
    CLASS_HUNTER        = 3,
    CLASS_ROGUE         = 4,
    CLASS_PRIEST        = 5,
    CLASS_DEATH_KNIGHT  = 6,
    CLASS_SHAMAN        = 7,
    CLASS_MAGE          = 8,
    CLASS_WARLOCK       = 9,
    CLASS_MONK          = 10,
    CLASS_DRUID         = 11,
    CLASS_DEMON_HUNTER  = 12,

    MAX_CLASSES
};

constexpr auto CLASSMASK_ALL_PLAYABLE = 
	((1 << (CLASS_WARRIOR - 1)) | (1 << (CLASS_PALADIN - 1)) | (1 << (CLASS_HUNTER - 1)) |
	(1 << (CLASS_ROGUE - 1)) | (1 << (CLASS_PRIEST - 1)) | (1 << (CLASS_SHAMAN - 1)) |
	(1 << (CLASS_MAGE - 1)) | (1 << (CLASS_WARLOCK - 1)) | (1 << (CLASS_DRUID - 1)) |
	(1 << (CLASS_DEATH_KNIGHT - 1)) | (1 << (CLASS_MONK - 1)) | (1 << (CLASS_DEMON_HUNTER - 1)));

// valid classes for creature_template.unit_class
enum UnitClass
{
    UNIT_CLASS_WARRIOR                  = 1,
    UNIT_CLASS_PALADIN                  = 2,
    UNIT_CLASS_ROGUE                    = 4,
    UNIT_CLASS_MAGE                     = 8,
};

constexpr auto CLASSMASK_ALL_CREATURES = ((1 << (UNIT_CLASS_WARRIOR - 1)) | (1 << (UNIT_CLASS_PALADIN - 1)) | (1 << (UNIT_CLASS_ROGUE - 1)) | (1 << (UNIT_CLASS_MAGE - 1)));

const auto PLAYER_MAX_BATTLEGROUND_QUEUES = 2;

enum ReputationRank
{
    REP_HATED       = 0,
    REP_HOSTILE     = 1,
    REP_UNFRIENDLY  = 2,
    REP_NEUTRAL     = 3,
    REP_FRIENDLY    = 4,
    REP_HONORED     = 5,
    REP_REVERED     = 6,
    REP_EXALTED     = 7
};

const auto MAX_REPUTATION_RANK = 8;
const auto MAX_SPILLOVER_FACTIONS = 5;

const auto REP_GUILD = 1168;

enum MoneyConstants
{
    COPPER = 1,
    SILVER = COPPER*100,
    GOLD   = SILVER*100
};

enum Stats
{
    STAT_STRENGTH                      = 0,
    STAT_AGILITY                       = 1,
    STAT_STAMINA                       = 2,
    STAT_INTELLECT                     = 3,

    MAX_STATS
};

enum Powers
{
    POWER_MANA                          = 0,
    POWER_RAGE                          = 1,
    POWER_FOCUS                         = 2,
    POWER_ENERGY                        = 3,
    POWER_COMBO_POINTS                  = 4,
    POWER_RUNES                         = 5,
    POWER_RUNIC_POWER                   = 6,
    POWER_SOUL_SHARDS                   = 7,
    POWER_LUNAR_POWER                   = 8,
    POWER_HOLY_POWER                    = 9,
    POWER_ALTERNATE                     = 10,           // Used in some quests
    POWER_MAELSTROM                     = 11,
    POWER_CHI                           = 12,
    POWER_INSANITY                      = 13,
    POWER_ARCANE_CHARGES                = 16,
    POWER_FURY                          = 17,
    POWER_PAIN                          = 18,

    MAX_POWERS,

    POWER_NULL                          = 126,
    POWER_ALL                           = 127,          // default for class?
    POWER_HEALTH                        = 0xFFFFFFFE,   // (-2 as signed value)
};

// PowerDisplay.dbc
enum PowerDisplay
{
    POWER_DISPLAY_NONE                 = 0,
    POWER_TYPE_PYRITE                  = 41,
    POWER_TYPE_STEAM                   = 61,
    POWER_TYPE_VAULT_CRACKING_PROGRESS = 82,
    POWER_TYPE_HEAT                    = 101,
};

enum PowerIndex
{
    POWER_INDEX_MAIN                    = 0,
    POWER_INDEX_SECOND                  = 1,
    POWER_INDEX_THIRD                   = 2,
    POWER_INDEX_FOURTH                  = 3,

    MAX_POWERS_PER_CLASS                = 6
};

enum SpellSchools : int32
{
    SPELL_SCHOOL_NORMAL                 = 0,
    SPELL_SCHOOL_HOLY                   = 1,
    SPELL_SCHOOL_FIRE                   = 2,
    SPELL_SCHOOL_NATURE                 = 3,
    SPELL_SCHOOL_FROST                  = 4,
    SPELL_SCHOOL_SHADOW                 = 5,
    SPELL_SCHOOL_ARCANE                 = 6,

    MAX_SPELL_SCHOOL
};

enum SpellSchoolMask
{
    SPELL_SCHOOL_MASK_NONE    = 0x00,                       // not exist
    SPELL_SCHOOL_MASK_NORMAL  = (1 << SPELL_SCHOOL_NORMAL), // PHYSICAL (Armor) // 1
    SPELL_SCHOOL_MASK_HOLY    = (1 << SPELL_SCHOOL_HOLY),   // 2
    SPELL_SCHOOL_MASK_FIRE    = (1 << SPELL_SCHOOL_FIRE),   // 4
    SPELL_SCHOOL_MASK_NATURE  = (1 << SPELL_SCHOOL_NATURE), // 8
    SPELL_SCHOOL_MASK_FROST   = (1 << SPELL_SCHOOL_FROST),  // 16
    SPELL_SCHOOL_MASK_SHADOW  = (1 << SPELL_SCHOOL_SHADOW), // 32
    SPELL_SCHOOL_MASK_ARCANE  = (1 << SPELL_SCHOOL_ARCANE), // 64

    // unions

    // 124, not include normal and holy damage
    SPELL_SCHOOL_MASK_SPELL   = (SPELL_SCHOOL_MASK_FIRE   |
    SPELL_SCHOOL_MASK_NATURE | SPELL_SCHOOL_MASK_FROST  |
    SPELL_SCHOOL_MASK_SHADOW | SPELL_SCHOOL_MASK_ARCANE),
    // 126
    SPELL_SCHOOL_MASK_MAGIC   = (SPELL_SCHOOL_MASK_HOLY | SPELL_SCHOOL_MASK_SPELL),

    // 127
    SPELL_SCHOOL_MASK_ALL     = (SPELL_SCHOOL_MASK_NORMAL | SPELL_SCHOOL_MASK_MAGIC)
};

inline SpellSchools GetFirstSchoolInMask(SpellSchoolMask mask)
{
    for (int i = 0; i < MAX_SPELL_SCHOOL; ++i)
        if (mask & (1 << i))
            return SpellSchools(i);

    return SPELL_SCHOOL_NORMAL;
}

enum ItemQualities
{
    ITEM_QUALITY_POOR                  = 0,                 // Gray
    ITEM_QUALITY_NORMAL                = 1,                 // White
    ITEM_QUALITY_UNCOMMON              = 2,                 // Green
    ITEM_QUALITY_RARE                  = 3,                 // Blue
    ITEM_QUALITY_EPIC                  = 4,                 // Purple
    ITEM_QUALITY_LEGENDARY             = 5,                 // Orange
    ITEM_QUALITY_ARTIFACT              = 6,                 // Light Gold
    ITEM_QUALITY_HEIRLOOM              = 7,                 // Blizzard Blue
    ITEM_QUALITY_WOW_TOKEN             = 8,                 // Blizzard Blue

    MAX_ITEM_QUALITY
};

enum SpellCategory
{
    SPELL_CATEGORY_FOOD             = 11,
    SPELL_CATEGORY_HEALTHSTONE      = 30,
    SPELL_CATEGORY_DRINK            = 59,
};

enum SpellCategoryFlags
{
    SPELL_CATEGORY_FLAG_COOLDOWN_STARTS_ON_EVENT        = 0x04,
    SPELL_CATEGORY_FLAG_COOLDOWN_EXPIRES_AT_DAILY_RESET = 0x08,
};

const uint32 ItemQualityColors[MAX_ITEM_QUALITY] =
{
    0xff9d9d9d,        // Gray
    0xffffffff,        // White
    0xff1eff00,        // Green
    0xff0070dd,        // Blue
    0xffa335ee,        // Purple
    0xffff8000,        // Orange
    0xffe6cc80,        // Light Gold
    0xff00ccff,        // Blizzard Blue
    0xff00ccff,        // Blizzard Blue
};

// ***********************************
// Spell Attributes definitions
// ***********************************

enum SpellAttr0
{
    SPELL_ATTR0_UNK0                             = 0x00000001, //  0
    SPELL_ATTR0_REQ_AMMO                         = 0x00000002, //  1 on next ranged
    SPELL_ATTR0_ON_NEXT_SWING                    = 0x00000004, //  2
    SPELL_ATTR0_UNK                              = 0x00000008, //  3
    SPELL_ATTR0_ABILITY                          = 0x00000010, //  4 client puts 'ability' instead of 'spell' in game strings for these spells
    SPELL_ATTR0_TRADESPELL                       = 0x00000020, //  5 trade spells (recipes), will be added by client to a sublist of profession spell
    SPELL_ATTR0_PASSIVE                          = 0x00000040, //  6 Passive spell
    SPELL_ATTR0_HIDDEN_CLIENTSIDE                = 0x00000080, //  7 Spells with this attribute are not visible in spellbook or aura bar
    SPELL_ATTR0_HIDE_IN_COMBAT_LOG               = 0x00000100, //  8 This attribite controls whether spell appears in combat logs
    SPELL_ATTR0_UNK9                             = 0x00000200, //  9
    SPELL_ATTR0_ON_NEXT_SWING_2                  = 0x00000400, // 10
    SPELL_ATTR0_UNK11                            = 0x00000800, // 11
    SPELL_ATTR0_UNK12                            = 0x00001000, // 12
    SPELL_ATTR0_UNK13                            = 0x00002000, // 13
    SPELL_ATTR0_INDOORS_ONLY                     = 0x00004000, // 14 only useable indoors, not set in 2.4.2
    SPELL_ATTR0_OUTDOORS_ONLY                    = 0x00008000, // 15 Only useable outdoors.
    SPELL_ATTR0_NOT_SHAPESHIFT                   = 0x00010000, // 16 Not while shapeshifted
    SPELL_ATTR0_ONLY_STEALTHED                   = 0x00020000, // 17 Must be in stealth
    SPELL_ATTR0_DONT_AFFECT_SHEATH_STATE         = 0x00040000, // 18 client won't hide unit weapons in sheath on cast/channel
    SPELL_ATTR0_LEVEL_DAMAGE_CALCULATION         = 0x00080000, // 19 spelldamage depends on caster level
    SPELL_ATTR0_STOP_ATTACK_TARGET               = 0x00100000, // 20 Stop attack after use this spell (and not begin attack if use)
    SPELL_ATTR0_IMPOSSIBLE_DODGE_PARRY_BLOCK     = 0x00200000, // 21 Cannot be dodged/parried/blocked
    SPELL_ATTR0_CAST_TRACK_TARGET                = 0x00400000, // 22 Client automatically forces player to face target when casting
    SPELL_ATTR0_CASTABLE_WHILE_DEAD              = 0x00800000, // 23 castable while dead?
    SPELL_ATTR0_CASTABLE_WHILE_MOUNTED           = 0x01000000, // 24 castable while mounted
    SPELL_ATTR0_DISABLED_WHILE_ACTIVE            = 0x02000000, // 25 Activate and start cooldown after aura fade or remove summoned creature or go
    SPELL_ATTR0_DEBUFF                           = 0x04000000, // 26 Many negative spells have this attr
    SPELL_ATTR0_CASTABLE_WHILE_SITTING           = 0x08000000, // 27 castable while sitting
    SPELL_ATTR0_CANT_USED_IN_COMBAT              = 0x10000000, // 28 Cannot be used in combat
    SPELL_ATTR0_UNAFFECTED_BY_INVULNERABILITY    = 0x20000000, // 29 unaffected by invulnerability (hmm possible not...)
    SPELL_ATTR0_BREAKABLE_BY_DAMAGE              = 0x40000000, // 30 random chance the effect will end TODO: implement core support
    SPELL_ATTR0_CANT_CANCEL                      = 0x80000000  // 31 positive aura can't be canceled
};

enum SpellAttr1
{
    SPELL_ATTR1_DISMISS_PET                      = 0x00000001, //  0 for spells without this flag client doesn't allow to summon pet if caster has a pet
    SPELL_ATTR1_UNK1                             = 0x00000002, //  1  (Only paladin Lay of Hands and Bunyanize)
    SPELL_ATTR1_CHANNELED_1                      = 0x00000004, //  2 clientside checked? cancelable?
    SPELL_ATTR1_CANT_BE_REDIRECTED               = 0x00000008, //  3
    SPELL_ATTR1_UNK4                             = 0x00000010, //  4 stealth and whirlwind
    SPELL_ATTR1_NOT_BREAK_STEALTH                = 0x00000020, //  5 Not break stealth
    SPELL_ATTR1_CHANNELED_2                      = 0x00000040, //  6
    SPELL_ATTR1_CANT_BE_REFLECTED                = 0x00000080, //  7
    SPELL_ATTR1_CANT_TARGET_IN_COMBAT            = 0x00000100, //  8 can target only out of combat units
    SPELL_ATTR1_MELEE_COMBAT_START               = 0x00000200, //  9 player starts melee combat after this spell is cast
    SPELL_ATTR1_NO_THREAT                        = 0x00000400, // 10 no generates threat on cast 100% (old NO_INITIAL_AGGRO)
    SPELL_ATTR1_UNK11                            = 0x00000800, // 11 aura
    SPELL_ATTR1_IS_PICKPOCKET                    = 0x00001000, // 12 Pickpocket
    SPELL_ATTR1_FARSIGHT                         = 0x00002000, // 13 Client removes farsight on aura loss
    SPELL_ATTR1_CHANNEL_TRACK_TARGET             = 0x00004000, // 14 Client automatically forces player to face target when channeling
    SPELL_ATTR1_DISPEL_AURAS_ON_IMMUNITY         = 0x00008000, // 15 remove auras on immunity
    SPELL_ATTR1_UNAFFECTED_BY_SCHOOL_IMMUNE      = 0x00010000, // 16 on immuniy
    SPELL_ATTR1_UNAUTOCASTABLE_BY_PET            = 0x00020000, // 17
    SPELL_ATTR1_UNK18                            = 0x00040000, // 18 stun, polymorph, daze, hex
    SPELL_ATTR1_CANT_TARGET_SELF                 = 0x00080000, // 19
    SPELL_ATTR1_REQ_COMBO_POINTS1                = 0x00100000, // 20 Req combo points on target
    SPELL_ATTR1_UNK21                            = 0x00200000, // 21
    SPELL_ATTR1_REQ_COMBO_POINTS2                = 0x00400000, // 22 Req combo points on target
    SPELL_ATTR1_UNK23                            = 0x00800000, // 23
    SPELL_ATTR1_IS_FISHING                       = 0x01000000, // 24 only fishing spells
    SPELL_ATTR1_UNK25                            = 0x02000000, // 25
    SPELL_ATTR1_UNK26                            = 0x04000000, // 26 works correctly with [target=focus] and [target=mouseover] macros?
    SPELL_ATTR1_UNK27                            = 0x08000000, // 27 melee spell?
    SPELL_ATTR1_DONT_DISPLAY_IN_AURA_BAR         = 0x10000000, // 28 client doesn't display these spells in aura bar
    SPELL_ATTR1_CHANNEL_DISPLAY_SPELL_NAME       = 0x20000000, // 29 spell name is displayed in cast bar instead of 'channeling' text
    SPELL_ATTR1_ENABLE_AT_DODGE                  = 0x40000000, // 30 Overpower
    SPELL_ATTR1_UNK31                            = 0x80000000  // 31
};

enum SpellAttr2
{
    SPELL_ATTR2_CAN_TARGET_DEAD                  = 0x00000001, //  0 can target dead unit or corpse
    SPELL_ATTR2_UNK1                             = 0x00000002, //  1 vanish, shadowform, Ghost Wolf and other
    SPELL_ATTR2_CAN_TARGET_NOT_IN_LOS            = 0x00000004, //  2 26368 4.0.1 dbc change
    SPELL_ATTR2_UNK3                             = 0x00000008, //  3
    SPELL_ATTR2_DISPLAY_IN_STANCE_BAR            = 0x00000010, //  4 client displays icon in stance bar when learned, even if not shapeshift
    SPELL_ATTR2_AUTOREPEAT_FLAG                  = 0x00000020, //  5
    SPELL_ATTR2_CANT_TARGET_TAPPED               = 0x00000040, //  6 target must be tapped by caster
    SPELL_ATTR2_UNK7                             = 0x00000080, //  7
    SPELL_ATTR2_UNK8                             = 0x00000100, //  8 not set in 3.0.3
    SPELL_ATTR2_UNK9                             = 0x00000200, //  9
    SPELL_ATTR2_UNK10                            = 0x00000400, // 10 related to tame
    SPELL_ATTR2_HEALTH_FUNNEL                    = 0x00000800, // 11
    SPELL_ATTR2_UNK12                            = 0x00001000, // 12 Cleave, Heart Strike, Maul, Sunder Armor, Swipe
    SPELL_ATTR2_PRESERVE_ENCHANT_IN_ARENA        = 0x00002000, // 13 Items enchanted by spells with this flag preserve the enchant to arenas
    SPELL_ATTR2_UNK14                            = 0x00004000, // 14
    SPELL_ATTR2_UNK15                            = 0x00008000, // 15 not set in 3.0.3
    SPELL_ATTR2_TAME_BEAST                       = 0x00010000, // 16
    SPELL_ATTR2_NOT_RESET_AUTO_ACTIONS           = 0x00020000, // 17 don't reset timers for melee autoattacks (swings) or ranged autoattacks (autoshoots)
    SPELL_ATTR2_REQ_DEAD_PET                     = 0x00040000, // 18 Only Revive pet and Heart of the Pheonix
    SPELL_ATTR2_NOT_NEED_SHAPESHIFT              = 0x00080000, // 19 does not necessarly need shapeshift
    SPELL_ATTR2_UNK20                            = 0x00100000, // 20
    SPELL_ATTR2_DAMAGE_REDUCED_SHIELD            = 0x00200000, // 21 for ice blocks, pala immunity buffs, priest absorb shields, but used also for other spells -> not sure!
    SPELL_ATTR2_UNK22                            = 0x00400000, // 22 Ambush, Backstab, Cheap Shot, Death Grip, Garrote, Judgements, Mutilate, Pounce, Ravage, Shiv, Shred
    SPELL_ATTR2_IS_ARCANE_CONCENTRATION          = 0x00800000, // 23 Only mage Arcane Concentration have this flag
    SPELL_ATTR2_UNK24                            = 0x01000000, // 24
    SPELL_ATTR2_UNK25                            = 0x02000000, // 25
    SPELL_ATTR2_UNK26                            = 0x04000000, // 26 unaffected by school immunity
    SPELL_ATTR2_UNK27                            = 0x08000000, // 27
    SPELL_ATTR2_IGNORE_ITEM_CHECK                = 0x10000000, // 28
    SPELL_ATTR2_CANT_CRIT                        = 0x20000000, // 29 Spell can't crit
    SPELL_ATTR2_TRIGGERED_CAN_TRIGGER_PROC       = 0x40000000, // 30 spell can trigger even if triggered
    SPELL_ATTR2_FOOD_BUFF                        = 0x80000000  // 31 Food or Drink Buff (like Well Fed)
};

enum SpellAttr3
{
    SPELL_ATTR3_UNK0                             = 0x00000001, //  0
    SPELL_ATTR3_UNK1                             = 0x00000002, //  1
    SPELL_ATTR3_UNK2                             = 0x00000004, //  2
    SPELL_ATTR3_BLOCKABLE_SPELL                  = 0x00000008, //  3 Only dmg class melee in 3.1.3
    SPELL_ATTR3_IGNORE_RESURRECTION_TIMER        = 0x00000010, //  4 you don't have to wait to be resurrected with these spells
    SPELL_ATTR3_UNK5                             = 0x00000020, //  5
    SPELL_ATTR3_UNK6                             = 0x00000040, //  6
    SPELL_ATTR3_STACK_FOR_DIFF_CASTERS           = 0x00000080, //  7 separate stack for every caster
    SPELL_ATTR3_ONLY_TARGET_PLAYERS              = 0x00000100, //  8 can only target players
    SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2     = 0x00000200, //  9 triggered from effect?
    SPELL_ATTR3_MAIN_HAND                        = 0x00000400, // 10 Main hand weapon required
    SPELL_ATTR3_BATTLEGROUND                     = 0x00000800, // 11 Can casted only on battleground
    SPELL_ATTR3_ONLY_TARGET_GHOSTS               = 0x00001000, // 12
    SPELL_ATTR3_DONT_DISPLAY_CHANNEL_BAR         = 0x00002000, // 13 Clientside attribute - will not display channeling bar
    SPELL_ATTR3_UNK14                            = 0x00004000, // 14
    SPELL_ATTR3_UNK15                            = 0x00008000, // 15 Auto Shoot, Shoot, Throw,  - this is autoshot flag
    SPELL_ATTR3_CANT_TRIGGER_PROC                = 0x00010000, // 16 confirmed with many patchnotes
    SPELL_ATTR3_NO_INITIAL_AGGRO                 = 0x00020000, // 17 Soothe Animal, 39758, Mind Soothe
    SPELL_ATTR3_IGNORE_HIT_RESULT                = 0x00040000, // 18 Spell should always hit its target
    SPELL_ATTR3_DISABLE_PROC                     = 0x00080000, // 19 during aura proc no spells can trigger(неверно определенный атрибут к примеру 5.4.1 спелл 144899 должен прокать от 51124, который тригерится из 51128 с этим атрибутом)
    SPELL_ATTR3_DEATH_PERSISTENT                 = 0x00100000, // 20 Death persistent spells
    SPELL_ATTR3_UNK21                            = 0x00200000, // 21 unused
    SPELL_ATTR3_UNK22                            = 0x00400000, // 22
    SPELL_ATTR3_UNK23                            = 0x00800000, // 23
    SPELL_ATTR3_REQ_OFFHAND                      = 0x01000000, // 24 Req offhand weapon
    SPELL_ATTR3_TREAT_AS_PERIODIC                = 0x02000000, // 25 Makes the spell appear as periodic in client combat logs - used by spells that trigger another spell on each tick
    SPELL_ATTR3_CAN_PROC_WITH_TRIGGERED          = 0x04000000, // 26 auras with this attribute can proc from triggered spell casts with SPELL_ATTR3_TRIGGERED_CAN_TRIGGER_PROC_2 (67736 + 52999)
    SPELL_ATTR3_DRAIN_SOUL                       = 0x08000000, // 27 only drain soul has this flag
    SPELL_ATTR3_UNK28                            = 0x10000000, // 28
    SPELL_ATTR3_NO_DONE_BONUS                    = 0x20000000, // 29 Ignore caster spellpower and done damage mods?  client doesn't apply spellmods for those spells
    SPELL_ATTR3_DONT_DISPLAY_RANGE               = 0x40000000, // 30 client doesn't display range in tooltip for those spells
    SPELL_ATTR3_UNK31                            = 0x80000000  // 31
};

enum SpellAttr4
{
    SPELL_ATTR4_IGNORE_RESISTANCES               = 0x00000001, //  0 spells with this attribute will completely ignore the target's resistance (these spells can't be resisted)
    SPELL_ATTR4_PROC_ONLY_ON_CASTER              = 0x00000002, //  1 proc only on effects with TARGET_UNIT_CASTER?
    SPELL_ATTR4_UNK2                             = 0x00000004, //  2
    SPELL_ATTR4_UNK3                             = 0x00000008, //  3
    SPELL_ATTR4_HAS_DELAY                        = 0x00000010, //  4 This will no longer cause guards to attack on use??
    SPELL_ATTR4_UNK5                             = 0x00000020, //  5
    SPELL_ATTR4_NOT_STEALABLE                    = 0x00000040, //  6 although such auras might be dispellable, they cannot be stolen
    SPELL_ATTR4_TRIGGERED                        = 0x00000080, //  7 spells forced to be triggered
    SPELL_ATTR4_FIXED_DAMAGE                     = 0x00000100, //  8 ignores taken percent damage mods?
    SPELL_ATTR4_TRIGGER_ACTIVATE                 = 0x00000200, //  9 initially disabled / trigger activate from event (Execute, Riposte, Deep Freeze end other)
    SPELL_ATTR4_UNK10                            = 0x00000400, // 10
    SPELL_ATTR4_UNK11                            = 0x00000800, // 11
    SPELL_ATTR4_UNK12                            = 0x00001000, // 12
    SPELL_ATTR4_COMBAT_LOG_NO_CASTER             = 0x00002000, // 13 No caster object is sent to client combat log
    SPELL_ATTR4_DAMAGE_DOESNT_BREAK_AURAS        = 0x00004000, // 14 doesn't break auras by damage from these spells
    SPELL_ATTR4_HIDDEN_SPELLBOOK                 = 0x00008000, // 15
    SPELL_ATTR4_NOT_USABLE_IN_ARENA_OR_RATED_BG  = 0x00010000, // 16 Cannot be used in both Arenas or Rated Battlegrounds
    SPELL_ATTR4_USABLE_IN_ARENA                  = 0x00020000, // 17
    SPELL_ATTR4_AREA_TARGET_CHAIN                = 0x00040000, // 18 (NYI)hits area targets one after another instead of all at once
    SPELL_ATTR4_UNK19                            = 0x00080000, // 19 proc dalayed, after damage or don't proc on absorb?
    SPELL_ATTR4_NOT_CHECK_SELFCAST_POWER         = 0x00100000, // 20 supersedes message "More powerful spell applied" for self casts.
    SPELL_ATTR4_UNK21                            = 0x00200000, // 21 Pally aura, dk presence, dudu form, warrior stance, shadowform, hunter track
    SPELL_ATTR4_UNK22                            = 0x00400000, // 22 Seal of Command (42058,57770) and Gymer's Smash 55426
    SPELL_ATTR4_UNK23                            = 0x00800000, // 23
    SPELL_ATTR4_UNK24                            = 0x01000000, // 24 some shoot spell
    SPELL_ATTR4_IS_PET_SCALING                   = 0x02000000, // 25 pet scaling auras
    SPELL_ATTR4_UNK26                            = 0x04000000, // 26
    SPELL_ATTR4_UNK27                            = 0x08000000, // 27
    SPELL_ATTR4_UNK28                            = 0x10000000, // 28 Aimed Shot
    SPELL_ATTR4_UNK29                            = 0x20000000, // 29
    SPELL_ATTR4_UNK30                            = 0x40000000, // 30
    SPELL_ATTR4_UNK31                            = 0x80000000  // 31 Polymorph (chicken) 228 and Sonic Boom (38052,38488)
};

enum SpellAttr5
{
    SPELL_ATTR5_USABLE_WHILE_MOVING              = 0x00000001, //  0 usable while moving
    SPELL_ATTR5_NO_REAGENT_WHILE_PREP            = 0x00000002, //  1 not need reagents if UNIT_FLAG_PREPARATION
    SPELL_ATTR5_UNK2                             = 0x00000004, //  2
    SPELL_ATTR5_USABLE_WHILE_STUNNED             = 0x00000008, //  3 usable while stunned
    SPELL_ATTR5_UNK4                             = 0x00000010, //  4
    SPELL_ATTR5_SINGLE_TARGET_SPELL              = 0x00000020, //  5 Only one target can be apply at a time
    SPELL_ATTR5_UNK6                             = 0x00000040, //  6
    SPELL_ATTR5_UNK7                             = 0x00000080, //  7
    SPELL_ATTR5_UNK8                             = 0x00000100, //  8
    SPELL_ATTR5_START_PERIODIC_AT_APPLY          = 0x00000200, //  9 begin periodic tick at aura apply
    SPELL_ATTR5_HIDE_DURATION                    = 0x00000400, // 10 do not send duration to client
    SPELL_ATTR5_ALLOW_TARGET_OF_TARGET_AS_TARGET = 0x00000800, // 11 (NYI) uses target's target as target if original target not valid (intervene for example)
    SPELL_ATTR5_UNK12                            = 0x00001000, // 12 Cleave related?
    SPELL_ATTR5_HASTE_AFFECT_TICK_AND_CASTTIME   = 0x00002000, // 13 haste effects decrease duration of this, amplitude modify
    SPELL_ATTR5_UNK14                            = 0x00004000, // 14
    SPELL_ATTR5_CANT_IMMUNITY_SPELL              = 0x00008000, // 15 Can`t mechanic immunity spell
    SPELL_ATTR5_UNK16                            = 0x00010000, // 16
    SPELL_ATTR5_USABLE_WHILE_FEARED              = 0x00020000, // 17 usable while feared
    SPELL_ATTR5_USABLE_WHILE_CONFUSED            = 0x00040000, // 18 usable while confused
    SPELL_ATTR5_DONT_TURN_DURING_CAST            = 0x00080000, // 19 Blocks caster's turning when casting (client does not automatically turn caster's model to face UNIT_FIELD_TARGET)
    SPELL_ATTR5_UNK20                            = 0x00100000, // 20
    SPELL_ATTR5_UNK21                            = 0x00200000, // 21
    SPELL_ATTR5_UNK22                            = 0x00400000, // 22
    SPELL_ATTR5_UNK23                            = 0x00800000, // 23
    SPELL_ATTR5_UNK24                            = 0x01000000, // 24
    SPELL_ATTR5_UNK25                            = 0x02000000, // 25
    SPELL_ATTR5_UNK26                            = 0x04000000, // 26 aoe related - Boulder, Cannon, Corpse Explosion, Fire Nova, Flames, Frost Bomb, Living Bomb, Seed of Corruption, Starfall, Thunder Clap, Volley
    SPELL_ATTR5_DONT_SHOW_AURA_IF_SELF_CAST      = 0x08000000, // 27 Auras with this attribute are not visible on units that are the caster 
    SPELL_ATTR5_DONT_SHOW_AURA_IF_NOT_SELF_CAST  = 0x10000000, // 28 Auras with this attribute are not visible on units that are not the caster 
    SPELL_ATTR5_UNK29                            = 0x20000000, // 29
    SPELL_ATTR5_UNK30                            = 0x40000000, // 30
    SPELL_ATTR5_UNK31                            = 0x80000000  // 31 Forces all nearby enemies to focus attacks caster
};

enum SpellAttr6
{
    SPELL_ATTR6_DONT_DISPLAY_COOLDOWN            = 0x00000001, //  0 client doesn't display cooldown in tooltip for these spells
    SPELL_ATTR6_UNK1                             = 0x00000002, //  1
    SPELL_ATTR6_IGNORE_CASTER_AURAS              = 0x00000004, //  2
    SPELL_ATTR6_ASSIST_IGNORE_IMMUNE_FLAG        = 0x00000008, //  3 skips checking UNIT_FLAG_IMMUNE_TO_PC and UNIT_FLAG_IMMUNE_TO_NPC flags on assist
    SPELL_ATTR6_UNK4                             = 0x00000010, //  4
    SPELL_ATTR6_UNK5                             = 0x00000020, //  5
    SPELL_ATTR6_USE_SPELL_CAST_EVENT             = 0x00000040, //  6 Auras with this attribute trigger SPELL_CAST combat log event instead of SPELL_AURA_START (clientside attribute)
    SPELL_ATTR6_UNK7                             = 0x00000080, //  7
    SPELL_ATTR6_CANT_TARGET_CROWD_CONTROLLED     = 0x00000100, //  8
    SPELL_ATTR6_UNK9                             = 0x00000200, //  9
    SPELL_ATTR6_CAN_TARGET_POSSESSED_FRIENDS     = 0x00000400, // 10 NYI!
    SPELL_ATTR6_NOT_IN_RAID_INSTANCE             = 0x00000800, // 11 not usable in raid instance
    SPELL_ATTR6_CASTABLE_WHILE_ON_VEHICLE        = 0x00001000, // 12 castable while caster is on vehicle
    SPELL_ATTR6_CAN_TARGET_INVISIBLE             = 0x00002000, // 13 ignore visibility requirement for spell target (phases, invisibility, etc.)
    SPELL_ATTR6_UNK14                            = 0x00004000, // 14
    SPELL_ATTR6_UNK15                            = 0x00008000, // 15 only 54368, 67892
    SPELL_ATTR6_UNK16                            = 0x00010000, // 16
    SPELL_ATTR6_CANT_PROC                        = 0x00020000, // 17 Mount spell, Bonus loot, Quest
    SPELL_ATTR6_CAST_BY_CHARMER                  = 0x00040000, // 18 client won't allow to cast these spells when unit is not possessed && charmer of caster will be original caster
    SPELL_ATTR6_UNK19                            = 0x00080000, // 19 only 47488, 50782
    SPELL_ATTR6_ONLY_VISIBLE_TO_CASTER           = 0x00100000, // 20 Auras with this attribute are only visible to their caster (or pet's owner)
    SPELL_ATTR6_CLIENT_UI_TARGET_EFFECTS         = 0x00200000, // 21 it's only client-side attribute
    SPELL_ATTR6_NOT_LIMIT_ABSORB                 = 0x00400000, // 22 Absorb not limit
    SPELL_ATTR6_UNK23                            = 0x00800000, // 23
    SPELL_ATTR6_CAN_TARGET_UNTARGETABLE          = 0x01000000, // 24
    SPELL_ATTR6_NOT_RESET_SWING_IF_INSTANT       = 0x02000000, // 25 Exorcism, Flash of Light
    SPELL_ATTR6_UNK26                            = 0x04000000, // 26 related to player castable positive buff
    SPELL_ATTR6_UNK27                            = 0x08000000, // 27
    SPELL_ATTR6_UNK28                            = 0x10000000, // 28 Death Grip
    SPELL_ATTR6_NO_DONE_PCT_DAMAGE_MODS          = 0x20000000, // 29 ignores done percent damage mods and not crit
    SPELL_ATTR6_UNK30                            = 0x40000000, // 30
    SPELL_ATTR6_IGNORE_CATEGORY_COOLDOWN_MODS    = 0x80000000  // 31 Spells with this attribute skip applying modifiers to category cooldowns (only 2894)
};

enum SpellAttr7
{
    SPELL_ATTR7_UNK0                             = 0x00000001, //  0 Shaman's new spells (Call of the ...), Feign Death.
    SPELL_ATTR7_IGNORE_DURATION_MODS             = 0x00000002, //  1 Duration is not affected by duration modifiers
    SPELL_ATTR7_REACTIVATE_AT_RESURRECT          = 0x00000004, //  2 Paladin's auras and 65607 only.
    SPELL_ATTR7_IS_CHEAT_SPELL                   = 0x00000008, //  3 Cannot cast if caster doesn't have UnitFlag2 & UNIT_FLAG2_ALLOW_CHEAT_SPELLS
    SPELL_ATTR7_UNK4                             = 0x00000010, //  4 Only 47883 (Soulstone Resurrection) and test spell.
    SPELL_ATTR7_SUMMON_TOTEM                     = 0x00000020, //  5 Only Shaman totems.
    SPELL_ATTR7_NO_PUSHBACK_ON_DAMAGE            = 0x00000040, //  6 Does not cause spell pushback on damage
    SPELL_ATTR7_UNK7                             = 0x00000080, //  7 66218 (Launch) spell.
    SPELL_ATTR7_HORDE_ONLY                       = 0x00000100, //  8 Teleports, mounts and other spells.
    SPELL_ATTR7_ALLIANCE_ONLY                    = 0x00000200, //  9 Teleports, mounts and other spells.
    SPELL_ATTR7_DISPEL_CHARGES                   = 0x00000400, // 10 Dispel and Spellsteal individual charges instead of whole aura.
    SPELL_ATTR7_INTERRUPT_ONLY_NONPLAYER         = 0x00000800, // 11 Only non-player casts interrupt, though Feral Charge - Bear has it.
    SPELL_ATTR7_UNK12                            = 0x00001000, // 12
    SPELL_ATTR7_UNK13                            = 0x00002000, // 13
    SPELL_ATTR7_UNK14                            = 0x00004000, // 14 Only 52150 (Raise Dead - Pet) spell.
    SPELL_ATTR7_UNK15                            = 0x00008000, // 15 Exorcism. Usable on players? 100% crit chance on undead and demons?
    SPELL_ATTR7_CAN_RESTORE_SECONDARY_POWER      = 0x00010000, // 16 These spells can replenish a powertype, which is not the current powertype.
    SPELL_ATTR7_UNK17                            = 0x00020000, // 17 Only 27965 (Suicide) spell.
    SPELL_ATTR7_HAS_CHARGE_EFFECT                = 0x00040000, // 18 Only spells that have Charge among effects.
    SPELL_ATTR7_ZONE_TELEPORT                    = 0x00080000, // 19 Teleports to specific zones.
    SPELL_ATTR7_UNK20                            = 0x00100000, // 20 Blink, Divine Shield, Ice Block
    SPELL_ATTR7_UNK21                            = 0x00200000, // 21 Not set
    SPELL_ATTR7_UNK22                            = 0x00400000, // 22
    SPELL_ATTR7_UNK23                            = 0x00800000, // 23 Motivate, Mutilate, Shattering Throw
    SPELL_ATTR7_UNK24                            = 0x01000000, // 24 Motivate, Mutilate, Perform Speech, Shattering Throw
    SPELL_ATTR7_UNK25                            = 0x02000000, // 25
    SPELL_ATTR7_UNK26                            = 0x04000000, // 26
    SPELL_ATTR7_UNK27                            = 0x08000000, // 27 Not set
    SPELL_ATTR7_CONSOLIDATED_RAID_BUFF           = 0x10000000, // 28 May be collapsed in raid buff frame (clientside attribute)
    SPELL_ATTR7_UNK29                            = 0x20000000, // 29 only 69028, 71237
    SPELL_ATTR7_UNK30                            = 0x40000000, // 30 Burning Determination, Divine Sacrifice, Earth Shield, Prayer of Mending
    SPELL_ATTR7_CLIENT_INDICATOR                 = 0x80000000
};

enum SpellAttr8
{
    SPELL_ATTR8_CANT_MISS                        = 0x00000001, // 0
    SPELL_ATTR8_UNK1                             = 0x00000002, // 1
    SPELL_ATTR8_UNK2                             = 0x00000004, // 2
    SPELL_ATTR8_UNK3                             = 0x00000008, // 3
    SPELL_ATTR8_UNK4                             = 0x00000010, // 4
    SPELL_ATTR8_UNK5                             = 0x00000020, // 5
    SPELL_ATTR8_UNK6                             = 0x00000040, // 6
    SPELL_ATTR8_UNK7                             = 0x00000080, // 7
    SPELL_ATTR8_AFFECT_PARTY_AND_RAID            = 0x00000100, // 8 Nearly all spells have "all party and raid" in description
    SPELL_ATTR8_DONT_RESET_PERIODIC_TIMER        = 0x00000200, // 9 Periodic auras with this flag keep old periodic timer when refreshing at close to one tick remaining (kind of anti DoT clipping)
    SPELL_ATTR8_NAME_CHANGED_DURING_TRANSFORM    = 0x00000400, // 10 according to wowhead comments, name changes, title remains
    SPELL_ATTR8_UNK11                            = 0x00000800, // 11
    SPELL_ATTR8_AURA_SEND_AMOUNT                 = 0x00001000, // 12 Aura must have flag AFLAG_ANY_EFFECT_AMOUNT_SENT to send amount
    SPELL_ATTR8_UNK13                            = 0x00002000, // 13
    SPELL_ATTR8_UNK14                            = 0x00004000, // 14
    SPELL_ATTR8_WATER_MOUNT                      = 0x00008000, // 15 only one River Boat used in Thousand Needles
    SPELL_ATTR8_UNK16                            = 0x00010000, // 16
    SPELL_ATTR8_HASTE_AFFECT_DURATION_RECOVERY   = 0x00020000, // 17 Modify duration on haste
    SPELL_ATTR8_REMEMBER_SPELLS                  = 0x00040000, // 18 at some point in time, these auras remember spells and allow to cast them later
    SPELL_ATTR8_UNK19                            = 0x00080000, // 19
    SPELL_ATTR8_ARMOR_SPECIALIZATION             = 0x00100000, // 20
    SPELL_ATTR8_UNK21                            = 0x00200000, // 21
    SPELL_ATTR8_HASTE_AFFECT_DURATION            = 0x00400000, // 22
    SPELL_ATTR8_BATTLE_RESURRECTION              = 0x00800000, // 23 Used to limit the Amount of Resurrections in Boss Encounters
    SPELL_ATTR8_HEALING_SPELL                    = 0x01000000, // 24
    SPELL_ATTR8_USABLE_WHILE_SILENCED            = 0x02000000, // 25
    SPELL_ATTR8_RAID_MARKER                      = 0x04000000, // 26 probably spell no need learn to cast
    SPELL_ATTR8_UNK27                            = 0x08000000, // 27
    SPELL_ATTR8_NOT_IN_BG_OR_ARENA               = 0x10000000, // 28 not allow to cast or deactivate currently active effect, not sure about Fast Track
    SPELL_ATTR8_MASTERY_SPECIALIZATION           = 0x20000000, // 29
    SPELL_ATTR8_UNK30                            = 0x40000000, // 30
    SPELL_ATTR8_ATTACK_IGNORE_IMMUNE_TO_PC_FLAG  = 0x80000000  // 31 Do not check UNIT_FLAG_IMMUNE_TO_PC in IsValidAttackTarget
};

enum SpellAttr9
{
    SPELL_ATTR9_UNK0                             = 0x00000001, // 0
    SPELL_ATTR9_UNK1                             = 0x00000002, // 1
    SPELL_ATTR9_RESTRICTED_FLIGHT_AREA           = 0x00000004, // 2 Dalaran and Wintergrasp flight area auras have it
    SPELL_ATTR9_UNK3                             = 0x00000008, // 3
    SPELL_ATTR9_SPECIAL_DELAY_CALCULATION        = 0x00000010, // 4
    SPELL_ATTR9_SUMMON_PLAYER_TOTEM              = 0x00000020, // 5
    SPELL_ATTR9_UNK6                             = 0x00000040, // 6
    SPELL_ATTR9_UNK7                             = 0x00000080, // 7
    SPELL_ATTR9_AIMED_SHOT                       = 0x00000100, //  8
    SPELL_ATTR9_NOT_USABLE_IN_ARENA              = 0x00000200, // 9 Cannot be used in arenas
    SPELL_ATTR9_UNK10                            = 0x00000400, // 10
    SPELL_ATTR9_UNK11                            = 0x00000800, // 11
    SPELL_ATTR9_UNK12                            = 0x00001000, // 12
    SPELL_ATTR9_SLAM                             = 0x00002000, // 13
    SPELL_ATTR9_USABLE_IN_RATED_BATTLEGROUNDS    = 0x00004000, // 14 Can be used in Rated Battlegrounds
    SPELL_ATTR9_UNK15                            = 0x00008000, // 15
    SPELL_ATTR9_UNK16                            = 0x00010000, // 16
    SPELL_ATTR9_UNK17                            = 0x00020000, // 17
    SPELL_ATTR9_UNK18                            = 0x00040000, // 18
    SPELL_ATTR9_UNK19                            = 0x00080000, // 19
    SPELL_ATTR9_UNK20                            = 0x00100000, // 20
    SPELL_ATTR9_UNK21                            = 0x00200000, // 21
    SPELL_ATTR9_UNK22                            = 0x00400000, // 22
    SPELL_ATTR9_UNK23                            = 0x00800000, // 23 Jump or Roll spell
    SPELL_ATTR9_UNK24                            = 0x01000000, // 24
    SPELL_ATTR9_UNK25                            = 0x02000000, // 25
    SPELL_ATTR9_UNK26                            = 0x04000000, // 26
    SPELL_ATTR9_UNK27                            = 0x08000000, // 27
    SPELL_ATTR9_UNK28                            = 0x10000000, // 28
    SPELL_ATTR9_UNK29                            = 0x20000000, // 29
    SPELL_ATTR9_UNK30                            = 0x40000000, // 30
    SPELL_ATTR9_UNK31                            = 0x80000000  // 31
};

enum SpellAttr10
{
    SPELL_ATTR10_UNK0                             = 0x00000001, // 0
    SPELL_ATTR10_UNK1                             = 0x00000002, // 1
    SPELL_ATTR10_UNK2                             = 0x00000004, // 2
    SPELL_ATTR10_UNK3                             = 0x00000008, // 3
    SPELL_ATTR10_WATER_SPOUT                      = 0x00000010, // 4
    SPELL_ATTR10_UNK5                             = 0x00000020, // 5
    SPELL_ATTR10_UNK6                             = 0x00000040, // 6
    SPELL_ATTR10_TELEPORT_PLAYER                  = 0x00000080, // 7 4 Teleport Player spells
    SPELL_ATTR10_UNK8                             = 0x00000100, // 8
    SPELL_ATTR10_UNK9                             = 0x00000200, // 9
    SPELL_ATTR10_UNK10                            = 0x00000400, // 10
    SPELL_ATTR10_HERB_GATHERING_MINING            = 0x00000800, // 11 Only Herb Gathering and Mining
    SPELL_ATTR10_USE_SPELL_BASE_LEVEL_FOR_SCALING = 0x00001000, // 12
    SPELL_ATTR10_UNK13                            = 0x00002000, // 13
    SPELL_ATTR10_STACK_DAMAGE_OR_HEAL             = 0x00004000, // 14 Stack damage(heal) from last damage(heal) by damage(heal) - (damage * tick left(may be time))
    SPELL_ATTR10_UNK15                            = 0x00008000, // 15
    SPELL_ATTR10_UNK16                            = 0x00010000, // 16
    SPELL_ATTR10_CAN_DODGE_ON_CAST                = 0x00020000, // 17 When player casted spell can dodge
    SPELL_ATTR10_CAN_PARRY_ON_CAST                = 0x00040000, // 18 When player casted spell 46924, 101546, 113656 he can parry
    SPELL_ATTR10_UNK19                            = 0x00080000, // 19
    SPELL_ATTR10_UNK20                            = 0x00100000, // 20
    SPELL_ATTR10_UNK21                            = 0x00200000, // 21
    SPELL_ATTR10_UNK22                            = 0x00400000, // 22
    SPELL_ATTR10_UNK23                            = 0x00800000, // 23
    SPELL_ATTR10_COOLDOWN_MARKER                  = 0x01000000, // 24
    SPELL_ATTR10_UNK25                            = 0x02000000, // 25
    SPELL_ATTR10_UNK26                            = 0x04000000, // 26
    SPELL_ATTR10_UNK27                            = 0x08000000, // 27
    SPELL_ATTR10_UNK28                            = 0x10000000, // 28
    SPELL_ATTR10_MOUNT_IS_NOT_ACCOUNT_WIDE        = 0x20000000, // 29 This mount is stored per-character
    SPELL_ATTR10_UNK30                            = 0x40000000, // 30
    SPELL_ATTR10_UNK31                            = 0x80000000  // 31
};

enum SpellAttr11
{
    SPELL_ATTR11_UNK0                             = 0x00000001, // 0
    SPELL_ATTR11_UNK1                             = 0x00000002, // 1    Decrease speed
    SPELL_ATTR11_SEND_ITEM_LEVEL                  = 0x00000004, // 2    Stat buffs
    SPELL_ATTR11_UNK3                             = 0x00000008, // 3    Spirit of Redemption
    SPELL_ATTR11_UNK4                             = 0x00000010, // 4
    SPELL_ATTR11_ABSORB_ENVIRONMENTAL_DAMAGE      = 0x00000020, // 5
    SPELL_ATTR11_DONT_INTERRUPT_WITH_CAST_SPELL   = 0x00000040, // 6
    SPELL_ATTR11_RANK_IGNORES_CASTER_LEVEL        = 0x00000080, // 7
    SPELL_ATTR11_UNK8                             = 0x00000100, // 8    Zen Flight (Minor Glyph)
    SPELL_ATTR11_UNK9                             = 0x00000200, // 9    Dark Simulacrum
    SPELL_ATTR11_UNK10                            = 0x00000400, // 10   Stealth
    SPELL_ATTR11_UNK11                            = 0x00000800, // 11   Zen Pilgrimage
    SPELL_ATTR11_USABLE_IN_GROUP_ONLY             = 0x00001000, // 12   Burning Wrath, Swiftblade's Cunning (Passive), Grace of Air
    SPELL_ATTR11_UNK13                            = 0x00002000, // 13
    SPELL_ATTR11_UNK14                            = 0x00004000, // 14   Player Farm Quest Invisibility 27
    SPELL_ATTR11_UNK15                            = 0x00008000, // 15
    SPELL_ATTR11_NOT_USABLE_IN_CHALLENGE_MODE     = 0x00010000, // 16
    SPELL_ATTR11_UNK17                            = 0x00020000, // 17   Headbutt
    SPELL_ATTR11_UNK18                            = 0x00040000, // 18
    SPELL_ATTR11_UNK19                            = 0x00080000, // 19
    SPELL_ATTR11_UNK20                            = 0x00100000, // 20
    SPELL_ATTR11_UNK21                            = 0x00200000, // 21
    SPELL_ATTR11_UNK22                            = 0x00400000, // 22
    SPELL_ATTR11_UNK23                            = 0x00800000, // 23
    SPELL_ATTR11_UNK24                            = 0x01000000, // 24
    SPELL_ATTR11_UNK25                            = 0x02000000, // 25
    SPELL_ATTR11_UNK26                            = 0x04000000, // 26
    SPELL_ATTR11_UNK27                            = 0x08000000, // 27
    SPELL_ATTR11_UNK28                            = 0x10000000, // 28
    SPELL_ATTR11_UNK29                            = 0x20000000, // 29
    SPELL_ATTR11_UNK30                            = 0x40000000, // 30
    SPELL_ATTR11_UNK31                            = 0x80000000  // 31
};

enum SpellAttr12
{
    SPELL_ATTR12_UNK0                             = 0x00000001, //  0
    SPELL_ATTR12_UNK1                             = 0x00000002, //  1
    SPELL_ATTR12_UNK2                             = 0x00000004, //  2
    SPELL_ATTR12_UNK3                             = 0x00000008, //  3
    SPELL_ATTR12_UNK4                             = 0x00000010, //  4
    SPELL_ATTR12_UNK5                             = 0x00000020, //  5
    SPELL_ATTR12_UNK6                             = 0x00000040, //  6
    SPELL_ATTR12_UNK7                             = 0x00000080, //  7
    SPELL_ATTR12_UNK8                             = 0x00000100, //  8
    SPELL_ATTR12_UNK9                             = 0x00000200, //  9
    SPELL_ATTR12_UNK10                            = 0x00000400, // 10
    SPELL_ATTR12_UNK11                            = 0x00000800, // 11
    SPELL_ATTR12_UNK12                            = 0x00001000, // 12
    SPELL_ATTR12_UNK13                            = 0x00002000, // 13
    SPELL_ATTR12_UNK14                            = 0x00004000, // 14
    SPELL_ATTR12_UNK15                            = 0x00008000, // 15
    SPELL_ATTR12_UNK16                            = 0x00010000, // 16
    SPELL_ATTR12_UNK17                            = 0x00020000, // 17
    SPELL_ATTR12_UNK18                            = 0x00040000, // 18
    SPELL_ATTR12_UNK19                            = 0x00080000, // 19
    SPELL_ATTR12_UNK20                            = 0x00100000, // 20
    SPELL_ATTR12_UNK21                            = 0x00200000, // 21
    SPELL_ATTR12_UNK22                            = 0x00400000, // 22
    SPELL_ATTR12_UNK23                            = 0x00800000, // 23
    SPELL_ATTR12_IS_GARRISON_BUFF                 = 0x01000000, // 24
    SPELL_ATTR12_UNK25                            = 0x02000000, // 25
    SPELL_ATTR12_UNK26                            = 0x04000000, // 26
    SPELL_ATTR12_IS_READINESS_SPELL               = 0x08000000, // 27
    SPELL_ATTR12_UNK28                            = 0x10000000, // 28
    SPELL_ATTR12_UNK29                            = 0x20000000, // 29
    SPELL_ATTR12_UNK30                            = 0x40000000, // 30
    SPELL_ATTR12_UNK31                            = 0x80000000  // 31
};

enum SpellAttr13
{
    SPELL_ATTR13_UNK0                             = 0x00000001, //  0 player/playerPet spells?
    SPELL_ATTR13_UNK1                             = 0x00000002, //  1
    SPELL_ATTR13_UNK2                             = 0x00000004, //  2
    SPELL_ATTR13_UNK3                             = 0x00000008, //  3
    SPELL_ATTR13_UNK4                             = 0x00000010, //  4
    SPELL_ATTR13_UNK5                             = 0x00000020, //  5
    SPELL_ATTR13_UNK6                             = 0x00000040, //  6
    SPELL_ATTR13_PANDEMIA                         = 0x00000080, //  7
    SPELL_ATTR13_UNK8                             = 0x00000100, //  8
    SPELL_ATTR13_UNK9                             = 0x00000200, //  9
    SPELL_ATTR13_UNK10                            = 0x00000400, // 10
    SPELL_ATTR13_UNK11                            = 0x00000800, // 11
    SPELL_ATTR13_UNK12                            = 0x00001000, // 12
    SPELL_ATTR13_UNK13                            = 0x00002000, // 13
    SPELL_ATTR13_UNK14                            = 0x00004000, // 14
    SPELL_ATTR13_UNK15                            = 0x00008000, // 15
    SPELL_ATTR13_UNK16                            = 0x00010000, // 16
    SPELL_ATTR13_UNK17                            = 0x00020000, // 17
    SPELL_ATTR13_ACTIVATES_REQUIRED_SHAPESHIFT    = 0x00040000, // 18
    SPELL_ATTR13_UNK19                            = 0x00080000, // 19
    SPELL_ATTR13_UNK20                            = 0x00100000, // 20
    SPELL_ATTR13_UNK21                            = 0x00200000, // 21
    SPELL_ATTR13_UNK22                            = 0x00400000, // 22
    SPELL_ATTR13_UNK23                            = 0x00800000, // 23
    SPELL_ATTR13_UNK24                            = 0x01000000, // 24
    SPELL_ATTR13_UNK25                            = 0x02000000, // 25
    SPELL_ATTR13_UNK26                            = 0x04000000, // 26 some healing spell
    SPELL_ATTR13_UNK27                            = 0x08000000, // 27
    SPELL_ATTR13_UNK28                            = 0x10000000, // 28
    SPELL_ATTR13_UNK29                            = 0x20000000, // 29
    SPELL_ATTR13_UNK30                            = 0x40000000, // 30
    SPELL_ATTR13_UNK31                            = 0x80000000  // 31
};

enum AuraAttr
{
    AURA_ATTR_REAPPLIED_AURA        = 0x00000001,
    AURA_ATTR_IS_SINGLE_TARGET      = 0x00000002, // true if it's a single target spell and registered at caster - can change at spell steal for example
    AURA_ATTR_IS_USING_CHARGES      = 0x00000004,
    AURA_ATTR_FROM_AREATRIGGER      = 0x00000008,
    AURA_ATTR_IS_NOT_ACTIVE         = 0x00000010, // disable aura proc
    AURA_ATTR_DRINK_ARENA_DELAY     = 0x00000020,
    AURA_ATTR_FROM_EQUIPABLE_ITEM   = 0x00000040
};

static const uint8 MAX_SPECIALIZATIONS = 4;

// Custom values
enum SpellClickUserTypes
{
    SPELL_CLICK_USER_ANY            = 0,
    SPELL_CLICK_USER_FRIEND         = 1,
    SPELL_CLICK_USER_RAID           = 2,
    SPELL_CLICK_USER_PARTY          = 3,
    SPELL_CLICK_USER_NOT_IN_COMBAT  = 4,
    SPELL_CLICK_USER_MAX,
};

enum SpellClickCastFlags
{
    NPC_CLICK_CAST_CASTER_CLICKER       = 0x01,
    NPC_CLICK_CAST_TARGET_CLICKER       = 0x02,
    NPC_CLICK_CAST_ORIG_CASTER_OWNER    = 0x04,
};

enum SheathTypes
{
    SHEATHETYPE_NONE                   = 0,
    SHEATHETYPE_MAINHAND               = 1,
    SHEATHETYPE_OFFHAND                = 2,
    SHEATHETYPE_LARGEWEAPONLEFT        = 3,
    SHEATHETYPE_LARGEWEAPONRIGHT       = 4,
    SHEATHETYPE_HIPWEAPONLEFT          = 5,
    SHEATHETYPE_HIPWEAPONRIGHT         = 6,
    SHEATHETYPE_SHIELD                 = 7,

    MAX_SHEATHETYPE
};

enum CharacterSlot
{
    SLOT_HEAD                          = 0,
    SLOT_NECK                          = 1,
    SLOT_SHOULDERS                     = 2,
    SLOT_SHIRT                         = 3,
    SLOT_CHEST                         = 4,
    SLOT_WAIST                         = 5,
    SLOT_LEGS                          = 6,
    SLOT_FEET                          = 7,
    SLOT_WRISTS                        = 8,
    SLOT_HANDS                         = 9,
    SLOT_FINGER1                       = 10,
    SLOT_FINGER2                       = 11,
    SLOT_TRINKET1                      = 12,
    SLOT_TRINKET2                      = 13,
    SLOT_BACK                          = 14,
    SLOT_MAIN_HAND                     = 15,
    SLOT_OFF_HAND                      = 16,
    SLOT_RANGED                        = 17,
    SLOT_TABARD                        = 18,
    SLOT_EMPTY                         = 19
};

enum Language
{
    LANG_UNIVERSAL      = 0,
    LANG_ORCISH         = 1,
    LANG_DARNASSIAN     = 2,
    LANG_TAURAHE        = 3,
    LANG_DWARVISH       = 6,
    LANG_COMMON         = 7,
    LANG_DEMONIC        = 8,
    LANG_TITAN          = 9,
    LANG_THALASSIAN     = 10,
    LANG_DRACONIC       = 11,
    LANG_KALIMAG        = 12,
    LANG_GNOMISH        = 13,
    LANG_TROLL          = 14,
    LANG_GUTTERSPEAK    = 33,
    LANG_DRAENEI        = 35,
    LANG_ZOMBIE         = 36,
    LANG_GNOMISH_BINARY = 37,
    LANG_GOBLIN_BINARY  = 38,
    LANG_WORGEN         = 39,
    LANG_GOBLIN         = 40,
    LANG_PANDAREN_N     = 42,  //Pandaren neutral
    LANG_PANDAREN_A     = 43,  //Pandaren Alliance
    LANG_PANDAREN_H     = 44,  //Pandaren Horde
    LANG_RIKKITUN       = 168,
    LANG_ADDON          = 0xFFFFFFFF                        // used by addons, in 2.4.0 not exist, replaced by messagetype?
};

enum TeamId : int8
{
    TEAM_NONE       = -1,

    TEAM_ALLIANCE   = 0,
    TEAM_HORDE      = 1,

    TEAM_NEUTRAL    = 2,
    MAX_TEAMS       = 2,
    ALL_TEAMS       = 3,
};

enum Team
{
    HORDE               = 67,
    ALLIANCE            = 469,
    //TEAM_STEAMWHEEDLE_CARTEL = 169,                     // not used in code
    //TEAM_ALLIANCE_FORCES     = 891,
    //TEAM_HORDE_FORCES        = 892,
    //TEAM_SANCTUARY           = 936,
    //TEAM_OUTLAND             = 980,
    PANDAREN_NEUTRAL          = 1249,                     // Pandaren is neutral on start
    TEAM_OTHER               = 0,                         // if ReputationListId > 0 && Flags != FACTION_FLAG_TEAM_HEADER
};

enum SpellEffects
{
    SPELL_EFFECT_NONE                               = 0,
    SPELL_EFFECT_INSTAKILL                          = 1,
    SPELL_EFFECT_SCHOOL_DAMAGE                      = 2,
    SPELL_EFFECT_DUMMY                              = 3,
    SPELL_EFFECT_4                                  = 4,
    SPELL_EFFECT_5                                  = 5,
    SPELL_EFFECT_APPLY_AURA                         = 6,
    SPELL_EFFECT_ENVIRONMENTAL_DAMAGE               = 7,
    SPELL_EFFECT_POWER_DRAIN                        = 8,
    SPELL_EFFECT_HEALTH_LEECH                       = 9,
    SPELL_EFFECT_HEAL                               = 10,
    SPELL_EFFECT_BIND                               = 11,
    SPELL_EFFECT_PORTAL                             = 12,
    SPELL_EFFECT_13                                 = 13,
    SPELL_EFFECT_INCREASE_CURRENCY_CAP              = 14,
    SPELL_EFFECT_TELEPORT_FROM_PORTAL               = 15,
    SPELL_EFFECT_QUEST_COMPLETE                     = 16,
    SPELL_EFFECT_WEAPON_DAMAGE_NOSCHOOL             = 17,
    SPELL_EFFECT_RESURRECT                          = 18,
    SPELL_EFFECT_ADD_EXTRA_ATTACKS                  = 19,
    SPELL_EFFECT_DODGE                              = 20,
    SPELL_EFFECT_EVADE                              = 21,
    SPELL_EFFECT_PARRY                              = 22,
    SPELL_EFFECT_BLOCK                              = 23,
    SPELL_EFFECT_CREATE_ITEM                        = 24,
    SPELL_EFFECT_WEAPON                             = 25,
    SPELL_EFFECT_DEFENSE                            = 26,
    SPELL_EFFECT_PERSISTENT_AREA_AURA               = 27,
    SPELL_EFFECT_SUMMON                             = 28,
    SPELL_EFFECT_LEAP                               = 29,
    SPELL_EFFECT_ENERGIZE                           = 30,
    SPELL_EFFECT_WEAPON_PERCENT_DAMAGE              = 31,
    SPELL_EFFECT_TRIGGER_MISSILE                    = 32,
    SPELL_EFFECT_OPEN_LOCK                          = 33,
    SPELL_EFFECT_SUMMON_CHANGE_ITEM                 = 34,
    SPELL_EFFECT_APPLY_AREA_AURA_PARTY              = 35,
    SPELL_EFFECT_LEARN_SPELL                        = 36,
    SPELL_EFFECT_SPELL_DEFENSE                      = 37,
    SPELL_EFFECT_DISPEL                             = 38,
    SPELL_EFFECT_LANGUAGE                           = 39,
    SPELL_EFFECT_DUAL_WIELD                         = 40,
    SPELL_EFFECT_JUMP                               = 41,
    SPELL_EFFECT_JUMP_DEST                          = 42,
    SPELL_EFFECT_TELEPORT_UNITS_FACE_CASTER         = 43,
    SPELL_EFFECT_SKILL_STEP                         = 44,
    SPELL_EFFECT_PLAY_MOVIE                         = 45,
    SPELL_EFFECT_SPAWN                              = 46,
    SPELL_EFFECT_TRADE_SKILL                        = 47,
    SPELL_EFFECT_STEALTH                            = 48,
    SPELL_EFFECT_DETECT                             = 49,
    SPELL_EFFECT_TRANS_DOOR                         = 50,
    SPELL_EFFECT_51                                 = 51,
    SPELL_EFFECT_SET_MAX_BATTLE_PET_COUNT           = 52,
    SPELL_EFFECT_ENCHANT_ITEM                       = 53,
    SPELL_EFFECT_ENCHANT_ITEM_TEMPORARY             = 54,
    SPELL_EFFECT_TAMECREATURE                       = 55,
    SPELL_EFFECT_SUMMON_PET                         = 56,
    SPELL_EFFECT_LEARN_PET_SPELL                    = 57,
    SPELL_EFFECT_WEAPON_DAMAGE                      = 58,
    SPELL_EFFECT_CREATE_RANDOM_ITEM                 = 59,
    SPELL_EFFECT_PROFICIENCY                        = 60,
    SPELL_EFFECT_SEND_EVENT                         = 61,
    SPELL_EFFECT_POWER_BURN                         = 62,
    SPELL_EFFECT_THREAT                             = 63,
    SPELL_EFFECT_TRIGGER_SPELL                      = 64,
    SPELL_EFFECT_APPLY_AREA_AURA_RAID               = 65,
    SPELL_EFFECT_CREATE_MANA_GEM                    = 66,
    SPELL_EFFECT_HEAL_MAX_HEALTH                    = 67,
    SPELL_EFFECT_INTERRUPT_CAST                     = 68,
    SPELL_EFFECT_DISTRACT                           = 69,
    SPELL_EFFECT_INSTANT_COMPLETE_LOCAL_QUEST       = 70,
    SPELL_EFFECT_PICKPOCKET                         = 71,
    SPELL_EFFECT_ADD_FARSIGHT                       = 72,
    SPELL_EFFECT_UNTRAIN_TALENTS                    = 73,
    SPELL_EFFECT_APPLY_GLYPH                        = 74,
    SPELL_EFFECT_HEAL_MECHANICAL                    = 75,
    SPELL_EFFECT_SUMMON_OBJECT_WILD                 = 76,
    SPELL_EFFECT_SCRIPT_EFFECT                      = 77,
    SPELL_EFFECT_ATTACK                             = 78,
    SPELL_EFFECT_SANCTUARY                          = 79,
    SPELL_EFFECT_MOD_ASSISTANT_EQUIPMENT_LEVEL      = 80,
    SPELL_EFFECT_RELOCATE_ACTIVE_ABILITY_TO_THE_BAR = 81,
    SPELL_EFFECT_BIND_SIGHT                         = 82,
    SPELL_EFFECT_DUEL                               = 83,
    SPELL_EFFECT_STUCK                              = 84,
    SPELL_EFFECT_SUMMON_PLAYER                      = 85,
    SPELL_EFFECT_ACTIVATE_OBJECT                    = 86,
    SPELL_EFFECT_GAMEOBJECT_DAMAGE                  = 87,
    SPELL_EFFECT_GAMEOBJECT_REPAIR                  = 88,
    SPELL_EFFECT_GAMEOBJECT_SET_DESTRUCTION_STATE   = 89,
    SPELL_EFFECT_KILL_CREDIT                        = 90,
    SPELL_EFFECT_THREAT_ALL                         = 91,
    SPELL_EFFECT_ENCHANT_HELD_ITEM                  = 92,
    SPELL_EFFECT_FORCE_DESELECT                     = 93,
    SPELL_EFFECT_SELF_RESURRECT                     = 94,
    SPELL_EFFECT_SKINNING                           = 95,
    SPELL_EFFECT_CHARGE                             = 96,
    SPELL_EFFECT_CAST_BUTTON                        = 97,
    SPELL_EFFECT_KNOCK_BACK                         = 98,
    SPELL_EFFECT_DISENCHANT                         = 99,
    SPELL_EFFECT_INEBRIATE                          = 100,
    SPELL_EFFECT_FEED_PET                           = 101,
    SPELL_EFFECT_DISMISS_PET                        = 102,
    SPELL_EFFECT_GIVE_REPUTATION                    = 103,
    SPELL_EFFECT_SUMMON_OBJECT_SLOT                 = 104,
    SPELL_EFFECT_SURVEY                             = 105,
    SPELL_EFFECT_SUMMON_RAID_MARKER                 = 106,
    SPELL_EFFECT_LOOT_CORPSE                        = 107,
    SPELL_EFFECT_DISPEL_MECHANIC                    = 108,
    SPELL_EFFECT_SUMMON_DEAD_PET                    = 109,
    SPELL_EFFECT_110                 = 110,
    SPELL_EFFECT_DURABILITY_DAMAGE                  = 111,
    SPELL_EFFECT_112                                = 112, // only 72759
    SPELL_EFFECT_RESURRECT_NEW                      = 113,
    SPELL_EFFECT_ATTACK_ME                          = 114,
    SPELL_EFFECT_DURABILITY_DAMAGE_PCT              = 115,
    SPELL_EFFECT_SKIN_PLAYER_CORPSE                 = 116,
    SPELL_EFFECT_SPIRIT_HEAL                        = 117,
    SPELL_EFFECT_SKILL                              = 118,
    SPELL_EFFECT_APPLY_AREA_AURA_PET                = 119,
    SPELL_EFFECT_120                                = 120,
    SPELL_EFFECT_NORMALIZED_WEAPON_DMG              = 121,
    SPELL_EFFECT_DYNAMIC_CHECK_PLAYER_POSITION      = 122,
    SPELL_EFFECT_SEND_TAXI                          = 123,
    SPELL_EFFECT_PULL_TOWARDS                       = 124,
    SPELL_EFFECT_MODIFY_THREAT_PERCENT              = 125,
    SPELL_EFFECT_STEAL_BENEFICIAL_BUFF              = 126,
    SPELL_EFFECT_PROSPECTING                        = 127,
    SPELL_EFFECT_APPLY_AREA_AURA_FRIEND             = 128,
    SPELL_EFFECT_APPLY_AREA_AURA_ENEMY              = 129,
    SPELL_EFFECT_REDIRECT_THREAT                    = 130,
    SPELL_EFFECT_PLAY_SOUND                         = 131,
    SPELL_EFFECT_PLAY_MUSIC                         = 132,
    SPELL_EFFECT_UNLEARN_SPECIALIZATION             = 133,
    SPELL_EFFECT_KILL_CREDIT2                       = 134,
    SPELL_EFFECT_CALL_PET                           = 135,
    SPELL_EFFECT_HEAL_PCT                           = 136,
    SPELL_EFFECT_ENERGIZE_PCT                       = 137,
    SPELL_EFFECT_LEAP_BACK                          = 138,
    SPELL_EFFECT_CLEAR_QUEST                        = 139,
    SPELL_EFFECT_FORCE_CAST                         = 140,
    SPELL_EFFECT_FORCE_CAST_WITH_VALUE              = 141,
    SPELL_EFFECT_TRIGGER_SPELL_WITH_VALUE           = 142,
    SPELL_EFFECT_APPLY_AREA_AURA_OWNER              = 143,
    SPELL_EFFECT_KNOCK_BACK_DEST                    = 144,
    SPELL_EFFECT_PULL_TOWARDS_DEST                  = 145,
    SPELL_EFFECT_RESTORE_ASSISTANT_HEALTH           = 146,
    SPELL_EFFECT_QUEST_FAIL                         = 147,
    SPELL_EFFECT_TRIGGER_MISSILE_SPELL_WITH_VALUE   = 148,
    SPELL_EFFECT_CHARGE_DEST                        = 149,
    SPELL_EFFECT_QUEST_START                        = 150,
    SPELL_EFFECT_TRIGGER_SPELL_2                    = 151,
    SPELL_EFFECT_SUMMON_RAF_FRIEND                  = 152,
    SPELL_EFFECT_CREATE_TAMED_PET                   = 153,
    SPELL_EFFECT_DISCOVER_TAXI                      = 154,
    SPELL_EFFECT_TITAN_GRIP                         = 155,
    SPELL_EFFECT_ENCHANT_ITEM_PRISMATIC             = 156,
    SPELL_EFFECT_CREATE_ITEM_2                      = 157,
    SPELL_EFFECT_MILLING                            = 158,
    SPELL_EFFECT_ALLOW_RENAME_PET                   = 159,
    SPELL_EFFECT_TRIGGER_SPELL_4                    = 160, // forcecast trigger spell ?
    SPELL_EFFECT_TALENT_SPEC_COUNT                  = 161,
    SPELL_EFFECT_TALENT_SPEC_SELECT                 = 162,
    SPELL_EFFECT_OBLITERATE_ITEM                    = 163,
    SPELL_EFFECT_REMOVE_AURA                        = 164,
    SPELL_EFFECT_DAMAGE_FROM_MAX_HEALTH_PCT         = 165,
    SPELL_EFFECT_GIVE_CURRENCY                      = 166,
    SPELL_EFFECT_UPDATE_PLAYER_PHASE                = 167, // phase shift related
    SPELL_EFFECT_CONTROL_PET                        = 168, // allow hunter and warlock control pet
    SPELL_EFFECT_DESTROY_ITEM                       = 169,
    SPELL_EFFECT_UPDATE_ZONE_AURAS_AND_PHASES       = 170,
    SPELL_EFFECT_OBJECT_WITH_PERSONAL_VISIBILITY    = 171, // Summons gamebject (player farm related)
    SPELL_EFFECT_RESURRECT_WITH_AURA                = 172,
    SPELL_EFFECT_UNLOCK_GUILD_VAULT_TAB             = 173, // Guild tab unlocked (guild perk)
    SPELL_EFFECT_APPLY_AURA_ON_PET_OR_SELF          = 174,
    SPELL_EFFECT_MOD_THRET_OF_TARGET_NYI            = 175, // random target ? only 125570
    SPELL_EFFECT_BECOME_UNTARGETABLE                = 176,
    SPELL_EFFECT_DESPAWN_DYNOBJECT                  = 177, // despawn DynamicObject
    SPELL_EFFECT_CANCEL_SCENE_ASSIGNMENT            = 178,
    SPELL_EFFECT_CREATE_AREATRIGGER                 = 179,
    SPELL_EFFECT_UPDATE_AREATRIGGER                 = 180, // "Update Area Triggers" 106584 133355
    SPELL_EFFECT_UNLEARN_TALENT                     = 181,
    SPELL_EFFECT_DESPAWN_AREATRIGGER                = 182, // despawwn areatrigger
    SPELL_EFFECT_ENVEREMENTAL_DAMAGE_2              = 183,
    SPELL_EFFECT_REPUTATION_REWARD                  = 184, // add 400 (normal) 800 (10/25 player mode) Avengers of Hyjal (TDF ?) see 73843
    SPELL_EFFECT_ACTIVATE_SCENE4                    = 185, // Scene related
    SPELL_EFFECT_ACTIVATE_SCENE5                    = 186, // Scene related
    SPELL_EFFECT_RANDOMIZE_DIGSITES                 = 187, // 126957 only
    SPELL_EFFECT_STAMPEDE                           = 188, // Stampede 121818
    SPELL_EFFECT_LOOT_BONUS                         = 189, // Boss loot bonus ?
    SPELL_EFFECT_JOIN_LEAVE_PLAYER_PARTY            = 190,
    SPELL_EFFECT_TELEPORT_TO_DIGSITE                = 191, // Teleport player to an random digsite (Archaeology)
    SPELL_EFFECT_UNCAGE_PET                         = 192, // Battle pet exchange (123302)
    SPELL_EFFECT_LAUNCH_PET_BATTLE                  = 193, // 0 spells
    SPELL_EFFECT_194                                = 194, // 0 spells
    SPELL_EFFECT_ACTIVATE_SCENE                     = 195, // Scene related
    SPELL_EFFECT_ACTIVATE_SCENE2                    = 196, // summon multi NPC
    SPELL_EFFECT_ACTIVATE_SCENE6                    = 197, // 130243 only
    SPELL_EFFECT_ACTIVATE_SCENE3                    = 198, // Mini scene event
    SPELL_EFFECT_199                                = 199, // 0 spells
    SPELL_EFFECT_HEAL_BATTLEPET_PCT                 = 200, // Battle pet Healing  125439, 125801
    SPELL_EFFECT_BATTLE_PET                         = 201, // Battle pet first slot
    SPELL_EFFECT_APPLY_AURA_WITH_VALUE              = 202,
    SPELL_EFFECT_REMOVE_AURA_2                      = 203, // Based on 144863 -> This spell remove auras.
    SPELL_EFFECT_UPGRADE_BATTLE_PET                 = 204,
    SPELL_EFFECT_LAUNCH_QUEST_CHOICE                = 205, // Launch PvE/PvP Choice
    SPELL_EFFECT_CREATE_ITEM_3                      = 206, // Create item from Timeless Isle
    SPELL_EFFECT_LAUNCH_QUEST_TASK                  = 207, // 0 spells
    SPELL_EFFECT_MOD_REPUTATION                     = 208, // Test Reputation Set
    SPELL_EFFECT_209                                = 209,
    SPELL_EFFECT_LEARN_GARRISON_BUILDING            = 210,
    SPELL_EFFECT_LEARN_GARRISON_SPECIALIZATION      = 211,
    SPELL_EFFECT_212                                = 212,
    SPELL_EFFECT_JUMP_DEST2                         = 213,
    SPELL_EFFECT_CREATE_GARRISON                    = 214,
    SPELL_EFFECT_UPGRADE_CHARACTER_SPELLS           = 215, // Unlocks boosted players' spells (ChrUpgrade*.db2)
    SPELL_EFFECT_CREATE_SHIPMENT                    = 216,
    SPELL_EFFECT_UPGRADE_GARRISON                   = 217,
    SPELL_EFFECT_218                                = 218,
    SPELL_EFFECT_SUMMON_CONVERSATION                = 219,
    SPELL_EFFECT_ADD_GARRISON_FOLLOWER              = 220,
    SPELL_EFFECT_ADD_GARRISON_MISSION               = 221,
    SPELL_EFFECT_CREATE_HEIRLOOM_ITEM               = 222,
    SPELL_EFFECT_CHANGE_ITEM_BONUSES                = 223,
    SPELL_EFFECT_ACTIVATE_GARRISON_BUILDING         = 224,
    SPELL_EFFECT_GRANT_BATTLEPET_LEVEL              = 225,
    SPELL_EFFECT_PLAYER_MOVE_WAYPOINTS              = 226,
    SPELL_EFFECT_TELEPORT                           = 227,
    SPELL_EFFECT_228                                = 228,
    SPELL_EFFECT_SET_FOLLOWER_QUALITY               = 229,
    SPELL_EFFECT_230                                = 230,
    SPELL_EFFECT_INCREASE_FOLLOWER_EXPERIENCE       = 231,
    SPELL_EFFECT_REMOVE_PHASE                       = 232,
    SPELL_EFFECT_RETRAIN_FOLLOWER                   = 233,
    SPELL_EFFECT_234                                = 234,
    SPELL_EFFECT_RANDOM_REWARD_SKILL_POINTS         = 235,
    SPELL_EFFECT_GIVE_EXPERIENCE                    = 236, // Increases players XP
    SPELL_EFFECT_GIVE_RESTED_EXPERIENCE_BONUS       = 237,
    SPELL_EFFECT_INCREASE_SKILL                     = 238,
    SPELL_EFFECT_END_GARRISON_BUILDING_CONSTRUCTION = 239, // Instantly finishes building construction
    SPELL_EFFECT_GIVE_ARTIFACT_POWER                = 240,
    SPELL_EFFECT_241                                = 241,
    SPELL_EFFECT_GIVE_ARTIFACT_POWER_NO_BONUS       = 242,
    SPELL_EFFECT_APPLY_ENCHANT_ILLUSION             = 243,
    SPELL_EFFECT_LEARN_FOLLOWER_ABILITY             = 244,
    SPELL_EFFECT_UPGRADE_HEIRLOOM                   = 245,
    SPELL_EFFECT_FINISH_GARRISON_MISSION            = 246,
    SPELL_EFFECT_ADD_GARRISON_MISSION2              = 247,
    SPELL_EFFECT_FINISH_SHIPMENT                    = 248,
    SPELL_EFFECT_FORCE_EQUIP_ITEM                   = 249,
    SPELL_EFFECT_TAKE_SCREENSHOT                    = 250,
    SPELL_EFFECT_SET_GARRISON_CACHE_SIZE            = 251,
    SPELL_EFFECT_TELEPORT_L                         = 252,
    SPELL_EFFECT_GIVE_HONOR_POINTS                  = 253,
    SPELL_EFFECT_SMASH_DEST                         = 254,
    SPELL_EFFECT_COLLECT_ITEM_APPEARANCES_SET       = 255,

    TOTAL_SPELL_EFFECTS
};

enum PetTameResult
{
    PET_TAME_ERROR_UNKNOWN_ERROR            = 0,    // checked
    PET_TAME_ERROR_INVALID_CREATURE         = 1,    // checked
    PET_TAME_ERROR_TOO_MANY_PETS            = 2,    // checked
    PET_TAME_ERROR_CREATURE_ALREADY_OWNED   = 3,    // checked
    PET_TAME_ERROR_NOT_TAMEABLE             = 4,    // checked
    PET_TAME_ERROR_ANOTHER_SUMMON_ACTIVE    = 5,    // checked
    PET_TAME_ERROR_YOU_CANT_TAME            = 6,    // checked
    PET_TAME_ERROR_NO_PET_AVAILABLE         = 7,    // checked
    PET_TAME_ERROR_INTERNAL_ERROR           = 8,    // checked
    PET_TAME_ERROR_TOO_HIGH_LEVEL           = 9,    // checked
    PET_TAME_ERROR_DEAD                     = 10,   // checked
    PET_TAME_ERROR_NOT_DEAD                 = 11,   // checked
    PET_TAME_ERROR_CANT_CONTROL_EXOTIC      = 12,   // checked
    PET_TAME_ERROR_INVALID_SLOT             = 13    // checked
};

enum SpellCastResult
{
    SPELL_FAILED_SUCCESS                                        = 0,
    SPELL_FAILED_AFFECTING_COMBAT                               = 1,
    SPELL_FAILED_ALREADY_AT_FULL_HEALTH                         = 2,
    SPELL_FAILED_ALREADY_AT_FULL_MANA                           = 3,
    SPELL_FAILED_ALREADY_AT_FULL_POWER                          = 4,
    SPELL_FAILED_ALREADY_BEING_TAMED                            = 5,
    SPELL_FAILED_ALREADY_HAVE_CHARM                             = 6,
    SPELL_FAILED_ALREADY_HAVE_SUMMON                            = 7,
    SPELL_FAILED_ALREADY_HAVE_PET                               = 8,
    SPELL_FAILED_ALREADY_OPEN                                   = 9,
    SPELL_FAILED_AURA_BOUNCED                                   = 10,
    SPELL_FAILED_AUTOTRACK_INTERRUPTED                          = 11,
    SPELL_FAILED_BAD_IMPLICIT_TARGETS                           = 12,
    SPELL_FAILED_BAD_TARGETS                                    = 13,
    SPELL_FAILED_PVP_TARGET_WHILE_UNFLAGGED                     = 14,
    SPELL_FAILED_CANT_BE_CHARMED                                = 15,
    SPELL_FAILED_CANT_BE_DISENCHANTED                           = 16,
    SPELL_FAILED_CANT_BE_DISENCHANTED_SKILL                     = 17,
    SPELL_FAILED_CANT_BE_MILLED                                 = 18,
    SPELL_FAILED_CANT_BE_PROSPECTED                             = 19,
    SPELL_FAILED_CANT_CAST_ON_TAPPED                            = 20,
    SPELL_FAILED_CANT_DUEL_WHILE_INVISIBLE                      = 21,
    SPELL_FAILED_CANT_DUEL_WHILE_STEALTHED                      = 22,
    SPELL_FAILED_CANT_STEALTH                                   = 23,
    SPELL_FAILED_CANT_UNTALENT                                  = 24,
    SPELL_FAILED_CASTER_AURASTATE                               = 25,
    SPELL_FAILED_CASTER_DEAD                                    = 26,
    SPELL_FAILED_CHARMED                                        = 27,
    SPELL_FAILED_CHEST_IN_USE                                   = 28,
    SPELL_FAILED_CONFUSED                                       = 29,
    SPELL_FAILED_DONT_REPORT                                    = 30,
    SPELL_FAILED_EQUIPPED_ITEM                                  = 31,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS                            = 32,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS_MAINHAND                   = 33,
    SPELL_FAILED_EQUIPPED_ITEM_CLASS_OFFHAND                    = 34,
    SPELL_FAILED_ERROR                                          = 35,
    SPELL_FAILED_FALLING                                        = 36,
    SPELL_FAILED_FIZZLE                                         = 37,
    SPELL_FAILED_FLEEING                                        = 38,
    SPELL_FAILED_FOOD_LOWLEVEL                                  = 39,
    SPELL_FAILED_GARRISON_NOT_OWNED                             = 40,
    SPELL_FAILED_GARRISON_OWNED                                 = 41,
    SPELL_FAILED_GARRISON_MAX_LEVEL                             = 42,
    SPELL_FAILED_GARRISON_NOT_UPGRADEABLE                       = 43,
    SPELL_FAILED_GARRISON_FOLLOWER_ON_MISSION                   = 44,
    SPELL_FAILED_GARRISON_FOLLOWER_IN_BUILDING                  = 45,
    SPELL_FAILED_GARRISON_FOLLOWER_MAX_LEVEL                    = 46,
    SPELL_FAILED_GARRISON_FOLLOWER_MIN_ITEM_LEVEL               = 47,
    SPELL_FAILED_GARRISON_FOLLOWER_MAX_ITEM_LEVEL               = 48,
    SPELL_FAILED_GARRISON_FOLLOWER_MAX_QUALITY                  = 49,
    SPELL_FAILED_GARRISON_FOLLOWER_NOT_MAX_LEVEL                = 50,
    SPELL_FAILED_GARRISON_FOLLOWER_HAS_ABILITY                  = 51,
    SPELL_FAILED_GARRISON_FOLLOWER_HAS_SINGLE_MISSION_ABILITY   = 52,
    SPELL_FAILED_GARRISON_FOLLOWER_REQUIRES_EPIC                = 53,
    SPELL_FAILED_GARRISON_MISSION_NOT_IN_PROGRESS               = 54,
    SPELL_FAILED_GARRISON_MISSION_COMPLETE                      = 55,
    SPELL_FAILED_GARRISON_NO_MISSIONS_AVAILABLE                 = 56,
    SPELL_FAILED_HIGHLEVEL                                      = 57,
    SPELL_FAILED_HUNGER_SATIATED                                = 58,
    SPELL_FAILED_IMMUNE                                         = 59,
    SPELL_FAILED_INCORRECT_AREA                                 = 60,
    SPELL_FAILED_INTERRUPTED                                    = 61,
    SPELL_FAILED_INTERRUPTED_COMBAT                             = 62,
    SPELL_FAILED_ITEM_ALREADY_ENCHANTED                         = 63,
    SPELL_FAILED_ITEM_GONE                                      = 64,
    SPELL_FAILED_ITEM_NOT_FOUND                                 = 65,
    SPELL_FAILED_ITEM_NOT_READY                                 = 66,
    SPELL_FAILED_LEVEL_REQUIREMENT                              = 67,
    SPELL_FAILED_LINE_OF_SIGHT                                  = 68,
    SPELL_FAILED_LOWLEVEL                                       = 69,
    SPELL_FAILED_LOW_CASTLEVEL                                  = 70,
    SPELL_FAILED_MAINHAND_EMPTY                                 = 71,
    SPELL_FAILED_MOVING                                         = 72,
    SPELL_FAILED_NEED_AMMO                                      = 73,
    SPELL_FAILED_NEED_AMMO_POUCH                                = 74,
    SPELL_FAILED_NEED_EXOTIC_AMMO                               = 75,
    SPELL_FAILED_NEED_MORE_ITEMS                                = 76,
    SPELL_FAILED_NOPATH                                         = 77,
    SPELL_FAILED_NOT_BEHIND                                     = 78,
    SPELL_FAILED_NOT_FISHABLE                                   = 79,
    SPELL_FAILED_NOT_FLYING                                     = 80,
    SPELL_FAILED_NOT_HERE                                       = 81,
    SPELL_FAILED_NOT_INFRONT                                    = 82,
    SPELL_FAILED_NOT_IN_CONTROL                                 = 83,
    SPELL_FAILED_NOT_KNOWN                                      = 84,
    SPELL_FAILED_NOT_MOUNTED                                    = 85,
    SPELL_FAILED_NOT_ON_TAXI                                    = 86,
    SPELL_FAILED_NOT_ON_TRANSPORT                               = 87,
    SPELL_FAILED_NOT_READY                                      = 88,
    SPELL_FAILED_NOT_SHAPESHIFT                                 = 89,
    SPELL_FAILED_NOT_STANDING                                   = 90,
    SPELL_FAILED_NOT_TRADEABLE                                  = 91,
    SPELL_FAILED_NOT_TRADING                                    = 92,
    SPELL_FAILED_NOT_UNSHEATHED                                 = 93,
    SPELL_FAILED_NOT_WHILE_GHOST                                = 94,
    SPELL_FAILED_NOT_WHILE_LOOTING                              = 95,
    SPELL_FAILED_NO_AMMO                                        = 96,
    SPELL_FAILED_NO_CHARGES_REMAIN                              = 97,
    SPELL_FAILED_NO_COMBO_POINTS                                = 98,
    SPELL_FAILED_NO_DUELING                                     = 99,
    SPELL_FAILED_NO_ENDURANCE                                   = 100,
    SPELL_FAILED_NO_FISH                                        = 101,
    SPELL_FAILED_NO_ITEMS_WHILE_SHAPESHIFTED                    = 102,
    SPELL_FAILED_NO_MOUNTS_ALLOWED                              = 103,
    SPELL_FAILED_NO_PET                                         = 104,
    SPELL_FAILED_NO_POWER                                       = 105,
    SPELL_FAILED_NOTHING_TO_DISPEL                              = 106,
    SPELL_FAILED_NOTHING_TO_STEAL                               = 107,
    SPELL_FAILED_ONLY_ABOVEWATER                                = 108,
    SPELL_FAILED_ONLY_INDOORS                                   = 109,
    SPELL_FAILED_ONLY_MOUNTED                                   = 110,
    SPELL_FAILED_ONLY_OUTDOORS                                  = 111,
    SPELL_FAILED_ONLY_SHAPESHIFT                                = 112,
    SPELL_FAILED_ONLY_STEALTHED                                 = 113,
    SPELL_FAILED_ONLY_UNDERWATER                                = 114,
    SPELL_FAILED_OUT_OF_RANGE                                   = 115,
    SPELL_FAILED_PACIFIED                                       = 116,
    SPELL_FAILED_POSSESSED                                      = 117,
    SPELL_FAILED_REAGENTS                                       = 118,
    SPELL_FAILED_REQUIRES_AREA                                  = 119,
    SPELL_FAILED_REQUIRES_SPELL_FOCUS                           = 120,
    SPELL_FAILED_ROOTED                                         = 121,
    SPELL_FAILED_SILENCED                                       = 122,
    SPELL_FAILED_SPELL_IN_PROGRESS                              = 123,
    SPELL_FAILED_SPELL_LEARNED                                  = 124,
    SPELL_FAILED_SPELL_UNAVAILABLE                              = 125,
    SPELL_FAILED_STUNNED                                        = 126,
    SPELL_FAILED_TARGETS_DEAD                                   = 127,
    SPELL_FAILED_TARGET_AFFECTING_COMBAT                        = 128,
    SPELL_FAILED_TARGET_AURASTATE                               = 129,
    SPELL_FAILED_TARGET_DUELING                                 = 130,
    SPELL_FAILED_TARGET_ENEMY                                   = 131,
    SPELL_FAILED_TARGET_ENRAGED                                 = 132,
    SPELL_FAILED_TARGET_FRIENDLY                                = 133,
    SPELL_FAILED_TARGET_IN_COMBAT                               = 134,
    SPELL_FAILED_TARGET_IN_PET_BATTLE                           = 135,
    SPELL_FAILED_TARGET_IS_PLAYER                               = 136,
    SPELL_FAILED_TARGET_IS_PLAYER_CONTROLLED                    = 137,
    SPELL_FAILED_TARGET_NOT_DEAD                                = 138,
    SPELL_FAILED_TARGET_NOT_IN_PARTY                            = 139,
    SPELL_FAILED_TARGET_NOT_LOOTED                              = 140,
    SPELL_FAILED_TARGET_NOT_PLAYER                              = 141,
    SPELL_FAILED_TARGET_NO_POCKETS                              = 142,
    SPELL_FAILED_TARGET_NO_WEAPONS                              = 143,
    SPELL_FAILED_TARGET_NO_RANGED_WEAPONS                       = 144,
    SPELL_FAILED_TARGET_UNSKINNABLE                             = 145,
    SPELL_FAILED_THIRST_SATIATED                                = 146,
    SPELL_FAILED_TOO_CLOSE                                      = 147,
    SPELL_FAILED_TOO_MANY_OF_ITEM                               = 148,
    SPELL_FAILED_TOTEM_CATEGORY                                 = 149,
    SPELL_FAILED_TOTEMS                                         = 150,
    SPELL_FAILED_TRY_AGAIN                                      = 151,
    SPELL_FAILED_UNIT_NOT_BEHIND                                = 152,
    SPELL_FAILED_UNIT_NOT_INFRONT                               = 153,
    SPELL_FAILED_VISION_OBSCURED                                = 154,
    SPELL_FAILED_WRONG_PET_FOOD                                 = 155,
    SPELL_FAILED_NOT_WHILE_FATIGUED                             = 156,
    SPELL_FAILED_TARGET_NOT_IN_INSTANCE                         = 157,
    SPELL_FAILED_NOT_WHILE_TRADING                              = 158,
    SPELL_FAILED_TARGET_NOT_IN_RAID                             = 159,
    SPELL_FAILED_TARGET_FREEFORALL                              = 160,
    SPELL_FAILED_NO_EDIBLE_CORPSES                              = 161,
    SPELL_FAILED_ONLY_BATTLEGROUNDS                             = 162,
    SPELL_FAILED_TARGET_NOT_GHOST                               = 163,
    SPELL_FAILED_TRANSFORM_UNUSABLE                             = 164,
    SPELL_FAILED_WRONG_WEATHER                                  = 165,
    SPELL_FAILED_DAMAGE_IMMUNE                                  = 166,
    SPELL_FAILED_PREVENTED_BY_MECHANIC                          = 167,
    SPELL_FAILED_PLAY_TIME                                      = 168,
    SPELL_FAILED_REPUTATION                                     = 169,
    SPELL_FAILED_MIN_SKILL                                      = 170,
    SPELL_FAILED_NOT_IN_RATED_BATTLEGROUND                      = 171,
    SPELL_FAILED_NOT_ON_SHAPESHIFT                              = 172,
    SPELL_FAILED_NOT_ON_STEALTHED                               = 173,
    SPELL_FAILED_NOT_ON_DAMAGE_IMMUNE                           = 174,
    SPELL_FAILED_NOT_ON_MOUNTED                                 = 175,
    SPELL_FAILED_TOO_SHALLOW                                    = 176,
    SPELL_FAILED_TARGET_NOT_IN_SANCTUARY                        = 177,
    SPELL_FAILED_TARGET_IS_TRIVIAL                              = 178,
    SPELL_FAILED_BM_OR_INVISGOD                                 = 179,
    SPELL_FAILED_GROUND_MOUNT_NOT_ALLOWED                       = 180,
    SPELL_FAILED_FLOATING_MOUNT_NOT_ALLOWED                     = 181,
    SPELL_FAILED_UNDERWATER_MOUNT_NOT_ALLOWED                   = 182,
    SPELL_FAILED_FLYING_MOUNT_NOT_ALLOWED                       = 183,
    SPELL_FAILED_APPRENTICE_RIDING_REQUIREMENT                  = 184,
    SPELL_FAILED_JOURNEYMAN_RIDING_REQUIREMENT                  = 185,
    SPELL_FAILED_EXPERT_RIDING_REQUIREMENT                      = 186,
    SPELL_FAILED_ARTISAN_RIDING_REQUIREMENT                     = 187,
    SPELL_FAILED_MASTER_RIDING_REQUIREMENT                      = 188,
    SPELL_FAILED_COLD_RIDING_REQUIREMENT                        = 189,
    SPELL_FAILED_FLIGHT_MASTER_RIDING_REQUIREMENT               = 190,
    SPELL_FAILED_CS_RIDING_REQUIREMENT                          = 191,
    SPELL_FAILED_PANDA_RIDING_REQUIREMENT                       = 192,
    SPELL_FAILED_DRAENOR_RIDING_REQUIREMENT                     = 193,
    SPELL_FAILED_BROKEN_ISLES_RIDING_REQUIREMENT                = 194,
    SPELL_FAILED_MOUNT_NO_FLOAT_HERE                            = 195,
    SPELL_FAILED_MOUNT_NO_UNDERWATER_HERE                       = 196,
    SPELL_FAILED_MOUNT_ABOVE_WATER_HERE                         = 197,
    SPELL_FAILED_MOUNT_COLLECTED_ON_OTHER_CHAR                  = 198,
    SPELL_FAILED_NOT_IDLE                                       = 199,
    SPELL_FAILED_NOT_INACTIVE                                   = 200,
    SPELL_FAILED_PARTIAL_PLAYTIME                               = 201,
    SPELL_FAILED_NO_PLAYTIME                                    = 202,
    SPELL_FAILED_NOT_IN_BATTLEGROUND                            = 203,
    SPELL_FAILED_NOT_IN_RAID_INSTANCE                           = 204,
    SPELL_FAILED_ONLY_IN_ARENA                                  = 205,
    SPELL_FAILED_TARGET_LOCKED_TO_RAID_INSTANCE                 = 206,
    SPELL_FAILED_ON_USE_ENCHANT                                 = 207,
    SPELL_FAILED_NOT_ON_GROUND                                  = 208,
    SPELL_FAILED_CUSTOM_ERROR                                   = 209,
    SPELL_FAILED_CANT_DO_THAT_RIGHT_NOW                         = 210,
    SPELL_FAILED_TOO_MANY_SOCKETS                               = 211,
    SPELL_FAILED_INVALID_GLYPH                                  = 212,
    SPELL_FAILED_UNIQUE_GLYPH                                   = 213,
    SPELL_FAILED_GLYPH_SOCKET_LOCKED                            = 214,
    SPELL_FAILED_GLYPH_EXCLUSIVE_CATEGORY                       = 215,
    SPELL_FAILED_GLYPH_INVALID_SPEC                             = 216,
    SPELL_FAILED_GLYPH_NO_SPEC                                  = 217,
    SPELL_FAILED_NO_ACTIVE_GLYPHS                               = 218,
    SPELL_FAILED_NO_VALID_TARGETS                               = 219,
    SPELL_FAILED_ITEM_AT_MAX_CHARGES                            = 220,
    SPELL_FAILED_NOT_IN_BARBERSHOP                              = 221,
    SPELL_FAILED_FISHING_TOO_LOW                                = 222,
    SPELL_FAILED_ITEM_ENCHANT_TRADE_WINDOW                      = 223,
    SPELL_FAILED_SUMMON_PENDING                                 = 224,
    SPELL_FAILED_MAX_SOCKETS                                    = 225,
    SPELL_FAILED_PET_CAN_RENAME                                 = 226,
    SPELL_FAILED_TARGET_CANNOT_BE_RESURRECTED                   = 227,
    SPELL_FAILED_TARGET_HAS_RESURRECT_PENDING                   = 228,
    SPELL_FAILED_NO_ACTIONS                                     = 229,
    SPELL_FAILED_CURRENCY_WEIGHT_MISMATCH                       = 230,
    SPELL_FAILED_WEIGHT_NOT_ENOUGH                              = 231,
    SPELL_FAILED_WEIGHT_TOO_MUCH                                = 232,
    SPELL_FAILED_NO_VACANT_SEAT                                 = 233,
    SPELL_FAILED_NO_LIQUID                                      = 234,
    SPELL_FAILED_ONLY_NOT_SWIMMING                              = 235,
    SPELL_FAILED_BY_NOT_MOVING                                  = 236,
    SPELL_FAILED_IN_COMBAT_RES_LIMIT_REACHED                    = 237,
    SPELL_FAILED_NOT_IN_ARENA                                   = 238,
    SPELL_FAILED_TARGET_NOT_GROUNDED                            = 239,
    SPELL_FAILED_EXCEEDED_WEEKLY_USAGE                          = 240,
    SPELL_FAILED_NOT_IN_LFG_DUNGEON                             = 241,
    SPELL_FAILED_BAD_TARGET_FILTER                              = 242,
    SPELL_FAILED_NOT_ENOUGH_TARGETS                             = 243,
    SPELL_FAILED_NO_SPEC                                        = 244,
    SPELL_FAILED_CANT_ADD_BATTLE_PET                            = 245,
    SPELL_FAILED_CANT_UPGRADE_BATTLE_PET                        = 246,
    SPELL_FAILED_WRONG_BATTLE_PET_TYPE                          = 247,
    SPELL_FAILED_NO_DUNGEON_ENCOUNTER                           = 248,
    SPELL_FAILED_NO_TELEPORT_FROM_DUNGEON                       = 249,
    SPELL_FAILED_MAX_LEVEL_TOO_LOW                              = 250,
    SPELL_FAILED_CANT_REPLACE_ITEM_BONUS                        = 251,
    GRANT_PET_LEVEL_FAIL                                        = 252,
    SPELL_FAILED_SKILL_LINE_NOT_KNOWN                           = 253,
    SPELL_FAILED_BLUEPRINT_KNOWN                                = 254,
    SPELL_FAILED_FOLLOWER_KNOWN                                 = 255,
    SPELL_FAILED_CANT_OVERRIDE_ENCHANT_VISUAL                   = 256,
    SPELL_FAILED_ITEM_NOT_A_WEAPON                              = 257,
    SPELL_FAILED_SAME_ENCHANT_VISUAL                            = 258,
    SPELL_FAILED_TOY_USE_LIMIT_REACHED                          = 259,
    SPELL_FAILED_TOY_ALREADY_KNOWN                              = 260,
    SPELL_FAILED_SHIPMENTS_FULL                                 = 261,
    SPELL_FAILED_NO_SHIPMENTS_FOR_CONTAINER                     = 262,
    SPELL_FAILED_NO_BUILDING_FOR_SHIPMENT                       = 263,
    SPELL_FAILED_NOT_ENOUGH_SHIPMENTS_FOR_CONTAINER             = 264,
    SPELL_FAILED_HAS_MISSION                                    = 265,
    SPELL_FAILED_BUILDING_ACTIVATE_NOT_READY                    = 266,
    SPELL_FAILED_NOT_SOULBOUND                                  = 267,
    SPELL_FAILED_RIDING_VEHICLE                                 = 268,
    SPELL_FAILED_VETERAN_TRIAL_ABOVE_SKILL_RANK_MAX             = 269,
    SPELL_FAILED_NOT_WHILE_MERCENARY                            = 270,
    SPELL_FAILED_SPEC_DISABLED                                  = 271,
    SPELL_FAILED_CANT_BE_OBLITERATED                            = 272,
    SPELL_FAILED_FOLLOWER_CLASS_SPEC_CAP                        = 273,
    SPELL_FAILED_TRANSPORT_NOT_READY                            = 274,
    SPELL_FAILED_TRANSMOG_SET_ALREADY_KNOWN                     = 275,
    SPELL_FAILED_DISABLED_BY_AURA_LABEL                         = 276,
    SPELL_FAILED_DISABLED_BY_MAX_USABLE_LEVEL                   = 277,
    SPELL_FAILED_SPELL_ALREADY_KNOWN                            = 278,
    SPELL_FAILED_MUST_KNOW_SUPERCEDING_SPELL                    = 279,
    SPELL_FAILED_YOU_CANNOT_USE_THAT_IN_PVP_INSTANCE            = 280,
    SPELL_FAILED_NO_ARTIFACT_EQUIPPED                           = 281,
    SPELL_FAILED_WRONG_ARTIFACT_EQUIPPED                        = 282,
    SPELL_FAILED_TARGET_IS_UNTARGETABLE_BY_ANYONE               = 283,
    SPELL_FAILED_SPELL_EFFECT_FAILED                            = 284,
    SPELL_FAILED_NEED_ALL_PARTY_MEMBERS                         = 285,
    SPELL_FAILED_ARTIFACT_AT_FULL_POWER                         = 286,
    SPELL_FAILED_AP_ITEM_FROM_PREVIOUS_TIER                     = 287,
    SPELL_FAILED_AREA_TRIGGER_CREATION                          = 288,
    SPELL_FAILED_UNKNOWN                                        = 289,

    // ok cast value - here in case a future version removes SPELL_FAILED_SUCCESS and we need to use a custom value (not sent to client either way)
    SPELL_CAST_OK                                               = SPELL_FAILED_SUCCESS
};

enum SpellCustomErrors
{
    SPELL_CUSTOM_ERROR_NONE                                             =  0,
    SPELL_CUSTOM_ERROR_CUSTOM_MSG                                       =  1,  // Something bad happened, and we want to display a custom message!
    SPELL_CUSTOM_ERROR_ALEX_BROKE_QUEST                                 =  2,  // Alex broke your quest! Thank him later!
    SPELL_CUSTOM_ERROR_NEED_HELPLESS_VILLAGER                           =  3,  // This spell may only be used on Helpless Wintergarde Villagers that have not been rescued.
    SPELL_CUSTOM_ERROR_NEED_WARSONG_DISGUISE                            =  4,  // Requires that you be wearing the Warsong Orc Disguise.
    SPELL_CUSTOM_ERROR_REQUIRES_PLAGUE_WAGON                            =  5,  // You must be closer to a plague wagon in order to drop off your 7th Legion Siege Engineer.
    SPELL_CUSTOM_ERROR_CANT_TARGET_FRIENDLY_NONPARTY                    =  6,  // You cannot target friendly units outside your party.
    SPELL_CUSTOM_ERROR_NEED_CHILL_NYMPH                                 =  7,  // You must target a weakened chill nymph.
    SPELL_CUSTOM_ERROR_MUST_BE_IN_ENKILAH                               =  8,  // The Imbued Scourge Shroud will only work when equipped in the Temple City of En'kilah.
    SPELL_CUSTOM_ERROR_REQUIRES_CORPSE_DUST                             =  9,  // Requires Corpse Dust
    SPELL_CUSTOM_ERROR_CANT_SUMMON_GARGOYLE                             = 10,  // You cannot summon another gargoyle yet.
    SPELL_CUSTOM_ERROR_NEED_CORPSE_DUST_IF_NO_TARGET                    = 11,  // Requires Corpse Dust if the target is not dead and humanoid.
    SPELL_CUSTOM_ERROR_MUST_BE_AT_SHATTERHORN                           = 12,  // Can only be placed near Shatterhorn
    SPELL_CUSTOM_ERROR_MUST_TARGET_PROTO_DRAKE_EGG                      = 13,  // You must first select a Proto-Drake Egg.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_TREE                            = 14,  // You must be close to a marked tree.
    SPELL_CUSTOM_ERROR_MUST_TARGET_TURKEY                               = 15,  // You must target a Fjord Turkey.
    SPELL_CUSTOM_ERROR_MUST_TARGET_HAWK                                 = 16,  // You must target a Fjord Hawk.
    SPELL_CUSTOM_ERROR_TOO_FAR_FROM_BOUY                                = 17,  // You are too far from the bouy.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_OIL_SLICK                       = 18,  // Must be used near an oil slick.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_BOUY                            = 19,  // You must be closer to the buoy!
    SPELL_CUSTOM_ERROR_WYRMREST_VANQUISHER                              = 20,  // You may only call for the aid of a Wyrmrest Vanquisher in Wyrmrest Temple, The Dragon Wastes, Galakrond's Rest or The Wicked Coil.
    SPELL_CUSTOM_ERROR_MUST_TARGET_ICE_HEART_JORMUNGAR                  = 21,  // That can only be used on a Ice Heart Jormungar Spawn.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_SINKHOLE                        = 22,  // You must be closer to a sinkhole to use your map.
    SPELL_CUSTOM_ERROR_REQUIRES_HAROLD_LANE                             = 23,  // You may only call down a stampede on Harold Lane.
    SPELL_CUSTOM_ERROR_REQUIRES_GAMMOTH_MAGNATAUR                       = 24,  // You may only use the Pouch of Crushed Bloodspore on Gammothra or other magnataur in the Bloodspore Plains and Gammoth.
    SPELL_CUSTOM_ERROR_MUST_BE_IN_RESURRECTION_CHAMBER                  = 25,  // Requires the magmawyrm resurrection chamber in the back of the Maw of Neltharion.
    SPELL_CUSTOM_ERROR_CANT_CALL_WINTERGARDE_HERE                       = 26,  // You may only call down a Wintergarde Gryphon in Wintergarde Keep or the Carrion Fields.
    SPELL_CUSTOM_ERROR_MUST_TARGET_WILHELM                              = 27,  // What are you doing? Only aim that thing at Wilhelm!
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_HEALTH                                = 28,  // Not enough health!
    SPELL_CUSTOM_ERROR_NO_NEARBY_CORPSES                                = 29,  // There are no nearby corpses to use.
    SPELL_CUSTOM_ERROR_TOO_MANY_GHOULS                                  = 30,  // You've created enough ghouls. Return to Gothik the Harvester at Death's Breach.
    SPELL_CUSTOM_ERROR_GO_FURTHER_FROM_SUNDERED_SHARD                   = 31,  // Your companion does not want to come here.  Go further from the Sundered Shard.
    SPELL_CUSTOM_ERROR_MUST_BE_IN_CAT_FORM                              = 32,  // Must be in Cat Form
    SPELL_CUSTOM_ERROR_MUST_BE_DEATH_KNIGHT                             = 33,  // Only Death Knights may enter Ebon Hold.
    SPELL_CUSTOM_ERROR_MUST_BE_IN_BEAR_FORM                             = 34,  // Must be in Bear Form
    SPELL_CUSTOM_ERROR_MUST_BE_NEAR_HELPLESS_VILLAGER                   = 35,  // You must be within range of a Helpless Wintergarde Villager.
    SPELL_CUSTOM_ERROR_CANT_TARGET_ELEMENTAL_MECHANICAL                 = 36,  // You cannot target an elemental or mechanical corpse.
    SPELL_CUSTOM_ERROR_MUST_HAVE_USED_DALARAN_CRYSTAL                   = 37,  // This teleport crystal cannot be used until the teleport crystal in Dalaran has been used at least once.
    SPELL_CUSTOM_ERROR_YOU_ALREADY_HOLD_SOMETHING                       = 38,  // You are already holding something in your hand. You must throw the creature in your hand before picking up another.
    SPELL_CUSTOM_ERROR_YOU_DONT_HOLD_ANYTHING                           = 39,  // You don't have anything to throw! Find a Vargul and use Gymer Grab to pick one up!
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_VALDURAN                        = 40,  // Bouldercrag's War Horn can only be used within 10 yards of Valduran the Stormborn.
    SPELL_CUSTOM_ERROR_NO_PASSENGER                                     = 41,  // You are not carrying a passenger. There is nobody to drop off.
    SPELL_CUSTOM_ERROR_CANT_BUILD_MORE_VEHICLES                         = 42,  // You cannot build any more siege vehicles.
    SPELL_CUSTOM_ERROR_ALREADY_CARRYING_CRUSADER                        = 43,  // You are already carrying a captured Argent Crusader. You must return to the Argent Vanguard infirmary and drop off your passenger before you may pick up another.
    SPELL_CUSTOM_ERROR_CANT_DO_WHILE_ROOTED                             = 44,  // You can't do that while rooted.
    SPELL_CUSTOM_ERROR_REQUIRES_NEARBY_TARGET                           = 45,  // Requires a nearby target.
    SPELL_CUSTOM_ERROR_NOTHING_TO_DISCOVER                              = 46,  // Nothing left to discover.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_TARGETS                               = 47,  // No targets close enough to bluff.
    SPELL_CUSTOM_ERROR_CONSTRUCT_TOO_FAR                                = 48,  // Your Iron Rune Construct is out of range.
    SPELL_CUSTOM_ERROR_REQUIRES_GRAND_MASTER_ENGINEER                   = 49,  // Requires Engineering (350)
    SPELL_CUSTOM_ERROR_CANT_USE_THAT_MOUNT                              = 50,  // You can't use that mount.
    SPELL_CUSTOM_ERROR_NOONE_TO_EJECT                                   = 51,  // There is nobody to eject!
    SPELL_CUSTOM_ERROR_TARGET_MUST_BE_BOUND                             = 52,  // The target must be bound to you.
    SPELL_CUSTOM_ERROR_TARGET_MUST_BE_UNDEAD                            = 53,  // Target must be undead.
    SPELL_CUSTOM_ERROR_TARGET_TOO_FAR                                   = 54,  // You have no target or your target is too far away.
    SPELL_CUSTOM_ERROR_MISSING_DARK_MATTER                              = 55,  // Missing Reagents: Dark Matter
    SPELL_CUSTOM_ERROR_CANT_USE_THAT_ITEM                               = 56,  // You can't use that item
    SPELL_CUSTOM_ERROR_CANT_DO_WHILE_CYCYLONED                          = 57,  // You can't do that while Cycloned
    SPELL_CUSTOM_ERROR_TARGET_HAS_SCROLL                                = 58,  // Target is already affected by a similar effect
    SPELL_CUSTOM_ERROR_POISON_TOO_STRONG                                = 59,  // That anti-venom is not strong enough to dispel that poison
    SPELL_CUSTOM_ERROR_MUST_HAVE_LANCE_EQUIPPED                         = 60,  // You must have a lance equipped.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSE_TO_MAIDEN                          = 61,  // You must be near the Maiden of Winter's Breath Lake.
    SPELL_CUSTOM_ERROR_LEARNED_EVERYTHING                               = 62,  // You have learned everything from that book
    SPELL_CUSTOM_ERROR_PET_IS_DEAD                                      = 63,  // Your pet is dead
    SPELL_CUSTOM_ERROR_NO_VALID_TARGETS                                 = 64,  // There are no valid targets within range.
    SPELL_CUSTOM_ERROR_GM_ONLY                                          = 65,  // Only GMs may use that. Your account has been reported for investigation.
    SPELL_CUSTOM_ERROR_REQUIRES_LEVEL_58                                = 66,  // You must reach level 58 to use this portal.
    SPELL_CUSTOM_ERROR_AT_HONOR_CAP                                     = 67,  // You already have the maximum amount of honor.
    SPELL_CUSTOM_ERROR_HAVE_HOT_ROD                                     = 68,  // You already have a Hot Rod.
    SPELL_CUSTOM_ERROR_PARTYGOER_MORE_BUBBLY                            = 69,  // This partygoer wants some more bubbly.
    SPELL_CUSTOM_ERROR_PARTYGOER_NEED_BUCKET                            = 70,  // This partygoer needs a bucket!
    SPELL_CUSTOM_ERROR_PARTYGOER_WANT_TO_DANCE                          = 71,  // This partygoer wants to dance with you.
    SPELL_CUSTOM_ERROR_PARTYGOER_WANT_FIREWORKS                         = 72,  // This partygoer wants to see some fireworks.
    SPELL_CUSTOM_ERROR_PARTYGOER_WANT_APPETIZER                         = 73,  // This partygoer wants some more hors d'oeuvres.
    SPELL_CUSTOM_ERROR_GOBLIN_BATTERY_DEPLETED                          = 74,  // The Goblin All-In-1-Der Belt's battery is depleted.
    SPELL_CUSTOM_ERROR_MUST_HAVE_DEMONIC_CIRCLE                         = 75,  // You must have a demonic circle active.
    SPELL_CUSTOM_ERROR_AT_MAX_RAGE                                      = 76,  // You already have maximum rage
    SPELL_CUSTOM_ERROR_REQUIRES_350_ENGINEERING                         = 77,  // Requires Engineering (350)
    SPELL_CUSTOM_ERROR_SOUL_BELONGS_TO_LICH_KING                        = 78,  // Your soul belongs to the Lich King
    SPELL_CUSTOM_ERROR_ATTENDANT_HAS_PONY                               = 79,  // Your attendant already has an Argent Pony
    SPELL_CUSTOM_ERROR_GOBLIN_STARTING_MISSION                          = 80,  // First, Overload the Defective Generator, Activate the Leaky Stove, and Drop a Cigar on the Flammable Bed.
    SPELL_CUSTOM_ERROR_GASBOT_ALREADY_SENT                              = 81,  // You've already sent in the Gasbot and destroyed headquarters!
    SPELL_CUSTOM_ERROR_GOBLIN_IS_PARTIED_OUT                            = 82,  // This goblin is all partied out!
    SPELL_CUSTOM_ERROR_MUST_HAVE_FIRE_TOTEM                             = 83,  // You must have a Magma, Flametongue, or Fire Elemental Totem active.
    SPELL_CUSTOM_ERROR_CANT_TARGET_VAMPIRES                             = 84,  // You may not bite other vampires.
    SPELL_CUSTOM_ERROR_PET_ALREADY_AT_YOUR_LEVEL                        = 85,  // Your pet is already at your level.
    SPELL_CUSTOM_ERROR_MISSING_ITEM_REQUIREMENS                         = 86,  // You do not meet the level requirements for this item.
    SPELL_CUSTOM_ERROR_TOO_MANY_ABOMINATIONS                            = 87,  // There are too many Mutated Abominations.
    SPELL_CUSTOM_ERROR_ALL_POTIONS_USED                                 = 88,  // The potions have all been depleted by Professor Putricide.
    SPELL_CUSTOM_ERROR_DEFEATED_ENOUGH_ALREADY                          = 89,  // You have already defeated enough of them.
    SPELL_CUSTOM_ERROR_REQUIRES_LEVEL_65                                = 90,  // Requires level 65
    SPELL_CUSTOM_ERROR_DESTROYED_KTC_OIL_PLATFORM                       = 91,  // You have already destroyed the KTC Oil Platform.
    SPELL_CUSTOM_ERROR_LAUNCHED_ENOUGH_CAGES                            = 92,  // You have already launched enough cages.
    SPELL_CUSTOM_ERROR_REQUIRES_BOOSTER_ROCKETS                         = 93,  // Requires Single-Stage Booster Rockets. Return to Hobart Grapplehammer to get more.
    SPELL_CUSTOM_ERROR_ENOUGH_WILD_CLUCKERS                             = 94,  // You have already captured enough wild cluckers.
    SPELL_CUSTOM_ERROR_REQUIRES_CONTROL_FIREWORKS                       = 95,  // Requires Remote Control Fireworks. Return to Hobart Grapplehammer to get more.
    SPELL_CUSTOM_ERROR_MAX_NUMBER_OF_RECRUITS                           = 96,  // You already have the max number of recruits.
    SPELL_CUSTOM_ERROR_MAX_NUMBER_OF_VOLUNTEERS                         = 97,  // You already have the max number of volunteers.
    SPELL_CUSTOM_ERROR_FROSTMOURNE_RENDERED_RESURRECT                   = 98,  // Frostmourne has rendered you unable to resurrect.
    SPELL_CUSTOM_ERROR_CANT_MOUNT_WITH_SHAPESHIFT                       = 99,  // You can't mount while affected by that shapeshift.
    SPELL_CUSTOM_ERROR_FAWNS_ALREADY_FOLLOWING                          = 100, // Three fawns are already following you!
    SPELL_CUSTOM_ERROR_ALREADY_HAVE_RIVER_BOAT                          = 101, // You already have a River Boat.
    SPELL_CUSTOM_ERROR_NO_ACTIVE_ENCHANTMENT                            = 102, // You have no active enchantment to unleash.
    SPELL_CUSTOM_ERROR_ENOUGH_HIGHBOURNE_SOULS                          = 103, // You have bound enough Highborne souls. Return to Arcanist Valdurian.
    SPELL_CUSTOM_ERROR_ATLEAST_40YD_FROM_OIL_DRILLING                   = 104, // You must be at least 40 yards away from all other Oil Drilling Rigs.
    SPELL_CUSTOM_ERROR_ABOVE_ENSLAVED_PEARL_MINER                       = 106, // You must be above the Enslaved Pearl Miner.
    SPELL_CUSTOM_ERROR_MUST_TARGET_CORPSE_SPECIAL_1                     = 107, // You must target the corpse of a Seabrush Terrapin, Scourgut Remora, or Spinescale Hammerhead.
    SPELL_CUSTOM_ERROR_SLAGHAMMER_ALREADY_PRISONER                      = 108, // Ambassador Slaghammer is already your prisoner.
    SPELL_CUSTOM_ERROR_REQUIRE_ATTUNED_LOCATION_1                       = 109, // Requires a location that is attuned with the Naz'jar Battlemaiden.
    SPELL_CUSTOM_ERROR_NEED_TO_FREE_DRAKE_FIRST                         = 110, // Free the Drake from the net first!
    SPELL_CUSTOM_ERROR_DRAGONMAW_ALLIES_ALREADY_FOLLOW                  = 111, // You already have three Dragonmaw allies following you.
    SPELL_CUSTOM_ERROR_REQUIRE_OPPOSABLE_THUMBS                         = 112, // Requires Opposable Thumbs.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_HEALTH_2                              = 113, // Not enough health
    SPELL_CUSTOM_ERROR_ENOUGH_FORSAKEN_TROOPERS                         = 114, // You already have enough Forsaken Troopers.
    SPELL_CUSTOM_ERROR_CANNOT_JUMP_TO_BOULDER                           = 115, // You cannot jump to another boulder yet.
    SPELL_CUSTOM_ERROR_SKILL_TOO_HIGH                                   = 116, // Skill too high.
    SPELL_CUSTOM_ERROR_ALREADY_6_SURVIVORS_RESCUED                      = 117, // You have already rescued 6 Survivors.
    SPELL_CUSTOM_ERROR_MUST_FACE_SHIPS_FROM_BALLOON                     = 118, // You need to be facing the ships from the rescue balloon.
    SPELL_CUSTOM_ERROR_CANNOT_SUPERVISE_MORE_CULTISTS                   = 119, // You cannot supervise more than 5 Arrested Cultists at a time.
    SPELL_CUSTOM_ERROR_REQUIRES_LEVEL_85                                = 120, // You must reach level 85 to use this portal.
    SPELL_CUSTOM_ERROR_MUST_BE_BELOW_35_HEALTH                          = 121, // Your target must be below 35% health.
    SPELL_CUSTOM_ERROR_MUST_SELECT_SPECIALIZATION                       = 122, // You must select a specialization first.
    SPELL_CUSTOM_ERROR_TOO_WISE_AND_POWERFUL                            = 123, // You are too wise and powerful to gain any benefit from that item.
    SPELL_CUSTOM_ERROR_TOO_CLOSE_ARGENT_LIGHTWELL                       = 124, // You are within 10 yards of another Argent Lightwell.
    SPELL_CUSTOM_ERROR_NOT_WHILE_SHAPESHIFTED                           = 125, // You can't do that while shapeshifted.
    SPELL_CUSTOM_ERROR_MANA_GEM_IN_BANK                                 = 126, // You already have a Mana Gem in your bank.
    SPELL_CUSTOM_ERROR_FLAME_SHOCK_NOT_ACTIVE                           = 127, // You must have at least one Flame Shock active.
    SPELL_CUSTOM_ERROR_CANT_TRANSFORM                                   = 128, // You cannot transform right now
    SPELL_CUSTOM_ERROR_PET_MUST_BE_ATTACKING                            = 129, // Your pet must be attacking a target.
    SPELL_CUSTOM_ERROR_GNOMISH_ENGINEERING                              = 130, // Requires Gnomish Engineering
    SPELL_CUSTOM_ERROR_GOBLIN_ENGINEERING                               = 131, // Requires Goblin Engineering
    SPELL_CUSTOM_ERROR_NO_TARGET                                        = 132, // You have no target.
    SPELL_CUSTOM_ERROR_PET_OUT_OF_RANGE                                 = 133, // Your Pet is out of range of the target.
    SPELL_CUSTOM_ERROR_HOLDING_FLAG                                     = 134, // You can't do that while holding the flag.
    SPELL_CUSTOM_ERROR_TARGET_HOLDING_FLAG                              = 135, // You can't do that to targets holding the flag.
    SPELL_CUSTOM_ERROR_PORTAL_NOT_OPEN                                  = 136, // The portal is not yet open.  Continue helping the druids at the Sanctuary of Malorne.
    SPELL_CUSTOM_ERROR_AGGRA_AIR_TOTEM                                  = 137, // You need to be closer to Aggra's Air Totem, in the west.
    SPELL_CUSTOM_ERROR_AGGRA_WATER_TOTEM                                = 138, // You need to be closer to Aggra's Water Totem, in the north.
    SPELL_CUSTOM_ERROR_AGGRA_EARTH_TOTEM                                = 139, // You need to be closer to Aggra's Earth Totem, in the east.
    SPELL_CUSTOM_ERROR_AGGRA_FIRE_TOTEM                                 = 140, // You need to be closer to Aggra's Fire Totem, near Thrall.
    SPELL_CUSTOM_ERROR_FACING_WRONG_WAY                                 = 141, // You are facing the wrong way.
    SPELL_CUSTOM_ERROR_TOO_CLOSE_TO_MAKESHIFT_DYNAMITE                  = 142, // You are within 10 yards of another Makeshift Dynamite.
    SPELL_CUSTOM_ERROR_NOT_NEAR_SAPPHIRE_SUNKEN_SHIP                    = 143, // You must be near the sunken ship at Sapphire's End in the Jade Forest.
    SPELL_CUSTOM_ERROR_DEMONS_HEALTH_FULL                               = 144, // That demon's health is already full.
    SPELL_CUSTOM_ERROR_ONYX_SERPENT_NOT_OVERHEAD                        = 145, // Wait until the Onyx Serpent is directly overhead.
    SPELL_CUSTOM_ERROR_OBJECTIVE_ALREADY_COMPLETE                       = 146, // Your objective is already complete.
    SPELL_CUSTOM_ERROR_PUSH_SAD_PANDA_TOWARDS_TOWN                      = 147, // You can only push Sad Panda towards Sad Panda Town!
    SPELL_CUSTOM_ERROR_TARGET_HAS_STARTDUST_2                           = 148, // Target is already affected by Stardust No. 2.
    SPELL_CUSTOM_ERROR_ELEMENTIUM_GEM_CLUSTERS                          = 149, // You cannot deconstruct Elementium Gem Clusters while collecting them!
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_ENOUGH_HEALTH                      = 150, // You don't have enough health.
    SPELL_CUSTOM_ERROR_YOU_CANNOT_USE_THE_GATEWAY_YET                   = 151, // You cannot use the gateway yet.
    SPELL_CUSTOM_ERROR_CHOOSE_SPEC_FOR_ASCENDANCE                       = 152, // You must choose a specialization to use Ascendance.
    SPELL_CUSTOM_ERROR_INSUFFICIENT_BLOOD_CHARGES                       = 153, // You have insufficient Blood Charges.
    SPELL_CUSTOM_ERROR_NO_FULLY_DEPLETED_RUNES                          = 154, // No fully depleted runes.
    SPELL_CUSTOM_ERROR_NO_MORE_CHARGES                                  = 155, // No more charges.
    SPELL_CUSTOM_ERROR_STATUE_IS_OUT_OF_RANGE_OF_TARGET                 = 156, // Statue is out of range of the target.
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_A_STATUE_SUMMONED                  = 157, // You don't have a statue summoned.
    SPELL_CUSTOM_ERROR_YOU_HAVE_NO_SPIRIT_ACTIVE                        = 158, // You have no spirit active.
    SPELL_CUSTOM_ERROR_BOTH_DISESASES_MUST_BE_ON_TARGET                 = 159, // Both Frost Fever and Blood Plague must be present on the target.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_WITH_ORB_OF_POWER                   = 160, // You can't do that while holding an Orb of Power.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_WHILE_JUMPING_OR_FALLING            = 161, // You can't do that while jumping or falling.
    SPELL_CUSTOM_ERROR_MUST_BE_TRANSFORMED_BY_POLYFORMIC_ACID           = 162, // You must be transformed by Polyformic Acid.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_ACID_TO_STORE_TRANSFORMATION          = 163, // There isn't enough acid left to store this transformation.
    SPELL_CUSTOM_ERROR_MUST_HAVE_FLIGHT_MASTERS_LICENSE                 = 164, // You must obtain a Flight Master's License before using this spell.
    SPELL_CUSTOM_ERROR_ALREADY_SAMPLED_SAP_FROM_FEEDER                  = 165, // You have already sampled sap from this Feeder.
    SPELL_CUSTOM_ERROR_MUST_BE_NEWR_MANTID_FEEDER                       = 166, // Requires you to be near a Mantid Feeder in the Heart of Fear.
    SPELL_CUSTOM_ERROR_TARGET_MUST_BE_IN_DIRECTLY_FRONT                 = 167, // Target must be directly in front of you.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_WHILE_MYTHIC_KEYSTONE_IS_ACTIVE     = 168, // You can't do that while a Mythic Keystone is active.
    SPELL_CUSTOM_ERROR_WRONG_CLASS_FOR_MOUNT                            = 169, // You are not the correct class for that mount.
    SPELL_CUSTOM_ERROR_NOTHING_LEFT_TO_DISCOVER                         = 170, // Nothing left to discover.
    SPELL_CUSTOM_ERROR_NO_EXPLOSIVES_AVAILABLE                          = 171, // There are no explosives available.
    SPELL_CUSTOM_ERROR_YOU_MUST_BE_FLAGGED_FOR_PVP                      = 172, // You must be flagged for PvP.
    SPELL_CUSTOM_ERROR_REQUIRES_BATTLE_RATIONS                          = 173, // Requires Battle Rations or Meaty Haunch
    SPELL_CUSTOM_ERROR_REQUIRES_BRITTLE_ROOT                            = 174, // Requires Brittle Root
    SPELL_CUSTOM_ERROR_REQUIRES_LABORERS_TOOL                           = 175, // Requires Laborer's Tool
    SPELL_CUSTOM_ERROR_REQUIRES_UNEXPLODED_CANNONBALL                   = 176, // Requires Unexploded Cannonball
    SPELL_CUSTOM_ERROR_REQUIRES_MISPLACED_KEG                           = 177, // Requires Misplaced Keg
    SPELL_CUSTOM_ERROR_REQUIRES_LIQUID_FIRE                             = 178, // Requires Liquid Fire, Jungle Hops, or Spirit-kissed Water
    SPELL_CUSTOM_ERROR_REQUIRES_KRASARI_IRON                            = 179, // Requires Krasari Iron
    SPELL_CUSTOM_ERROR_REQUIRES_SPIRIT_KISSED_WATER                     = 180, // Requires Spirit-Kissed Water
    SPELL_CUSTOM_ERROR_REQUIRES_SNAKE_OIL                               = 181, // Requires Snake Oil
    SPELL_CUSTOM_ERROR_SCENARIO_IS_IN_PROGRESS                          = 182, // You can't do that while a Scenario is in progress.
    SPELL_CUSTOM_ERROR_REQUIRES_DARKMOON_FAIRE_OPEN                     = 183, // Requires the Darkmoon Faire to be open.
    SPELL_CUSTOM_ERROR_ALREADY_AT_VALOR_CAP                             = 184, // Already at Valor cap
    SPELL_CUSTOM_ERROR_ALREADY_COMMENDED_BY_THIS_FACTION                = 185, // Already commended by this faction
    SPELL_CUSTOM_ERROR_OUT_OF_COINS                                     = 186, // Out of coins! Pickpocket humanoids to get more.
    SPELL_CUSTOM_ERROR_ONLY_ONE_ELEMENTAL_SPIRIT                        = 187, // Only one elemental spirit on a target at a time.
    SPELL_CUSTOM_ERROR_DONT_KNOW_HOW_TO_TAME_DIREHORNS                  = 188, // You do not know how to tame Direhorns.
    SPELL_CUSTOM_ERROR_MUST_BE_NEAR_BLOODIED_COURT_GATE                 = 189, // You must be near the Bloodied Court gate.
    SPELL_CUSTOM_ERROR_YOU_ARE_NOT_ELECTRIFIED                          = 190, // You are not Electrified.
    SPELL_CUSTOM_ERROR_THERE_IS_NOTHING_TO_BE_FETCHED                   = 191, // There is nothing to be fetched.
    SPELL_CUSTOM_ERROR_REQUIRES_THE_THUNDER_FORGE                       = 192, // Requires The Thunder Forge.
    SPELL_CUSTOM_ERROR_CANNOT_USE_THE_DICE_AGAIN_YET                    = 193, // You cannot use the dice again yet.
    SPELL_CUSTOM_ERROR_ALREADY_MEMBER_OF_BRAWLERS_GUILD                 = 194, // You are already a member of the Brawler's Guild.
    SPELL_CUSTOM_ERROR_CANT_CHANGE_SPEC_IN_CELESTIAL_CHALLENGE          = 195, // You may not change talent specializations during a celestial challenge.
    SPELL_CUSTOM_ERROR_SPEC_DOES_MATCH_CHALLENGE                        = 196, // Your talent specialization does not match the selected challenge.
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_ENOUGH_CURRENCY                    = 197, // You don't have enough currency to do that.
    SPELL_CUSTOM_ERROR_TARGET_CANNOT_BENEFIT_FROM_SPELL                 = 198, // Target cannot benefit from that spell
    SPELL_CUSTOM_ERROR_YOU_CAN_ONLY_HAVE_ONE_HEALING_RAIN               = 199, // You can only have one Healing Rain active at a time.
    SPELL_CUSTOM_ERROR_THE_DOOR_IS_LOCKED                               = 200, // The door is locked.
    SPELL_CUSTOM_ERROR_YOU_NEED_TO_SELECT_WAITING_CUSTOMER              = 201, // You need to select a customer who is waiting in line first.
    SPELL_CUSTOM_ERROR_CANT_CHANGE_SPEC_DURING_TRIAL                    = 202, // You may not change specialization while a trial is in progress.
    SPELL_CUSTOM_ERROR_CUSTOMER_NEED_TO_GET_IN_LINE                     = 203, // You must wait for customers to get in line before you can select them to be seated.
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSER_TO_GAZLOWE_OBJECTIVE              = 204, // Must be closer to one of Gazlowe's objectives to deploy!
    SPELL_CUSTOM_ERROR_MUST_BE_CLOSER_TO_THAELIN_OBJECTIVE              = 205, // Must be closer to one of Thaelin's objectives to deploy!
    SPELL_CUSTOM_ERROR_YOUR_PACK_OF_VOLEN_IS_FULL                       = 206, // Your pack of volen is already full!
    SPELL_CUSTOM_ERROR_REQUIRES_600_MINING_OR_BLACKSMITHING             = 207, // Requires 600 Mining or Blacksmithing
    SPELL_CUSTOM_ERROR_ARKONITE_PROTECTOR_NOT_IN_RANGE                  = 208, // The Arkonite Protector is not in range.
    SPELL_CUSTOM_ERROR_TARGET_CANNOT_HAVE_BOTH_BEACONS                  = 209, // You are unable to have both Beacon of Light and Beacon of Faith on the same target.
    SPELL_CUSTOM_ERROR_CAN_ONLY_USE_ON_AFK_PLAYER                       = 210, // Can only be used on AFK players.
    SPELL_CUSTOM_ERROR_NO_LOOTABLE_CORPSES_IN_RANGE                     = 211, // No lootable corpse in range
    SPELL_CUSTOM_ERROR_CHIMAERON_TOO_CALM_TO_TAME                       = 212, // Chimaeron is too calm to tame right now.
    SPELL_CUSTOM_ERROR_CAN_ONLY_CARRY_ONE_TYPE_OF_MUNITIONS             = 213, // You may only carry one type of Blackrock Munitions.
    SPELL_CUSTOM_ERROR_OUT_OF_BLACKROCK_MUNITIONS                       = 214, // You have run out of Blackrock Munitions.
    SPELL_CUSTOM_ERROR_CARRYING_MAX_AMOUNT_OF_MUNITIONS                 = 215, // You are carrying the maximum amount of Blackrock Munitions.
    SPELL_CUSTOM_ERROR_TARGET_IS_TOO_FAR_AWAY                           = 216, // Target is too far away.
    SPELL_CUSTOM_ERROR_CANNOT_USE_DURING_BOSS_ENCOUNTER                 = 217, // Cannot use during a boss encounter.
    SPELL_CUSTOM_ERROR_MUST_HAVE_MELEE_WEAPON_IN_BOTH_HANDS             = 218, // Must have a Melee Weapon equipped in both hands
    SPELL_CUSTOM_ERROR_YOUR_WEAPON_HAS_OVERHEATED                       = 219, // Your weapon has overheated.
    SPELL_CUSTOM_ERROR_MUST_BE_PARTY_LEADER_TO_QUEUE                    = 220, // You must be a party leader to queue your group.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_FUEL                                  = 221, // Not enough fuel
    SPELL_CUSTOM_ERROR_YOU_ARE_ALREADY_DISGUISED                        = 222, // You are already disguised!
    SPELL_CUSTOM_ERROR_YOU_NEED_TO_BE_IN_SHREDDER                       = 223, // You need to be in a Shredder to chop this up!
    SPELL_CUSTOM_ERROR_FOOD_CANNOT_EAT_FOOD                             = 224, // Food cannot eat food
    SPELL_CUSTOM_ERROR_MYSTERIOUS_FORCE_PREVENTS_OPENING_CHEST          = 225, // A mysterious force prevents you from opening the chest.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_WHILE_HOLDING_EMPOWERED_ORE         = 226, // You can't do that while holding Empowered Ore.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_AMMUNITION                            = 227, // Not enough Ammunition!
    SPELL_CUSTOM_ERROR_YOU_NEED_BEATFACE_THE_GLADIATOR                  = 228, // You need Beatface the Sparring Arena gladiator to break this!
    SPELL_CUSTOM_ERROR_YOU_CAN_ONLY_HAVE_ONE_WAYGATE                    = 229, // You can only have one waygate open. Disable an activated waygate first.
    SPELL_CUSTOM_ERROR_YOU_CAN_ONLY_HAVE_TWO_WAYGATES                   = 230, // You can only have two waygates open. Disable an activated waygate first.
    SPELL_CUSTOM_ERROR_YOU_CAN_ONLY_HAVE_THREE_WAYGATES                 = 231, // You can only have three waygates open. Disable an activated waygate first.
    SPELL_CUSTOM_ERROR_REQUIRES_MAGE_TOWER                              = 232, // Requires Mage Tower
    SPELL_CUSTOM_ERROR_REQUIRES_SPIRIT_LODGE                            = 233, // Requires Spirit Lodge
    SPELL_CUSTOM_ERROR_FROST_WYRM_ALREADY_ACTIVE                        = 234, // A Frost Wyrm is already active.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_RUNIC_POWER                           = 235, // Not enough Runic Power
    SPELL_CUSTOM_ERROR_YOU_ARE_THE_PARTY_LEADER                         = 236, // You are the Party Leader.
    SPELL_CUSTOM_ERROR_YULON_IS_ALREADY_ACTIVE                          = 237, // Yu'lon is already active.
    SPELL_CUSTOM_ERROR_A_STAMPEDE_IS_ALREADY_ACTIVE                     = 238, // A Stampede is already active.
    SPELL_CUSTOM_ERROR_YOU_ARE_ALREADY_WELL_FED                         = 239, // You are already Well Fed.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_UNDER_SUPPRESSIVE_FIRE              = 240, // You cannot do that while under Suppressive Fire.
    SPELL_CUSTOM_ERROR_YOU_ALREADY_HAVE_MURLOC_SLOP                     = 241, // You already have a piece of Murloc Slop.
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_ARTIFACT_FRAGMENTS                 = 242, // You don't have any Artifact Fragments.
    SPELL_CUSTOM_ERROR_YOU_ARENT_IN_A_PARTY                             = 243, // You aren't in a Party.
    SPELL_CUSTOM_ERROR_REQUIRES_20_AMMUNITION                           = 244, // Requires 30 Ammunition!
    SPELL_CUSTOM_ERROR_REQUIRES_30_AMMUNITION                           = 245, // Requires 20 Ammunition!
    SPELL_CUSTOM_ERROR_YOU_ALREADY_HAVE_MAX_OUTCAST_FOLLOWERS           = 246, // You already have the maximum amount of Outcasts following you.
    SPELL_CUSTOM_ERROR_NOT_IN_WORLD_PVP_ZONE                            = 247, // Not in World PvP zone.
    SPELL_CUSTOM_ERROR_ALREADY_AT_RESOURCE_CAP                          = 248, // Already at Resource cap
    SPELL_CUSTOM_ERROR_APEXIS_SENTINEL_REQUIRES_ENERGY                  = 249, // This Apexis Sentinel requires energy from a nearby Apexis Pylon to be powered up.
    SPELL_CUSTOM_ERROR_YOU_MUST_HAVE_3_OR_FEWER_PLAYER                  = 250, // You must have 3 or fewer players.
    SPELL_CUSTOM_ERROR_YOU_ALREADY_READ_TREASURE_MAP                    = 251, // You have already read that treasure map.
    SPELL_CUSTOM_ERROR_MAY_ONLY_USE_WHILE_GARRISON_UNDER_ATTACK         = 252, // You may only use this item while your garrison is under attack.
    SPELL_CUSTOM_ERROR_REQUIRES_ACTIVE_MUSHROOMS                        = 253, // This spell requires active mushrooms for you to detonate.
    SPELL_CUSTOM_ERROR_REQUIRES_FASTER_TIME_WITH_RACER                  = 254, // Requires a faster time with the basic racer
    SPELL_CUSTOM_ERROR_REQUIRES_INFERNO_SHOT_AMMO                       = 255, // Requires Inferno Shot Ammo!
    SPELL_CUSTOM_ERROR_YOU_CANNOT_DO_THAT_RIGHT_NOW                     = 256, // You cannot do that right now.
    SPELL_CUSTOM_ERROR_A_TRAP_IS_ALREADY_PLACED_THERE                   = 257, // A trap is already placed there.
    SPELL_CUSTOM_ERROR_YOU_ARE_ALREADY_ON_THAT_QUEST                    = 258, // You are already on that quest.
    SPELL_CUSTOM_ERROR_REQUIRES_FELFORGED_CUDGEL                        = 259, // Requires a Felforged Cudgel!
    SPELL_CUSTOM_ERROR_CANT_TAKE_WHILE_BEING_DAMAGED                    = 260, // Can't take while being damaged!
    SPELL_CUSTOM_ERROR_YOU_ARE_BOUND_TO_DRAENOR                         = 261, // You are bound to Draenor by Archimonde's magic.
    SPELL_CUSTOM_ERROR_ALREAY_HAVE_MAX_NUMBER_OF_SHIPS                  = 262, // You already have the maximum number of ships your shipyard can support.
    SPELL_CUSTOM_ERROR_MUST_BE_AT_SHIPYARD                              = 263, // You must be at your shipyard.
    SPELL_CUSTOM_ERROR_REQUIRES_LEVEL_3_MAGE_TOWER                      = 264, // Requires a level 3 Mage Tower.
    SPELL_CUSTOM_ERROR_REQUIRES_LEVEL_3_SPIRIT_LODGE                    = 265, // Requires a level 3 Spirit Lodge.
    SPELL_CUSTOM_ERROR_YOU_DO_NOT_LIKE_FEL_EGGS_AND_HAM                 = 266, // You do not like Fel Eggs and Ham.
    SPELL_CUSTOM_ERROR_ALREADY_ENTERED_IN_THIS_AGREEMENT                = 267, // You have already entered in to this trade agreement.
    SPELL_CUSTOM_ERROR_CANNOT_STEAL_THAT_WHILE_GUARDS_ARE_ON_DUTY       = 268, // You cannot steal that while guards are on duty.
    SPELL_CUSTOM_ERROR_YOU_ALREADY_USED_VANTUS_RUNE                     = 269, // You have already used a Vantus Rune this week.
    SPELL_CUSTOM_ERROR_THAT_ITEM_CANNOT_BE_OBLITERATED                  = 270, // That item cannot be obliterated.
    SPELL_CUSTOM_ERROR_NO_SKINNABLE_CORPSE_IN_RANGE                     = 271, // No skinnable corpse in range
    SPELL_CUSTOM_ERROR_MUST_BE_MERCENARY_TO_USE_TRINKET                 = 272, // You must be a Mercenary to use this trinket.
    SPELL_CUSTOM_ERROR_YOU_MUST_BE_IN_COMBAT                            = 273, // You must be in combat.
    SPELL_CUSTOM_ERROR_NO_ENEMIES_NEAR_TARGET                           = 274, // No enemies near target.
    SPELL_CUSTOM_ERROR_REQUIRES_LEYSPINE_MISSILE                        = 275, // Requires a Leyspine Missile
    SPELL_CUSTOM_ERROR_REQUIRES_BOTH_CURRENTS_CONNECTED                 = 276, // Requires both currents connected.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_IN_DEMON_FORM                       = 277, // Can't do that while in demon form (yet)
    SPELL_CUSTOM_ERROR_YOU_DONT_KNOW_HOW_TO_TAME_MECHS                  = 278, // You do not know how to tame or obtain lore about Mechs.
    SPELL_CUSTOM_ERROR_CANNOT_CHARM_ANY_MORE_WITHERED                   = 279, // You cannot charm any more withered.
    SPELL_CUSTOM_ERROR_REQUIRES_ACTIVE_HEALING_RAIN                     = 280, // Requires an active Healing Rain.
    SPELL_CUSTOM_ERROR_ALREADY_COLLECTED_APPEARANCES                    = 281, // You've already collected these appearances
    SPELL_CUSTOM_ERROR_CANNOT_RESURRECT_SURRENDERED_TO_MADNESS          = 282, // Cannot resurrect someone who has surrendered to madness
    SPELL_CUSTOM_ERROR_YOU_MUST_BE_IN_CAT_FORM                          = 283, // You must be in Cat Form.
    SPELL_CUSTOM_ERROR_YOU_CANNOT_RELEASE_SPIRIT_YET                    = 284, // You cannot Release Spirit yet.
    SPELL_CUSTOM_ERROR_NO_FISHING_NODES_NEARBY                          = 285, // No fishing nodes nearby.
    SPELL_CUSTOM_ERROR_YOU_ARE_NOT_IN_CORRECT_SPEC                      = 286, // You are not the correct specialization.
    SPELL_CUSTOM_ERROR_ULTHALESH_HAS_NO_POWER_WITHOUT_SOULS             = 287, // Ulthalesh has no power without souls.
    SPELL_CUSTOM_ERROR_CANNOT_CAST_THAT_WITH_VOODOO_TOTEM               = 288, // You cannot cast that while talented into Voodoo Totem.
    SPELL_CUSTOM_ERROR_ALREADY_COLLECTED_THIS_APPEARANCE                = 289, // You've already collected this appearance.
    SPELL_CUSTOM_ERROR_YOUR_PET_MAXIMUM_IS_ALREADY_HIGH                 = 290, // Your total pet maximum is already this high.
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_ENOUGH_WITHERED                    = 291, // You do not have enough withered to do that.
    SPELL_CUSTOM_ERROR_REQUIRES_NEARBY_SOUL_FRAGMENT                    = 292, // Requires a nearby Soul Fragment.
    SPELL_CUSTOM_ERROR_REQUIRES_AT_LEAST_10_WITHERED                    = 293, // Requires at least 10 living withered
    SPELL_CUSTOM_ERROR_REQUIRES_AT_LEAST_14_WITHERED                    = 294, // Requires at least 14 living withered
    SPELL_CUSTOM_ERROR_REQUIRES_AT_LEAST_18_WITHERED                    = 295, // Requires at least 18 living withered
    SPELL_CUSTOM_ERROR_REQUIRES_2_WITHERED_MANA_RAGERS                  = 296, // Requires 2 Withered Mana-Ragers
    SPELL_CUSTOM_ERROR_REQUIRES_1_WITHERED_BERSERKE                     = 297, // Requires 1 Withered Berserker
    SPELL_CUSTOM_ERROR_REQUIRES_2_WITHERED_BERSERKER                    = 298, // Requires 2 Withered Berserkers
    SPELL_CUSTOM_ERROR_TARGET_HEALTH_IS_TOO_LOW                         = 299, // Target's health is too low
    SPELL_CUSTOM_ERROR_CANNOT_SHAPESHIFT_WHILE_RIDING_STORMTALON        = 300, // You cannot shapeshift while riding Stormtalon
    SPELL_CUSTOM_ERROR_CANNOT_CHANGE_SPEC_IN_COMBAT_TRAINING            = 301, // You can not change specializations while in Combat Training.
    SPELL_CUSTOM_ERROR_UNKNOWN_PHENOMENON_PREVENTS_LEYLINE_CONNECTION   = 302, // Unknown phenomenon is preventing a connection to the Leyline.
    SPELL_CUSTOM_ERROR_THE_NIGHTMARE_OBSCURES_YOUR_VISION               = 303, // The Nightmare obscures your vision.
    SPELL_CUSTOM_ERROR_YOU_ARE_IN_WRONG_CLASS_SPEC                      = 304, // You are in the wrong class specialization.
    SPELL_CUSTOM_ERROR_THERE_ARE_NO_VALID_CORPSES_NEARBY                = 305, // There are no valid corpses nearby.
    SPELL_CUSTOM_ERROR_CANT_CAST_THAT_RIGHT_NOW                         = 306, // Can't cast that right now.
    SPELL_CUSTOM_ERROR_NOT_ENOUGH_ANCIENT_MAN                           = 307, // Not enough Ancient Mana.
    SPELL_CUSTOM_ERROR_REQUIRES_SONG_SCROLL                             = 308, // Requires a Song Scroll to function.
    SPELL_CUSTOM_ERROR_MUST_HAVE_ARTIFACT_EQUIPPED                      = 309, // You must have an artifact weapon equipped.
    SPELL_CUSTOM_ERROR_REQUIRES_CAT_FORM                                = 310, // Requires Cat Form.
    SPELL_CUSTOM_ERROR_REQUIRES_BEAR_FORM                               = 311, // Requires Bear Form.
    SPELL_CUSTOM_ERROR_REQUIRES_CONJURED_FOOD                           = 312, // Requires either a Conjured Mana Pudding or Conjured Mana Fritter.
    SPELL_CUSTOM_ERROR_REQUIRES_ARTIFACT_WEAPON                         = 313, // Requires an artifact weapon.
    SPELL_CUSTOM_ERROR_YOU_CANT_CAST_THAT_HERE                          = 314, // You can't cast that here
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_ON_CLASS_TRIAL                      = 315, // You cannot do that while on a Class Trial.
    SPELL_CUSTOM_ERROR_RITUAL_OF_DOOM_ONCE_PER_DAY                      = 316, // You can only benefit from the Ritual of Doom once per day.
    SPELL_CUSTOM_ERROR_CANNOT_RITUAL_OF_DOOM_WHILE_SUMMONING_SITERS     = 317, // You cannot perform the Ritual of Doom while attempting to summon the sisters.
    SPELL_CUSTOM_ERROR_LEARNED_ALL_THAT_YOU_CAN_ABOUT_YOUR_ARTIFACT     = 318, // You have learned all that you can about your artifact.
    SPELL_CUSTOM_ERROR_CANT_CALL_PET_WITH_LONE_WOLF                     = 319, // You cannot use Call Pet while Lone Wolf is active.
    SPELL_CUSTOM_ERROR_YOU_MUST_BE_IN_AN_INN_TO_STRUM_THAT_GUITAR       = 321, // You must be in an inn to strum that guitar.
    SPELL_CUSTOM_ERROR_YOU_CANNOT_REACH_THE_LATCH                       = 322, // You cannot reach the latch.
    SPELL_CUSTOM_ERROR_REQUIRES_A_BRIMMING_KEYSTONE                     = 323, // Requires a Brimming Keystone.
    SPELL_CUSTOM_ERROR_YOU_MUST_BE_WIELDING_THE_UNDERLIGHT_ANGLER       = 324, // You must be wielding the Underlight Angler.
    SPELL_CUSTOM_ERROR_YOUR_TARGET_MUST_BE_SHACKLED                     = 325, // Your target must be Shackled.
    SPELL_CUSTOM_ERROR_YOU_ALREADY_POSSES_ALL_OF_THE_KNOWLEDGE_CONTAINED_IN_THOSE_PAGES = 326, // You already possess all of the knowledge contained in these pages.
    SPELL_CUSTOM_ERROR_YOU_CANT_RISK_GETTING_THE_GRUMMELS_WET           = 327, // You can't risk getting the grummels wet!
    SPELL_CUSTOM_ERROR_YOU_CANNOT_CHANGE_SPECIALIZATION_RIGHT_NOW       = 328, // You cannot change specializations right now.
    SPELL_CUSTOM_ERROR_YOUVE_REACHED_THE_MAXIMUM_NUMBER_OF_ARTIFACT_RESEARCH_NOTES_AVAILABLE = 329, // You've reached the maximum number of Artifact Research Notes available.
    SPELL_CUSTOM_ERROR_YOU_DONT_HAVE_ENOUGH_NETHERSHARDS                = 330, // You don't have enough Nethershards.
    SPELL_CUSTOM_ERROR_THE_SENTINAX_IS_NOT_PATROLLING_THIS_AREA         = 331, // The Sentinax is not patrolling this area.
    SPELL_CUSTOM_ERROR_THE_SENTINAX_CANNOT_OPEN_ANOTHER_PORTAL_RIGHT_NOW = 332, // The Sentinax cannot open another portal right now.
    SPELL_CUSTOM_ERROR_YOU_CANNOT_GAIN_ADDITIONAL_REPUTATION_WITH_THIS_ITEM = 333, // You cannot gain additional reputation with this item.
    SPELL_CUSTOM_ERROR_CANT_DO_THAT_WHILE_GHOST_WOLF_FORM               = 334, // Can't do that while in Ghost Wolf form.
    SPELL_CUSTOM_ERROR_YOUR_SUPPLIES_ARE_FROZEN                         = 335, // Your supplies are frozen.
    SPELL_CUSTOM_ERROR_YOU_DO_NOT_KNOW_HOW_TO_TAME_FEATHERMANES         = 336, // You do not know how to tame Feathermanes.
    SPELL_CUSTOM_ERROR_YOU_MUST_REACH_ARTIFACT_KNOWLEDGE_LEVEL_25       = 337, // You must reach Artifact Knowledge level 25 to use the Tome.
    SPELL_CUSTOM_ERROR_REQUIRES_A_NETHER_PORTAL_DISRUPTOR               = 338, // Requires a Nether Portal Disruptor.
    SPELL_CUSTOM_ERROR_MUST_BE_STANDING_NEAR_INJURED_CHROMIE_IN_MOUNT_HYJAL = 340, // Must be standing near the injured Chromie in Mount Hyjal.
    SPELL_CUSTOM_ERROR_REMOVE_CANNONS_HEAVY_IRON_PLATING_FIRST          = 342, // You should remove the cannon's Heavy Iron Plating first.
    SPELL_CUSTOM_ERROR_REMOVE_CANNONS_ELECTROKINETIC_DEFENSE_GRID_FIRST = 343, // You should remove the cannon's Electrokinetic Defense Grid first.
    SPELL_CUSTOM_ERROR_REQUIRES_THE_ARMORY_KEY_AND_DENDRITE_CLUSTERS    = 344, // You are missing pieces of the Armory Key or do not have enough Dendrite Clusters.
    SPELL_CUSTOM_ERROR_THIS_ITEM_REQUIRES_BASIC_OBLITERUM_TO_UPGRADE    = 345, // This item requires basic Obliterum to upgrade.
    SPELL_CUSTOM_ERROR_THIS_ITEM_REQUIRES_PRIMAL_OBLITERUM_TO_UPGRADE   = 346, // This item requires Primal Obliterum to upgrade.
    SPELL_CUSTOM_ERROR_THIS_ITEM_REQUIRES_FLIGHT_MASTERS_WHISTLE        = 347, // This item requires a Flight Master's Whistle.
    SPELL_CUSTOM_ERROR_REQUIRES_POWER_THAT_ECHOES_THAT_OF_THE_AUGARI    = 349, // Will only open to one wielding the power that echoes that of the Augari.
    SPELL_CUSTOM_ERROR_THAT_PLAYER_HAS_A_PENDING_TOTEMIC_REVIVAL        = 350, // That player has a pending Totemic Revival.
    SPELL_CUSTOM_ERROR_YOU_HAVE_NO_FIRE_MINES_DEPLOYED                  = 351, // You have no Fire Mines deployed.
    SPELL_CUSTOM_ERROR_YOU_ARE_BLOCKED_BY_A_STRUCTURE_ABOVE_YOU         = 353, // You are blocked by a structure above you.
    SPELL_CUSTOM_ERROR_REQUIRES_100_IMP_MEAT                            = 354, // Requires 100 Imp Meat.
    SPELL_CUSTOM_ERROR_YOU_HAVE_NOT_OBTAINED_ANY_BACKGROUND_FILTERS     = 355, // You have not obtained any background filters.
    SPELL_CUSTOM_ERROR_NOTHING_INTERESTING_POSTED_HERE_RIGHT_NOW        = 356, // There is nothing interesting posted here right now.
    SPELL_CUSTOM_ERROR_PARAGON_REPUTATION_REQUIRES_HIGHER_LEVEL         = 357, // Paragon Reputation is not available until a higher level.
    SPELL_CUSTOM_ERROR_UUNA_IS_MISSING                                  = 358, // Uuna is missing.
};

enum StealthType
{
    STEALTH_GENERAL     = 0,
    STEALTH_TRAP        = 1,

    TOTAL_STEALTH_TYPES = 2
};

enum InvisibilityType
{
    INVISIBILITY_GENERAL     =  0,
    INVISIBILITY_UNK1        =  1,
    INVISIBILITY_UNK2        =  2,
    INVISIBILITY_TRAP        =  3,
    INVISIBILITY_UNK4        =  4,
    INVISIBILITY_UNK5        =  5,
    INVISIBILITY_DRUNK       =  6,
    INVISIBILITY_UNK7        =  7,
    INVISIBILITY_UNK8        =  8,
    INVISIBILITY_UNK9        =  9,
    INVISIBILITY_UNK10       = 10,
    INVISIBILITY_UNK11       = 11,
    INVISIBILITY_UNK12       = 12,
    INVISIBILITY_UNK13       = 13,
    INVISIBILITY_UNK14       = 14,
    INVISIBILITY_UNK15       = 15,
    INVISIBILITY_UNK16       = 16,
    INVISIBILITY_UNK17       = 17,
    INVISIBILITY_UNK18       = 18,
    INVISIBILITY_UNK19       = 19,
    INVISIBILITY_UNK20       = 20,
    INVISIBILITY_UNK21       = 21,
    INVISIBILITY_UNK22       = 22,
    INVISIBILITY_TRA23       = 23,
    INVISIBILITY_UNK24       = 24,
    INVISIBILITY_UNK25       = 25,
    INVISIBILITY_UNK26       = 26,
    INVISIBILITY_UNK27       = 27,
    INVISIBILITY_UNK28       = 28,
    INVISIBILITY_UNK29       = 29,
    INVISIBILITY_UNK30       = 30,
    INVISIBILITY_UNK31       = 31,
    INVISIBILITY_UNK32       = 32,
    INVISIBILITY_UNK33       = 33,
    INVISIBILITY_UNK34       = 34,
    INVISIBILITY_UNK35       = 35,
    INVISIBILITY_UNK36       = 36,
    INVISIBILITY_UNK37       = 37,

    TOTAL_INVISIBILITY_TYPES = 38
};

enum ServerSideVisibilityType
{
    SERVERSIDE_VISIBILITY_GM          = 0,
    SERVERSIDE_VISIBILITY_GHOST       = 1,
    SERVERSIDE_VISIBILITY_DUEL        = 2,

    TOTAL_SERVERSIDE_VISIBILITY_TYPES = 3
};

enum GhostVisibilityType
{
    GHOST_VISIBILITY_ALIVE = 0x1,
    GHOST_VISIBILITY_GHOST = 0x2
};

// Spell aura states
enum AuraStateType
{   // (C) used in caster aura state     (T) used in target aura state
    // (c) used in caster aura state-not (t) used in target aura state-not
    AURA_STATE_NONE                         = 0,            // C   |
    AURA_STATE_DEFENSE                      = 1,            // C   |
    AURA_STATE_HEALTHLESS_20_PERCENT        = 2,            // CcT |
    AURA_STATE_BERSERKING                   = 3,            // C T |
    AURA_STATE_FROZEN                       = 4,            //  c t| frozen target
    AURA_STATE_JUDGEMENT                    = 5,            // C   |
    AURA_STATE_HEALTHLESS_25_PERCENT        = 6,            //     |
    AURA_STATE_HUNTER_PARRY                 = 7,            // C   |
    //AURA_STATE_UNKNOWN7                   = 7,            //  c  | creature cheap shot / focused bursts spells
    //AURA_STATE_UNKNOWN8                   = 8,            //    t| test spells
    //AURA_STATE_UNKNOWN9                   = 9,            //     |
    AURA_STATE_WARRIOR_VICTORY_RUSH         = 10,           // C   | warrior victory rush
    //AURA_STATE_UNKNOWN11                  = 11,           // C  t| 60348 - Maelstrom Ready!, test spells
    AURA_STATE_FAERIE_FIRE                  = 12,           //  c t|
    AURA_STATE_HEALTHLESS_35_PERCENT        = 13,           // C T |
    AURA_STATE_CONFLAGRATE                  = 14,           //   T |
    AURA_STATE_SWIFTMEND                    = 15,           //   T |
    AURA_STATE_ENRAGE                       = 17,           // C   |
    AURA_STATE_BLEEDING                     = 18,           //    T|
    AURA_STATE_UNKNOWN19                    = 19,           //     |
    AURA_STATE_PVP_RAID_PREPARE             = 20,           //  c  |
    //AURA_STATE_UNKNOWN21                  = 21,           //     | not used
    AURA_STATE_UNKNOWN22                    = 22,           // C  t| varius spells (63884, 50240)
    AURA_STATE_HEALTH_ABOVE_75_PERCENT      = 23            // C   |
};

constexpr auto  PER_CASTER_AURA_STATE_MASK = ((1 << (AURA_STATE_CONFLAGRATE - 1)));

// Spell mechanics
enum Mechanics
{
    MECHANIC_NONE             = 0,
    MECHANIC_CHARM            = 1,
    MECHANIC_DISORIENTED      = 2,
    MECHANIC_DISARM           = 3,
    MECHANIC_DISTRACT         = 4,
    MECHANIC_FEAR             = 5,
    MECHANIC_GRIP             = 6,
    MECHANIC_ROOT             = 7,
    MECHANIC_COMBAT_SLOW      = 8,
    MECHANIC_SILENCE          = 9,
    MECHANIC_SLEEP            = 10,
    MECHANIC_SNARE            = 11,
    MECHANIC_STUN             = 12,
    MECHANIC_FREEZE           = 13,
    MECHANIC_INCAPACITATE     = 14,
    MECHANIC_BLEED            = 15,
    MECHANIC_PROVOKE          = 16,
    MECHANIC_BANDAGE          = 16,
    MECHANIC_POLYMORPH        = 17,
    MECHANIC_BANISH           = 18,
    MECHANIC_SHIELD           = 19,
    MECHANIC_SHACKLE          = 20,
    MECHANIC_MOUNT            = 21,
    MECHANIC_ENCOUNTER        = 22,
    MECHANIC_TURN             = 23,
    MECHANIC_HORROR           = 24,
    MECHANIC_INVULNERABILITY  = 25,
    MECHANIC_INTERRUPT        = 26,
    MECHANIC_DAZE             = 27,
    MECHANIC_DISCOVERY        = 28,
    MECHANIC_MAGICAL_IMMUNITY = 29,                         // Divine (Blessing) Shield/Protection and Ice Block
    MECHANIC_SAPPED           = 30,
    MECHANIC_ENRAGED          = 31,
    MECHANIC_WOUNDED          = 32,
    MECHANIC_UNK_33           = 33,
    MECHANIC_UNK_34           = 34,
    MECHANIC_UNK_35           = 35,

    MAX_MECHANIC
};

// Used for spell 42292 Immune Movement Impairment and Loss of Control (0x49967ca6)
constexpr auto IMMUNE_TO_MOVEMENT_IMPAIRMENT_AND_LOSS_CONTROL_MASK = (
	(1 << MECHANIC_CHARM) | (1 << MECHANIC_DISORIENTED) | (1 << MECHANIC_FEAR) |
	(1 << MECHANIC_ROOT) | (1 << MECHANIC_SLEEP) | (1 << MECHANIC_SNARE) |
	(1 << MECHANIC_STUN) | (1 << MECHANIC_FREEZE) | (1 << MECHANIC_SILENCE) | (1 << MECHANIC_DISARM) | (1 << MECHANIC_INCAPACITATE) |
	(1 << MECHANIC_POLYMORPH) | (1 << MECHANIC_BANISH) | (1 << MECHANIC_SHACKLE) |
	(1 << MECHANIC_TURN) | (1 << MECHANIC_HORROR) | (1 << MECHANIC_DAZE) |
	(1 << MECHANIC_SAPPED));

// Spell dispel type
enum DispelType
{
    DISPEL_NONE         = 0,
    DISPEL_MAGIC        = 1,
    DISPEL_CURSE        = 2,
    DISPEL_DISEASE      = 3,
    DISPEL_POISON       = 4,
    DISPEL_STEALTH      = 5,
    DISPEL_INVISIBILITY = 6,
    DISPEL_ALL          = 7,
    DISPEL_SPE_NPC_ONLY = 8,
    DISPEL_ENRAGE       = 9,
    DISPEL_ZG_TICKET    = 10,
    DESPEL_OLD_UNUSED   = 11
};

constexpr auto DISPEL_ALL_MASK = ((1 << DISPEL_MAGIC) | (1 << DISPEL_CURSE) | (1 << DISPEL_DISEASE) | (1 << DISPEL_POISON));

//To all Immune system, if target has immunes,
//some spell that related to ImmuneToDispel or ImmuneToSchool or ImmuneToDamage type can't cast to it,
//some spell_effects that related to ImmuneToEffect<effect>(only this effect in the spell) can't cast to it,
//some aura(related to Mechanics or ImmuneToState<aura>) can't apply to it.
enum SpellImmunity
{
    IMMUNITY_EFFECT                = 0,                     // enum SpellEffects
    IMMUNITY_STATE                 = 1,                     // enum AuraType
    IMMUNITY_SCHOOL                = 2,                     // enum SpellSchoolMask
    IMMUNITY_DAMAGE                = 3,                     // enum SpellSchoolMask
    IMMUNITY_DISPEL                = 4,                     // enum DispelType
    IMMUNITY_MECHANIC              = 5,                     // enum Mechanics
    IMMUNITY_ID                    = 6,

    MAX_SPELL_IMMUNITY
};

// target enum name consist of:
// TARGET_[OBJECT_TYPE]_[REFERENCE_TYPE(skipped for caster)]_[SELECTION_TYPE(skipped for default)]_[additional specifiers(friendly, BACK_LEFT, etc.]
enum Targets
{
    TARGET_NONE                        = 0,
    TARGET_UNIT_CASTER                 = 1,
    TARGET_UNIT_NEARBY_ENEMY           = 2,
    TARGET_UNIT_NEARBY_PARTY           = 3,
    TARGET_UNIT_NEARBY_ALLY            = 4,
    TARGET_UNIT_PET                    = 5,
    TARGET_UNIT_TARGET_ENEMY           = 6,
    TARGET_UNIT_SRC_AREA_ENTRY         = 7,
    TARGET_UNIT_DEST_AREA_ENTRY        = 8,
    TARGET_DEST_HOME                   = 9,
    TARGET_UNIT_SRC_AREA_UNK_11        = 11,
    TARGET_UNIT_SRC_AREA_ENEMY         = 15,
    TARGET_UNIT_DEST_AREA_ENEMY        = 16,
    TARGET_DEST_DB                     = 17,
    TARGET_DEST_CASTER                 = 18,
    TARGET_UNIT_CASTER_AREA_PARTY      = 20,
    TARGET_UNIT_TARGET_ALLY            = 21,
    TARGET_SRC_CASTER                  = 22,
    TARGET_GAMEOBJECT_TARGET           = 23,
    TARGET_UNIT_CONE_ENEMY_24          = 24,
    TARGET_UNIT_TARGET_ANY             = 25,
    TARGET_GAMEOBJECT_ITEM_TARGET      = 26,
    TARGET_UNIT_MASTER                 = 27,
    TARGET_DEST_DYNOBJ_ENEMY           = 28,
    TARGET_DEST_DYNOBJ_ALLY            = 29,
    TARGET_UNIT_SRC_AREA_ALLY          = 30,
    TARGET_UNIT_DEST_AREA_ALLY         = 31,
    TARGET_DEST_CASTER_SUMMON          = 32, // front left, doesn't use radius
    TARGET_UNIT_SRC_AREA_PARTY         = 33,
    TARGET_UNIT_DEST_AREA_PARTY        = 34,
    TARGET_UNIT_TARGET_PARTY           = 35,
    TARGET_DEST_CASTER_UNK_36          = 36,
    TARGET_UNIT_LASTTARGET_AREA_PARTY  = 37,
    TARGET_UNIT_NEARBY_ENTRY           = 38,
    TARGET_DEST_CASTER_FISHING         = 39,
    TARGET_GAMEOBJECT_NEARBY_ENTRY     = 40,
    TARGET_DEST_CASTER_FRONT_RIGHT     = 41,
    TARGET_DEST_CASTER_BACK_RIGHT      = 42,
    TARGET_DEST_CASTER_BACK_LEFT       = 43,
    TARGET_DEST_CASTER_FRONT_LEFT      = 44,
    TARGET_UNIT_TARGET_CHAINHEAL_ALLY  = 45,
    TARGET_DEST_NEARBY_ENTRY           = 46,
    TARGET_DEST_CASTER_FRONT           = 47,
    TARGET_DEST_CASTER_BACK            = 48,
    TARGET_DEST_CASTER_RIGHT           = 49,
    TARGET_DEST_CASTER_LEFT            = 50,
    TARGET_GAMEOBJECT_SRC_AREA         = 51,
    TARGET_GAMEOBJECT_DEST_AREA        = 52,
    TARGET_DEST_TARGET_ENEMY           = 53,
    TARGET_UNIT_CONE_ENEMY_54          = 54,
    TARGET_DEST_CASTER_FRONT_LEAP      = 55, // for a leap spell
    TARGET_UNIT_CASTER_AREA_RAID       = 56,
    TARGET_UNIT_TARGET_RAID            = 57,
    TARGET_UNIT_NEARBY_RAID            = 58,
    TARGET_UNIT_CONE_ALLY              = 59,
    TARGET_UNIT_CONE_ENTRY             = 60,
    TARGET_UNIT_TARGET_AREA_RAID_CLASS = 61,
    TARGET_UNK_62                      = 62,
    TARGET_DEST_TARGET_ANY             = 63,
    TARGET_DEST_TARGET_FRONT           = 64,
    TARGET_DEST_TARGET_BACK            = 65,
    TARGET_DEST_TARGET_RIGHT           = 66,
    TARGET_DEST_TARGET_LEFT            = 67,
    TARGET_DEST_TARGET_FRONT_RIGHT     = 68,
    TARGET_DEST_TARGET_BACK_RIGHT      = 69,
    TARGET_DEST_TARGET_BACK_LEFT       = 70,
    TARGET_DEST_TARGET_FRONT_LEFT      = 71,
    TARGET_DEST_CASTER_RANDOM          = 72,
    TARGET_DEST_CASTER_RADIUS          = 73,
    TARGET_DEST_TARGET_RANDOM          = 74,
    TARGET_DEST_TARGET_RADIUS          = 75,
    TARGET_DEST_CHANNEL_TARGET         = 76,
    TARGET_UNIT_CHANNEL_TARGET         = 77,
    TARGET_DEST_DEST_FRONT             = 78,
    TARGET_DEST_DEST_BACK              = 79,
    TARGET_DEST_DEST_RIGHT             = 80,
    TARGET_DEST_DEST_LEFT              = 81,
    TARGET_DEST_DEST_FRONT_RIGHT       = 82,
    TARGET_DEST_DEST_BACK_RIGHT        = 83,
    TARGET_DEST_DEST_BACK_LEFT         = 84,
    TARGET_DEST_DEST_FRONT_LEFT        = 85,
    TARGET_DEST_DEST_RANDOM            = 86,
    TARGET_DEST_DEST                   = 87,
    TARGET_DEST_DYNOBJ_NONE            = 88,
    TARGET_DEST_TRAJ                   = 89,
    TARGET_UNIT_TARGET_MINIPET         = 90,
    TARGET_DEST_DEST_RADIUS            = 91,
    TARGET_UNIT_SELECTED               = 92,
    TARGET_CORPSE_SRC_AREA_ENEMY       = 93, // NYI
    TARGET_UNIT_VEHICLE                = 94,
    TARGET_UNIT_TARGET_PASSENGER       = 95,
    TARGET_UNIT_PASSENGER_0            = 96,
    TARGET_UNIT_PASSENGER_1            = 97,
    TARGET_UNIT_PASSENGER_2            = 98,
    TARGET_UNIT_PASSENGER_3            = 99,
    TARGET_UNIT_PASSENGER_4            = 100,
    TARGET_UNIT_PASSENGER_5            = 101,
    TARGET_UNIT_PASSENGER_6            = 102,
    TARGET_UNIT_PASSENGER_7            = 103,
    TARGET_UNIT_CONE_ENEMY_104         = 104,
    TARGET_UNIT_UNK_105                = 105,
    TARGET_DEST_CHANNEL_CASTER         = 106,
    TARGET_UNK_DEST_AREA_UNK_107       = 107, // not enough info - only generic spells avalible
    TARGET_GAMEOBJECT_CONE             = 108,
    TARGET_UNIT_BETWEEN_DEST           = 109, //may be gameobject?
    TARGET_UNIT_CONE_ENEMY_110         = 110,
    TARGET_UNK_111                     = 111, //not use
    TARGET_UNK_112                     = 112, //1 spell unk target
    TARGET_UNK_113                     = 113, //not use
    TARGET_UNK_114                     = 114, //1 spell unk target
    TARGET_UNK_115                     = 115, //not use
    TARGET_UNK_116                     = 116, //1 spell unk target
    TARGET_UNK_117                     = 117, //not use
    TARGET_UNIT_FRIEND_OR_RAID         = 118,
    TARGET_MASS_RESSURECTION           = 119,
    TARGET_UNIT_CASTER_AREA_SUMMON     = 120,
    TARGET_UNIT_RESURRECT              = 121,
    TARGET_UNIT_TARGET_SELECT2         = 122,
    TARGET_UNIT_THREAD_PLAYER          = 123,
    TARGET_UNK_124                     = 124,
    TARGET_UNK_125                     = 125,
    TARGET_UNK_126                     = 126,
    TARGET_UNIT_SRC_CLOSEST_AREA_ENEMY = 127,
    TARGET_UNK_128                     = 128, //not use
    TARGET_UNIT_ENEMY_BETWEEN_DEST     = 129,
    TARGET_UNIT_ENEMY_BETWEEN_DEST2    = 130,
    TARGET_DEST_RANDOM_CASTER_FRONT    = 131,
    TARGET_DEST_TARGET_FRIEND          = 132,
    TARGET_UNK_133                     = 133, //not use
    TARGET_UNIT_BETWEEN_ENEMY          = 134,
    TARGET_UNK_135                     = 135,
    TARGET_UNIT_ALLY_CONE_CASTER       = 136,
    TARGET_DEST_RANDOM_CASTER_GOTOMOVE = 137,
    TARGET_DEST_TARGET_SELECT          = 138,
    TARGET_UNK_139                     = 139,
    TARGET_UNK_140                     = 140,
    TARGET_UNK_141                     = 141,
    TARGET_UNK_142                     = 142,
    TARGET_ENEMIES_AROUND_CASTER       = 143,
    TARGET_UNK_144                     = 144,
    TARGET_UNK_145                     = 145,
    TARGET_UNK_146                     = 146,
    TARGET_UNK_147                     = 147,
    TARGET_DEST_TARGET_DEST            = 148,
    TARGET_UNK_149                     = 149,

    TOTAL_SPELL_TARGETS
};

enum SpellMissInfo : uint8
{
    SPELL_MISS_NONE                    = 0,  // hitmask = 1
    SPELL_MISS_MISS                    = 1,  // hitmask = 2
    SPELL_MISS_RESIST                  = 2,  // hitmask = 4
    SPELL_MISS_DODGE                   = 3,  // hitmask = 8
    SPELL_MISS_PARRY                   = 4,  // hitmask = 16
    SPELL_MISS_BLOCK                   = 5,  // hitmask = 32
    SPELL_MISS_EVADE                   = 6,  // hitmask = 64
    SPELL_MISS_IMMUNE                  = 7,  // hitmask = 128
    SPELL_MISS_IMMUNE2                 = 8,  // one of these 2 is MISS_TEMPIMMUNE,  hitmask = 256
    SPELL_MISS_DEFLECT                 = 9,  // hitmask = 512
    SPELL_MISS_ABSORB                  = 10, // hitmask = 1024
    SPELL_MISS_REFLECT                 = 11, // hitmask = 2048
    SPELL_MISS_MISFIRED                = 12, // hitmask = 4096
};

enum SpellHitType
{
    SPELL_HIT_TYPE_CRIT_DEBUG           = 0x01,
    SPELL_HIT_TYPE_CRIT                 = 0x02,
    SPELL_HIT_TYPE_HIT_DEBUG            = 0x04,
    SPELL_HIT_TYPE_SPLIT                = 0x08,
    SPELL_HIT_TYPE_VICTIM_IS_ATTACKER   = 0x10,
    SPELL_HIT_TYPE_ATTACK_TABLE_DEBUG   = 0x20,
    SPELL_HIT_TYPE_UNK                  = 0x40,
    SPELL_HIT_TYPE_NO_ATTACKER          = 0x80, // does the same as SPELL_ATTR4_COMBAT_LOG_NO_CASTER
};

enum SpellDmgClass
{
    SPELL_DAMAGE_CLASS_NONE     = 0,
    SPELL_DAMAGE_CLASS_MAGIC    = 1,
    SPELL_DAMAGE_CLASS_MELEE    = 2,
    SPELL_DAMAGE_CLASS_RANGED   = 3
};

enum SpellPreventionType
{
    SPELL_PREVENTION_TYPE_NONE          = 0,
    SPELL_PREVENTION_TYPE_SILENCE       = 1,
    SPELL_PREVENTION_TYPE_PACIFY        = 2,
    SPELL_PREVENTION_TYPE_UNK3          = 3,
    SPELL_PREVENTION_TYPE_NO_ACTIONS    = 4,
    SPELL_PREVENTION_TYPE_UNK5          = 5
};

enum GameobjectTypes // 6.2.2
{
    GAMEOBJECT_TYPE_DOOR                        = 0,
    GAMEOBJECT_TYPE_BUTTON                      = 1,
    GAMEOBJECT_TYPE_QUESTGIVER                  = 2,
    GAMEOBJECT_TYPE_CHEST                       = 3,
    GAMEOBJECT_TYPE_BINDER                      = 4,
    GAMEOBJECT_TYPE_GENERIC                     = 5,
    GAMEOBJECT_TYPE_TRAP                        = 6,
    GAMEOBJECT_TYPE_CHAIR                       = 7,
    GAMEOBJECT_TYPE_SPELL_FOCUS                 = 8,
    GAMEOBJECT_TYPE_TEXT                        = 9,
    GAMEOBJECT_TYPE_GOOBER                      = 10,
    GAMEOBJECT_TYPE_TRANSPORT                   = 11,
    GAMEOBJECT_TYPE_AREADAMAGE                  = 12,
    GAMEOBJECT_TYPE_CAMERA                      = 13,
    GAMEOBJECT_TYPE_MAP_OBJECT                  = 14,
    GAMEOBJECT_TYPE_MAP_OBJ_TRANSPORT           = 15,
    GAMEOBJECT_TYPE_DUEL_ARBITER                = 16,
    GAMEOBJECT_TYPE_FISHINGNODE                 = 17,
    GAMEOBJECT_TYPE_RITUAL                      = 18,
    GAMEOBJECT_TYPE_MAILBOX                     = 19,
    GAMEOBJECT_TYPE_DO_NOT_USE                  = 20,
    GAMEOBJECT_TYPE_GUARDPOST                   = 21,
    GAMEOBJECT_TYPE_SPELLCASTER                 = 22,
    GAMEOBJECT_TYPE_MEETINGSTONE                = 23,
    GAMEOBJECT_TYPE_FLAGSTAND                   = 24,
    GAMEOBJECT_TYPE_FISHINGHOLE                 = 25,
    GAMEOBJECT_TYPE_FLAGDROP                    = 26,
    GAMEOBJECT_TYPE_MINI_GAME                   = 27,
    GAMEOBJECT_TYPE_DO_NOT_USE_2                = 28,
    GAMEOBJECT_TYPE_CONTROL_ZONE                = 29,
    GAMEOBJECT_TYPE_AURA_GENERATOR              = 30,
    GAMEOBJECT_TYPE_DUNGEON_DIFFICULTY          = 31,
    GAMEOBJECT_TYPE_BARBER_CHAIR                = 32,
    GAMEOBJECT_TYPE_DESTRUCTIBLE_BUILDING       = 33,
    GAMEOBJECT_TYPE_GUILD_BANK                  = 34,
    GAMEOBJECT_TYPE_TRAPDOOR                    = 35,
    GAMEOBJECT_TYPE_NEW_FLAG                    = 36,
    GAMEOBJECT_TYPE_NEW_FLAG_DROP               = 37,
    GAMEOBJECT_TYPE_GARRISON_BUILDING           = 38,
    GAMEOBJECT_TYPE_GARRISON_PLOT               = 39,
    GAMEOBJECT_TYPE_CLIENT_CREATURE             = 40,
    GAMEOBJECT_TYPE_CLIENT_ITEM                 = 41,
    GAMEOBJECT_TYPE_CAPTURE_POINT               = 42,
    GAMEOBJECT_TYPE_PHASEABLE_MO                = 43,
    GAMEOBJECT_TYPE_GARRISON_MONUMENT           = 44,
    GAMEOBJECT_TYPE_GARRISON_SHIPMENT           = 45,
    GAMEOBJECT_TYPE_GARRISON_MONUMENT_PLAQUE    = 46,
    GAMEOBJECT_TYPE_ARTIFACT_FORGE              = 47,
    GAMEOBJECT_TYPE_UI_LINK                     = 48,
    GAMEOBJECT_TYPE_KEYSTONE_RECEPTACLE         = 49,
    GAMEOBJECT_TYPE_GATHERING_NODE              = 50,
    GAMEOBJECT_TYPE_CHALLENGE_MODE_REWARD       = 51,

    MAX_GAMEOBJECT_TYPE
};

const auto MAX_GAMEOBJECT_DATA = 33;             // Max number of uint32 vars in gameobject_template data field

enum GameObjectFlags
{
    GO_FLAG_IN_USE                                  = 0x00000001, // disables interaction while animated
    GO_FLAG_LOCKED                                  = 0x00000002, // require key, spell, event, etc to be opened. Makes "Locked" appear in tooltip
    GO_FLAG_INTERACT_COND                           = 0x00000004, // cannot interact (condition to interact)
    GO_FLAG_TRANSPORT                               = 0x00000008, // any kind of transport? Object can transport (elevator, boat, car)
    GO_FLAG_NOT_SELECTABLE                          = 0x00000010, // not selectable even in GM mode
    GO_FLAG_NODESPAWN                               = 0x00000020, // never despawn, typically for doors, they just change state
    GO_FLAG_AI_OBSTACLE                             = 0x00000040,                   // makes the client register the object in something called AIObstacleMgr, unknown what it does
    GO_FLAG_FREEZE_ANIMATION                        = 0x00000080,
    GO_FLAG_DAMAGED                                 = 0x00000200,
    GO_FLAG_DESTROYED                               = 0x00000400,
    GO_FLAG_UNK11                                   = 0x00000800,
    GO_FLAG_UNK12                                   = 0x00001000,
    GO_FLAG_UNK13                                   = 0x00002000,
    GO_FLAG_UNK14                                   = 0x00004000,
    GO_FLAG_LUMBER                                  = 0x00008000,
    GO_FLAG_PERSONAL_USE                            = 0x00040000, // todo: more research. On first look - personal visibility & usibility (only one time at all)
    GO_FLAG_INTERACT_DISTANCE_USES_TEMPLATE_MODEL   = 0x00080000, // client checks interaction distance from model sent in SMSG_QUERY_GAMEOBJECT_RESPONSE instead of GAMEOBJECT_DISPLAYID
    GO_FLAG_MAP_OBJECT                              = 0x00100000, // pre-7.0 model loading used to be controlled by file extension (wmo vs m2)
    GO_FLAG_UNK21                                   = 0x00200000,
    GO_FLAG_UNK22                                   = 0x00400000,
};

enum GameObjectDynamicLowFlags
{
    GO_DYNFLAG_LO_HIDE_MODEL        = 0x002,                 // Object model is not shown with this flag
    GO_DYNFLAG_LO_ACTIVATE          = 0x004,                 // enables interaction with GO
    GO_DYNFLAG_LO_ANIMATE           = 0x008,                 // possibly more distinct animation of GO
    GO_DYNFLAG_LO_NO_INTERACT       = 0x010,                 // appears to disable interaction (not fully verified)
    GO_DYNFLAG_LO_SPARKLE           = 0x020,                 // makes GO sparkle
    GO_DYNFLAG_LO_STOPPED           = 0x040,                 // Transport is stopped
    GO_DYNFLAG_LO_CHALLENGE_UNLOCK  = 0x400,                 // Challenge unlock go
    GO_DYNFLAG_LO_CHALLENGE_ERROR   = 0x800,                 // Challenge open error
};

enum GOState
{
    GO_STATE_ACTIVE             = 0x00,                     // show in world as used and not reset (closed door open)
    GO_STATE_READY              = 0x01,                     // show in world as ready (closed door close)
    GO_STATE_ACTIVE_ALTERNATIVE = 0x02,                     // show in world as used in alt way and not reset (closed door open by cannon fire)
    GO_STATE_TRANSPORT_ACTIVE   = 0x18,
    GO_STATE_TRANSPORT_STOPPED  = 0x19
};

#define MAX_GO_STATE              3
#define MAX_GO_STATE_TRANSPORT_STOP_FRAMES 9

enum GameObjectDestructibleState
{
    GO_DESTRUCTIBLE_INTACT      = 0,
    GO_DESTRUCTIBLE_DAMAGED     = 1,
    GO_DESTRUCTIBLE_DESTROYED   = 2,
    GO_DESTRUCTIBLE_REBUILDING  = 3,
};

enum GameObjectReSpawnType
{
    GO_TYPE_NORESPAWN      = 0,
    GO_TYPE_RESPAWN        = 1,
    GO_TYPE_DONTSPAWN      = 2
};

// EmotesText.dbc
enum TextEmotes
{
    TEXT_EMOTE_AGREE                = 1,
    TEXT_EMOTE_AMAZE                = 2,
    TEXT_EMOTE_ANGRY                = 3,
    TEXT_EMOTE_APOLOGIZE            = 4,
    TEXT_EMOTE_APPLAUD              = 5,
    TEXT_EMOTE_BASHFUL              = 6,
    TEXT_EMOTE_BECKON               = 7,
    TEXT_EMOTE_BEG                  = 8,
    TEXT_EMOTE_BITE                 = 9,
    TEXT_EMOTE_BLEED                = 10,
    TEXT_EMOTE_BLINK                = 11,
    TEXT_EMOTE_BLUSH                = 12,
    TEXT_EMOTE_BONK                 = 13,
    TEXT_EMOTE_BORED                = 14,
    TEXT_EMOTE_BOUNCE               = 15,
    TEXT_EMOTE_BRB                  = 16,
    TEXT_EMOTE_BOW                  = 17,
    TEXT_EMOTE_BURP                 = 18,
    TEXT_EMOTE_BYE                  = 19,
    TEXT_EMOTE_CACKLE               = 20,
    TEXT_EMOTE_CHEER                = 21,
    TEXT_EMOTE_CHICKEN              = 22,
    TEXT_EMOTE_CHUCKLE              = 23,
    TEXT_EMOTE_CLAP                 = 24,
    TEXT_EMOTE_CONFUSED             = 25,
    TEXT_EMOTE_CONGRATULATE         = 26,
    TEXT_EMOTE_COUGH                = 27,
    TEXT_EMOTE_COWER                = 28,
    TEXT_EMOTE_CRACK                = 29,
    TEXT_EMOTE_CRINGE               = 30,
    TEXT_EMOTE_CRY                  = 31,
    TEXT_EMOTE_CURIOUS              = 32,
    TEXT_EMOTE_CURTSEY              = 33,
    TEXT_EMOTE_DANCE                = 34,
    TEXT_EMOTE_DRINK                = 35,
    TEXT_EMOTE_DROOL                = 36,
    TEXT_EMOTE_EAT                  = 37,
    TEXT_EMOTE_EYE                  = 38,
    TEXT_EMOTE_FART                 = 39,
    TEXT_EMOTE_FIDGET               = 40,
    TEXT_EMOTE_FLEX                 = 41,
    TEXT_EMOTE_FROWN                = 42,
    TEXT_EMOTE_GASP                 = 43,
    TEXT_EMOTE_GAZE                 = 44,
    TEXT_EMOTE_GIGGLE               = 45,
    TEXT_EMOTE_GLARE                = 46,
    TEXT_EMOTE_GLOAT                = 47,
    TEXT_EMOTE_GREET                = 48,
    TEXT_EMOTE_GRIN                 = 49,
    TEXT_EMOTE_GROAN                = 50,
    TEXT_EMOTE_GROVEL               = 51,
    TEXT_EMOTE_GUFFAW               = 52,
    TEXT_EMOTE_HAIL                 = 53,
    TEXT_EMOTE_HAPPY                = 54,
    TEXT_EMOTE_HELLO                = 55,
    TEXT_EMOTE_HUG                  = 56,
    TEXT_EMOTE_HUNGRY               = 57,
    TEXT_EMOTE_KISS                 = 58,
    TEXT_EMOTE_KNEEL                = 59,
    TEXT_EMOTE_LAUGH                = 60,
    TEXT_EMOTE_LAYDOWN              = 61,
    TEXT_EMOTE_MESSAGE              = 62,
    TEXT_EMOTE_MOAN                 = 63,
    TEXT_EMOTE_MOON                 = 64,
    TEXT_EMOTE_MOURN                = 65,
    TEXT_EMOTE_NO                   = 66,
    TEXT_EMOTE_NOD                  = 67,
    TEXT_EMOTE_NOSEPICK             = 68,
    TEXT_EMOTE_PANIC                = 69,
    TEXT_EMOTE_PEER                 = 70,
    TEXT_EMOTE_PLEAD                = 71,
    TEXT_EMOTE_POINT                = 72,
    TEXT_EMOTE_POKE                 = 73,
    TEXT_EMOTE_PRAY                 = 74,
    TEXT_EMOTE_ROAR                 = 75,
    TEXT_EMOTE_ROFL                 = 76,
    TEXT_EMOTE_RUDE                 = 77,
    TEXT_EMOTE_SALUTE               = 78,
    TEXT_EMOTE_SCRATCH              = 79,
    TEXT_EMOTE_SEXY                 = 80,
    TEXT_EMOTE_SHAKE                = 81,
    TEXT_EMOTE_SHOUT                = 82,
    TEXT_EMOTE_SHRUG                = 83,
    TEXT_EMOTE_SHY                  = 84,
    TEXT_EMOTE_SIGH                 = 85,
    TEXT_EMOTE_SIT                  = 86,
    TEXT_EMOTE_SLEEP                = 87,
    TEXT_EMOTE_SNARL                = 88,
    TEXT_EMOTE_SPIT                 = 89,
    TEXT_EMOTE_STARE                = 90,
    TEXT_EMOTE_SURPRISED            = 91,
    TEXT_EMOTE_SURRENDER            = 92,
    TEXT_EMOTE_TALK                 = 93,
    TEXT_EMOTE_TALKEX               = 94,
    TEXT_EMOTE_TALKQ                = 95,
    TEXT_EMOTE_TAP                  = 96,
    TEXT_EMOTE_THANK                = 97,
    TEXT_EMOTE_THREATEN             = 98,
    TEXT_EMOTE_TIRED                = 99,
    TEXT_EMOTE_VICTORY              = 100,
    TEXT_EMOTE_WAVE                 = 101,
    TEXT_EMOTE_WELCOME              = 102,
    TEXT_EMOTE_WHINE                = 103,
    TEXT_EMOTE_WHISTLE              = 104,
    TEXT_EMOTE_WORK                 = 105,
    TEXT_EMOTE_YAWN                 = 106,
    TEXT_EMOTE_BOGGLE               = 107,
    TEXT_EMOTE_CALM                 = 108,
    TEXT_EMOTE_COLD                 = 109,
    TEXT_EMOTE_COMFORT              = 110,
    TEXT_EMOTE_CUDDLE               = 111,
    TEXT_EMOTE_DUCK                 = 112,
    TEXT_EMOTE_INSULT               = 113,
    TEXT_EMOTE_INTRODUCE            = 114,
    TEXT_EMOTE_JK                   = 115,
    TEXT_EMOTE_LICK                 = 116,
    TEXT_EMOTE_LISTEN               = 117,
    TEXT_EMOTE_LOST                 = 118,
    TEXT_EMOTE_MOCK                 = 119,
    TEXT_EMOTE_PONDER               = 120,
    TEXT_EMOTE_POUNCE               = 121,
    TEXT_EMOTE_PRAISE               = 122,
    TEXT_EMOTE_PURR                 = 123,
    TEXT_EMOTE_PUZZLE               = 124,
    TEXT_EMOTE_RAISE                = 125,
    TEXT_EMOTE_READY                = 126,
    TEXT_EMOTE_SHIMMY               = 127,
    TEXT_EMOTE_SHIVER               = 128,
    TEXT_EMOTE_SHOO                 = 129,
    TEXT_EMOTE_SLAP                 = 130,
    TEXT_EMOTE_SMIRK                = 131,
    TEXT_EMOTE_SNIFF                = 132,
    TEXT_EMOTE_SNUB                 = 133,
    TEXT_EMOTE_SOOTHE               = 134,
    TEXT_EMOTE_STINK                = 135,
    TEXT_EMOTE_TAUNT                = 136,
    TEXT_EMOTE_TEASE                = 137,
    TEXT_EMOTE_THIRSTY              = 138,
    TEXT_EMOTE_VETO                 = 139,
    TEXT_EMOTE_SNICKER              = 140,
    TEXT_EMOTE_STAND                = 141,
    TEXT_EMOTE_TICKLE               = 142,
    TEXT_EMOTE_VIOLIN               = 143,
    TEXT_EMOTE_SMILE                = 163,
    TEXT_EMOTE_RASP                 = 183,
    TEXT_EMOTE_PITY                 = 203,
    TEXT_EMOTE_GROWL                = 204,
    TEXT_EMOTE_BARK                 = 205,
    TEXT_EMOTE_SCARED               = 223,
    TEXT_EMOTE_FLOP                 = 224,
    TEXT_EMOTE_LOVE                 = 225,
    TEXT_EMOTE_MOO                  = 226,
    TEXT_EMOTE_COMMEND              = 243,
    TEXT_EMOTE_TRAIN                = 264,
    TEXT_EMOTE_HELPME               = 303,
    TEXT_EMOTE_INCOMING             = 304,
    TEXT_EMOTE_CHARGE               = 305,
    TEXT_EMOTE_FLEE                 = 306,
    TEXT_EMOTE_ATTACKMYTARGET       = 307,
    TEXT_EMOTE_OOM                  = 323,
    TEXT_EMOTE_FOLLOW               = 324,
    TEXT_EMOTE_WAIT                 = 325,
    TEXT_EMOTE_HEALME               = 326,
    TEXT_EMOTE_OPENFIRE             = 327,
    TEXT_EMOTE_FLIRT                = 328,
    TEXT_EMOTE_JOKE                 = 329,
    TEXT_EMOTE_GOLFCLAP             = 343,
    TEXT_EMOTE_WINK                 = 363,
    TEXT_EMOTE_PAT                  = 364,
    TEXT_EMOTE_SERIOUS              = 365,
    TEXT_EMOTE_MOUNT_SPECIAL        = 366,
    TEXT_EMOTE_GOODLUCK             = 367,
    TEXT_EMOTE_BLAME                = 368,
    TEXT_EMOTE_BLANK                = 369,
    TEXT_EMOTE_BRANDISH             = 370,
    TEXT_EMOTE_BREATH               = 371,
    TEXT_EMOTE_DISAGREE             = 372,
    TEXT_EMOTE_DOUBT                = 373,
    TEXT_EMOTE_EMBARRASS            = 374,
    TEXT_EMOTE_ENCOURAGE            = 375,
    TEXT_EMOTE_ENEMY                = 376,
    TEXT_EMOTE_EYEBROW              = 377,
    TEXT_EMOTE_TOAST                = 378,
    TEXT_EMOTE_FAIL                 = 379,
    TEXT_EMOTE_HIGHFIVE             = 380,
    TEXT_EMOTE_ABSENT               = 381,
    TEXT_EMOTE_ARM                  = 382,
    TEXT_EMOTE_AWE                  = 383,
    TEXT_EMOTE_BACKPACK             = 384,
    TEXT_EMOTE_BADFEELING           = 385,
    TEXT_EMOTE_CHALLENGE            = 386,
    TEXT_EMOTE_CHUG                 = 387,
    TEXT_EMOTE_DING                 = 389,
    TEXT_EMOTE_FACEPALM             = 390,
    TEXT_EMOTE_FAINT                = 391,
    TEXT_EMOTE_GO                   = 392,
    TEXT_EMOTE_GOING                = 393,
    TEXT_EMOTE_GLOWER               = 394,
    TEXT_EMOTE_HEADACHE             = 395,
    TEXT_EMOTE_HICCUP               = 396,
    TEXT_EMOTE_HISS                 = 398,
    TEXT_EMOTE_HOLDHAND             = 399,
    TEXT_EMOTE_HURRY                = 401,
    TEXT_EMOTE_IDEA                 = 402,
    TEXT_EMOTE_JEALOUS              = 403,
    TEXT_EMOTE_LUCK                 = 404,
    TEXT_EMOTE_MAP                  = 405,
    TEXT_EMOTE_MERCY                = 406,
    TEXT_EMOTE_MUTTER               = 407,
    TEXT_EMOTE_NERVOUS              = 408,
    TEXT_EMOTE_OFFER                = 409,
    TEXT_EMOTE_PET                  = 410,
    TEXT_EMOTE_PINCH                = 411,
    TEXT_EMOTE_PROUD                = 413,
    TEXT_EMOTE_PROMISE              = 414,
    TEXT_EMOTE_PULSE                = 415,
    TEXT_EMOTE_PUNCH                = 416,
    TEXT_EMOTE_POUT                 = 417,
    TEXT_EMOTE_REGRET               = 418,
    TEXT_EMOTE_REVENGE              = 420,
    TEXT_EMOTE_ROLLEYES             = 421,
    TEXT_EMOTE_RUFFLE               = 422,
    TEXT_EMOTE_SAD                  = 423,
    TEXT_EMOTE_SCOFF                = 424,
    TEXT_EMOTE_SCOLD                = 425,
    TEXT_EMOTE_SCOWL                = 426,
    TEXT_EMOTE_SEARCH               = 427,
    TEXT_EMOTE_SHAKEFIST            = 428,
    TEXT_EMOTE_SHIFTY               = 429,
    TEXT_EMOTE_SHUDDER              = 430,
    TEXT_EMOTE_SIGNAL               = 431,
    TEXT_EMOTE_SILENCE              = 432,
    TEXT_EMOTE_SING                 = 433,
    TEXT_EMOTE_SMACK                = 434,
    TEXT_EMOTE_SNEAK                = 435,
    TEXT_EMOTE_SNEEZE               = 436,
    TEXT_EMOTE_SNORT                = 437,
    TEXT_EMOTE_SQUEAL               = 438,
    TEXT_EMOTE_STOPATTACK           = 439,
    TEXT_EMOTE_SUSPICIOUS           = 440,
    TEXT_EMOTE_THINK                = 441,
    TEXT_EMOTE_TRUCE                = 442,
    TEXT_EMOTE_TWIDDLE              = 443,
    TEXT_EMOTE_WARN                 = 444,
    TEXT_EMOTE_SNAP                 = 445,
    TEXT_EMOTE_CHARM                = 446,
    TEXT_EMOTE_COVEREARS            = 447,
    TEXT_EMOTE_CROSSARMS            = 448,
    TEXT_EMOTE_LOOK                 = 449,
    TEXT_EMOTE_OBJECT               = 450,
    TEXT_EMOTE_SWEAT                = 451,
    TEXT_EMOTE_YW                   = 453,
    TEXT_EMOTE_READ                 = 456,
    TEXT_EMOTE_BOOT                 = 506
};

// Emotes.dbc (6.0.2.18988)
enum Emote
{
    EMOTE_ONESHOT_NONE                           = 0,
    EMOTE_ONESHOT_TALK                           = 1,
    EMOTE_ONESHOT_BOW                            = 2,
    EMOTE_ONESHOT_WAVE                           = 3,
    EMOTE_ONESHOT_CHEER                          = 4,
    EMOTE_ONESHOT_EXCLAMATION                    = 5,
    EMOTE_ONESHOT_QUESTION                       = 6,
    EMOTE_ONESHOT_EAT                            = 7,
    EMOTE_STATE_DANCE                            = 10,
    EMOTE_ONESHOT_LAUGH                          = 11,
    EMOTE_STATE_SLEEP                            = 12,
    EMOTE_STATE_SIT                              = 13,
    EMOTE_ONESHOT_RUDE                           = 14,
    EMOTE_ONESHOT_ROAR                           = 15,
    EMOTE_ONESHOT_KNEEL                          = 16,
    EMOTE_ONESHOT_KISS                           = 17,
    EMOTE_ONESHOT_CRY                            = 18,
    EMOTE_ONESHOT_CHICKEN                        = 19,
    EMOTE_ONESHOT_BEG                            = 20,
    EMOTE_ONESHOT_APPLAUD                        = 21,
    EMOTE_ONESHOT_SHOUT                          = 22,
    EMOTE_ONESHOT_FLEX                           = 23,
    EMOTE_ONESHOT_SHY                            = 24,
    EMOTE_ONESHOT_POINT                          = 25,
    EMOTE_STATE_STAND                            = 26,
    EMOTE_STATE_READY_UNARMED                    = 27,
    EMOTE_STATE_WORK_SHEATHED                    = 28,
    EMOTE_STATE_POINT                            = 29,
    EMOTE_STATE_NONE                             = 30,
    EMOTE_ONESHOT_WOUND                          = 33,
    EMOTE_ONESHOT_WOUND_CRITICAL                 = 34,
    EMOTE_ONESHOT_ATTACK_UNARMED                 = 35,
    EMOTE_ONESHOT_ATTACK1H                       = 36,
    EMOTE_ONESHOT_ATTACK2HTIGHT                  = 37,
    EMOTE_ONESHOT_ATTACK2H_LOOSE                 = 38,
    EMOTE_ONESHOT_PARRY_UNARMED                  = 39,
    EMOTE_ONESHOT_PARRY_SHIELD                   = 43,
    EMOTE_ONESHOT_READY_UNARMED                  = 44,
    EMOTE_ONESHOT_READY1H                        = 45,
    EMOTE_ONESHOT_READY_BOW                      = 48,
    EMOTE_ONESHOT_SPELL_PRECAST                  = 50,
    EMOTE_ONESHOT_SPELL_CAST                     = 51,
    EMOTE_ONESHOT_BATTLE_ROAR                    = 53,
    EMOTE_ONESHOT_SPECIALATTACK1H                = 54,
    EMOTE_ONESHOT_KICK                           = 60,
    EMOTE_ONESHOT_ATTACK_THROWN                  = 61,
    EMOTE_STATE_STUN                             = 64,
    EMOTE_STATE_DEAD                             = 65,
    EMOTE_ONESHOT_SALUTE                         = 66,
    EMOTE_STATE_KNEEL                            = 68,
    EMOTE_STATE_USE_STANDING                     = 69,
    EMOTE_ONESHOT_WAVE_NO_SHEATHE                = 70,
    EMOTE_ONESHOT_CHEER_NO_SHEATHE               = 71,
    EMOTE_ONESHOT_EAT_NO_SHEATHE                 = 92,
    EMOTE_STATE_STUN_NO_SHEATHE                  = 93,
    EMOTE_ONESHOT_DANCE                          = 94,
    EMOTE_ONESHOT_SALUTE_NO_SHEATH               = 113,
    EMOTE_STATE_USE_STANDING_NO_SHEATHE          = 133,
    EMOTE_ONESHOT_LAUGH_NO_SHEATHE               = 153,
    EMOTE_STATE_WORK                             = 173,
    EMOTE_STATE_SPELL_PRECAST                    = 193,
    EMOTE_ONESHOT_READY_RIFLE                    = 213,
    EMOTE_STATE_READY_RIFLE                      = 214,
    EMOTE_STATE_WORK_MINING                      = 233,
    EMOTE_STATE_WORK_CHOPWOOD                    = 234,
    EMOTE_STATE_APPLAUD                          = 253,
    EMOTE_ONESHOT_LIFTOFF                        = 254,
    EMOTE_ONESHOT_YES                            = 273,
    EMOTE_ONESHOT_NO                             = 274,
    EMOTE_ONESHOT_TRAIN                          = 275,
    EMOTE_ONESHOT_LAND                           = 293,
    EMOTE_STATE_AT_EASE                          = 313,
    EMOTE_STATE_READY1H                          = 333,
    EMOTE_STATE_SPELL_KNEEL_START                = 353,
    EMOTE_STATE_SUBMERGED                        = 373,
    EMOTE_ONESHOT_SUBMERGE                       = 374,
    EMOTE_STATE_READY2H                          = 375,
    EMOTE_STATE_READY_BOW                        = 376,
    EMOTE_ONESHOT_MOUNT_SPECIAL                  = 377,
    EMOTE_STATE_TALK                             = 378,
    EMOTE_STATE_FISHING                          = 379,
    EMOTE_ONESHOT_FISHING                        = 380,
    EMOTE_ONESHOT_LOOT                           = 381,
    EMOTE_STATE_WHIRLWIND                        = 382,
    EMOTE_STATE_DROWNED                          = 383,
    EMOTE_STATE_HOLD_BOW                         = 384,
    EMOTE_STATE_HOLD_RIFLE                       = 385,
    EMOTE_STATE_HOLD_THROWN                      = 386,
    EMOTE_ONESHOT_DROWN                          = 387,
    EMOTE_ONESHOT_STOMP                          = 388,
    EMOTE_ONESHOT_ATTACK_OFF                     = 389,
    EMOTE_ONESHOT_ATTACK_OFF_PIERCE              = 390,
    EMOTE_STATE_ROAR                             = 391,
    EMOTE_STATE_LAUGH                            = 392,
    EMOTE_ONESHOT_CREATURE_SPECIAL               = 393,
    EMOTE_ONESHOT_JUMPLANDRUN                    = 394,
    EMOTE_ONESHOT_JUMPEND                        = 395,
    EMOTE_ONESHOT_TALK_NO_SHEATHE                = 396,
    EMOTE_ONESHOT_POINT_NO_SHEATHE               = 397,
    EMOTE_STATE_CANNIBALIZE                      = 398,
    EMOTE_ONESHOT_JUMPSTART                      = 399,
    EMOTE_STATE_DANCESPECIAL                     = 400,
    EMOTE_ONESHOT_DANCESPECIAL                   = 401,
    EMOTE_ONESHOT_CUSTOM_SPELL_01                = 402,
    EMOTE_ONESHOT_CUSTOM_SPELL_02                = 403,
    EMOTE_ONESHOT_CUSTOM_SPELL_03                = 404,
    EMOTE_ONESHOT_CUSTOM_SPELL_04                = 405,
    EMOTE_ONESHOT_CUSTOM_SPELL_05                = 406,
    EMOTE_ONESHOT_CUSTOM_SPELL_06                = 407,
    EMOTE_ONESHOT_CUSTOM_SPELL_07                = 408,
    EMOTE_ONESHOT_CUSTOM_SPELL_08                = 409,
    EMOTE_ONESHOT_CUSTOM_SPELL_09                = 410,
    EMOTE_ONESHOT_CUSTOM_SPELL_10                = 411,
    EMOTE_STATE_EXCLAIM                          = 412,
    EMOTE_STATE_DANCE_CUSTOM                     = 413,
    EMOTE_STATE_SIT_CHAIR_MED                    = 415,
    EMOTE_STATE_CUSTOM_SPELL_01                  = 416,
    EMOTE_STATE_CUSTOM_SPELL_02                  = 417,
    EMOTE_STATE_EAT                              = 418,
    EMOTE_STATE_CUSTOM_SPELL_04                  = 419,
    EMOTE_STATE_CUSTOM_SPELL_03                  = 420,
    EMOTE_STATE_CUSTOM_SPELL_05                  = 421,
    EMOTE_STATE_SPELLEFFECT_HOLD                 = 422,
    EMOTE_STATE_EAT_NO_SHEATHE                   = 423,
    EMOTE_STATE_MOUNT                            = 424,
    EMOTE_STATE_READY2HL                         = 425,
    EMOTE_STATE_SIT_CHAIR_HIGH                   = 426,
    EMOTE_STATE_FALL                             = 427,
    EMOTE_STATE_LOOT                             = 428,
    EMOTE_STATE_SUBMERGED_NEW                    = 429,
    EMOTE_ONESHOT_COWER                          = 430,
    EMOTE_STATE_COWER                            = 431,
    EMOTE_ONESHOT_USE_STANDING                   = 432,
    EMOTE_STATE_STEALTH_STAND                    = 433,
    EMOTE_ONESHOT_OMNICAST_GHOUL                 = 434,
    EMOTE_ONESHOT_ATTACK_BOW                     = 435,
    EMOTE_ONESHOT_ATTACK_RIFLE                   = 436,
    EMOTE_STATE_SWIM_IDLE                        = 437,
    EMOTE_STATE_ATTACK_UNARMED                   = 438,
    EMOTE_ONESHOT_SPELL_CAST_W_SOUND             = 439,
    EMOTE_ONESHOT_DODGE                          = 440,
    EMOTE_ONESHOT_PARRY1H                        = 441,
    EMOTE_ONESHOT_PARRY2H                        = 442,
    EMOTE_ONESHOT_PARRY2HL                       = 443,
    EMOTE_STATE_FLYFALL                          = 444,
    EMOTE_ONESHOT_FLYDEATH                       = 445,
    EMOTE_STATE_FLY_FALL                         = 446,
    EMOTE_ONESHOT_FLY_SIT_GROUND_DOWN            = 447,
    EMOTE_ONESHOT_FLY_SIT_GROUND_UP              = 448,
    EMOTE_ONESHOT_EMERGE                         = 449,
    EMOTE_ONESHOT_DRAGON_SPIT                    = 450,
    EMOTE_STATE_SPECIAL_UNARMED                  = 451,
    EMOTE_ONESHOT_FLYGRAB                        = 452,
    EMOTE_STATE_FLYGRABCLOSED                    = 453,
    EMOTE_ONESHOT_FLYGRABTHROWN                  = 454,
    EMOTE_STATE_FLY_SIT_GROUND                   = 455,
    EMOTE_STATE_WALK_BACKWARDS                   = 456,
    EMOTE_ONESHOT_FLYTALK                        = 457,
    EMOTE_ONESHOT_FLYATTACK1H                    = 458,
    EMOTE_STATE_CUSTOM_SPELL_08                  = 459,
    EMOTE_ONESHOT_FLY_DRAGON_SPIT                = 460,
    EMOTE_STATE_SIT_CHAIR_LOW                    = 461,
    EMOTE_ONESHOT_STUN                           = 462,
    EMOTE_ONESHOT_SPELL_CAST_OMNI                = 463,
    EMOTE_STATE_READY_THROWN                     = 465,
    EMOTE_ONESHOT_WORK_CHOPWOOD                  = 466,
    EMOTE_ONESHOT_WORK_MINING                    = 467,
    EMOTE_STATE_SPELL_CHANNEL_OMNI               = 468,
    EMOTE_STATE_SPELL_CHANNEL_DIRECTED           = 469,
    EMOTE_STAND_STATE_NONE                       = 470,
    EMOTE_STATE_READYJOUST                       = 471,
    EMOTE_STATE_STRANGULATE                      = 472,
    EMOTE_STATE_STRANGULATE2                     = 473,
    EMOTE_STATE_READY_SPELL_OMNI                 = 474,
    EMOTE_STATE_HOLD_JOUST                       = 475,
    EMOTE_ONESHOT_CRY_JAINA                      = 476,
    EMOTE_ONESHOT_SPECIAL_UNARMED                = 477,
    EMOTE_STATE_DANCE_NOSHEATHE                  = 478,
    EMOTE_ONESHOT_SNIFF                          = 479,
    EMOTE_ONESHOT_DRAGONSTOMP                    = 480,
    EMOTE_ONESHOT_KNOCKDOWN                      = 482,
    EMOTE_STATE_READ                             = 483,
    EMOTE_ONESHOT_FLYEMOTETALK                   = 485,
    EMOTE_STATE_READ_ALLOWMOVEMENT               = 492,
    EMOTE_STATE_CUSTOM_SPELL_06                  = 498,
    EMOTE_STATE_CUSTOM_SPELL_07                  = 499,
    EMOTE_STATE_CUSTOM_SPELL_08_2                = 500,
    EMOTE_STATE_CUSTOM_SPELL_09                  = 501,
    EMOTE_STATE_CUSTOM_SPELL_10                  = 502,
    EMOTE_STATE_READY1H_ALLOW_MOVEMENT           = 505,
    EMOTE_STATE_READY2H_ALLOW_MOVEMENT           = 506,
    EMOTE_ONESHOT_MONKOFFENSE_ATTACKUNARMED      = 507,
    EMOTE_ONESHOT_MONKOFFENSE_SPECIALUNARMED     = 508,
    EMOTE_ONESHOT_MONKOFFENSE_PARRYUNARMED       = 509,
    EMOTE_STATE_MONKOFFENSE_READYUNARMED         = 510,
    EMOTE_ONESHOT_PALMSTRIKE                     = 511,
    EMOTE_STATE_CRANE                            = 512,
    EMOTE_ONESHOT_OPEN                           = 517,
    EMOTE_STATE_READ_CHRISTMAS                   = 518,
    EMOTE_ONESHOT_FLYATTACK2HL                   = 526,
    EMOTE_ONESHOT_FLYATTACKTHROWN                = 527,
    EMOTE_STATE_FLYREADYSPELLDIRECTED            = 528,
    EMOTE_STATE_FLY_READY_1H                     = 531,
    EMOTE_STATE_MEDITATE                         = 533,
    EMOTE_STATE_FLY_READY_2HL                    = 534,
    EMOTE_ONESHOT_TOGROUND                       = 535,
    EMOTE_ONESHOT_TOFLY                          = 536,
    EMOTE_STATE_ATTACKTHROWN                     = 537,
    EMOTE_STATE_SPELL_CHANNEL_DIRECTED_NOSOUND   = 538,
    EMOTE_ONESHOT_WORK                           = 539,
    EMOTE_STATE_READYUNARMED_NOSOUND             = 540,
    EMOTE_ONESHOT_MONKOFFENSE_ATTACKUNARMEDOFF   = 543,
    EMOTE_RECLINED_MOUNT_PASSENGER               = 546,
    EMOTE_ONESHOT_QUESTION_2                     = 547,
    EMOTE_ONESHOT_SPELL_CHANNEL_DIRECTED_NOSOUND = 549,
    EMOTE_STATE_KNEEL_2                          = 550,
    EMOTE_ONESHOT_FLYATTACKUNARMED               = 551,
    EMOTE_ONESHOT_FLYCOMBATWOUND                 = 552,
    EMOTE_ONESHOT_MOUNTSELFSPECIAL               = 553,
    EMOTE_ONESHOT_ATTACKUNARMED_NOSOUND          = 554,
    EMOTE_STATE_WOUNDCRITICAL_DOESNT_WORK        = 555,
    EMOTE_ONESHOT_ATTACK1H_NO_SOUND              = 556,
    EMOTE_STATE_MOUNT_SELF_IDLE                  = 557,
    EMOTE_ONESHOT_WALK                           = 558,
    EMOTE_STATE_OPENED                           = 559,
    EMOTE_STATE_CUSTOMSPELL03                    = 564,
    EMOTE_ONESHOT_BREATHOFFIRE                   = 565,
    EMOTE_STATE_ATTACK1H                         = 567,
    EMOTE_STATE_WORK_CHOPWOOD_2                  = 568,
    EMOTE_STATE_USESTANDING_LOOP                 = 569,
    EMOTE_STATE_USESTANDING                      = 572,
    EMOTE_ONESHOT_SHEATH                         = 573,
    EMOTE_ONESHOT_LAUGH_NO_SOUND                 = 574,
    EMOTE_RECLINED_MOUNT                         = 575,
    EMOTE_ONESHOT_ATTACK1H_2                     = 577,
    EMOTE_STATE_CRY_NOSOUND                      = 578,
    EMOTE_ONESHOT_CRY_NOSOUND                    = 579,
    EMOTE_ONESHOT_COMBATCRITICAL                 = 584,
    EMOTE_STATE_TRAIN                            = 585,
    EMOTE_STATE_WORK_CHOPWOOD_LUMBER_AXE         = 586,
    EMOTE_ONESHOT_SPECIALATTACK2H                = 587,
    EMOTE_STATE_READ_AND_TALK                    = 588,
    EMOTE_ONESHOT_STAND_VAR1                     = 589,
    EMOTE_REXXAR_STRANGLES_GOBLIN                = 590,
    EMOTE_ONESHOT_STAND_VAR2                     = 591,
    EMOTE_ONESHOT_DEATH                          = 592,
    EMOTE_STATE_TALKONCE                         = 595,
    EMOTE_STATE_ATTACK2H                         = 596,
    EMOTE_STATE_SIT_GROUND                       = 598,
    EMOTE_STATE_WORK_CHOPWOOD3                   = 599,
    EMOTE_STATE_CUSTOMSPELL01                    = 601,
    EMOTE_ONESHOT_COMBATWOUND                    = 602,
    EMOTE_ONESHOT_TALK_EXCLAMATION               = 603,
    EMOTE_ONESHOT_QUESTION2                      = 604,
    EMOTE_STATE_CRY                              = 605,
    EMOTE_STATE_USESTANDING_LOOP2                = 606,
    EMOTE_STATE_WORK_SMITH                       = 613,
    EMOTE_STATE_WORK_CHOPWOOD4                   = 614,
    EMOTE_STATE_CUSTOMSPELL02                    = 615,
    EMOTE_STATE_READ_AND_SIT                     = 616,
    EMOTE_STATE_PARRY_UNARMED                    = 619,
    EMOTE_STATE_BLOCK_SHIELD                     = 620,
    EMOTE_STATE_SIT_GROUND_2                     = 621
};

// AnimationData.dbc (6.0.2.18988)
enum Anim
{
    ANIM_STAND                               = 0,
    ANIM_DEATH                               = 1,
    ANIM_SPELL                               = 2,
    ANIM_STOP                                = 3,
    ANIM_WALK                                = 4,
    ANIM_RUN                                 = 5,
    ANIM_DEAD                                = 6,
    ANIM_RISE                                = 7,
    ANIM_STAND_WOUND                         = 8,
    ANIM_COMBAT_WOUND                        = 9,
    ANIM_COMBAT_CRITICAL                     = 10,
    ANIM_SHUFFLE_LEFT                        = 11,
    ANIM_SHUFFLE_RIGHT                       = 12,
    ANIM_WALK_BACKWARDS                      = 13,
    ANIM_STUN                                = 14,
    ANIM_HANDS_CLOSED                        = 15,
    ANIM_ATTACK_UNARMED                      = 16,
    ANIM_ATTACK1H                            = 17,
    ANIM_ATTACK2H                            = 18,
    ANIM_ATTACK2HL                           = 19,
    ANIM_PARRY_UNARMED                       = 20,
    ANIM_PARRY1H                             = 21,
    ANIM_PARRY2H                             = 22,
    ANIM_PARRY2HL                            = 23,
    ANIM_SHIELD_BLOCK                        = 24,
    ANIM_READY_UNARMED                       = 25,
    ANIM_READY1H                             = 26,
    ANIM_READY2H                             = 27,
    ANIM_READY2HL                            = 28,
    ANIM_READY_BOW                           = 29,
    ANIM_DODGE                               = 30,
    ANIM_SPELL_PRECAST                       = 31,
    ANIM_SPELL_CAST                          = 32,
    ANIM_SPELL_CAST_AREA                     = 33,
    ANIM_NPC_WELCOME                         = 34,
    ANIM_NPC_GOODBYE                         = 35,
    ANIM_BLOCK                               = 36,
    ANIM_JUMP_START                          = 37,
    ANIM_JUMP                                = 38,
    ANIM_JUMP_END                            = 39,
    ANIM_FALL                                = 40,
    ANIM_SWIM_IDLE                           = 41,
    ANIM_SWIM                                = 42,
    ANIM_SWIM_LEFT                           = 43,
    ANIM_SWIM_RIGHT                          = 44,
    ANIM_SWIM_BACKWARDS                      = 45,
    ANIM_ATTACK_BOW                          = 46,
    ANIM_FIRE_BOW                            = 47,
    ANIM_READY_RIFLE                         = 48,
    ANIM_ATTACK_RIFLE                        = 49,
    ANIM_LOOT                                = 50,
    ANIM_READY_SPELL_DIRECTED                = 51,
    ANIM_READY_SPELL_OMNI                    = 52,
    ANIM_SPELL_CAST_DIRECTED                 = 53,
    ANIM_SPELL_CAST_OMNI                     = 54,
    ANIM_BATTLE_ROAR                         = 55,
    ANIM_READY_ABILITY                       = 56,
    ANIM_SPECIAL1H                           = 57,
    ANIM_SPECIAL2H                           = 58,
    ANIM_SHIELD_BASH                         = 59,
    ANIM_EMOTE_TALK                          = 60,
    ANIM_EMOTE_EAT                           = 61,
    ANIM_EMOTE_WORK                          = 62,
    ANIM_EMOTE_USE_STANDING                  = 63,
    ANIM_EMOTE_TALK_EXCLAMATION              = 64,
    ANIM_EMOTE_TALK_QUESTION                 = 65,
    ANIM_EMOTE_BOW                           = 66,
    ANIM_EMOTE_WAVE                          = 67,
    ANIM_EMOTE_CHEER                         = 68,
    ANIM_EMOTE_DANCE                         = 69,
    ANIM_EMOTE_LAUGH                         = 70,
    ANIM_EMOTE_SLEEP                         = 71,
    ANIM_EMOTE_SIT_GROUND                    = 72,
    ANIM_EMOTE_RUDE                          = 73,
    ANIM_EMOTE_ROAR                          = 74,
    ANIM_EMOTE_KNEEL                         = 75,
    ANIM_EMOTE_KISS                          = 76,
    ANIM_EMOTE_CRY                           = 77,
    ANIM_EMOTE_CHICKEN                       = 78,
    ANIM_EMOTE_BEG                           = 79,
    ANIM_EMOTE_APPLAUD                       = 80,
    ANIM_EMOTE_SHOUT                         = 81,
    ANIM_EMOTE_FLEX                          = 82,
    ANIM_EMOTE_SHY                           = 83,
    ANIM_EMOTE_POINT                         = 84,
    ANIM_ATTACK1H_PIERCE                     = 85,
    ANIM_ATTACK2H_LOOSE_PIERCE               = 86,
    ANIM_ATTACK_OFF                          = 87,
    ANIM_ATTACK_OFF_PIERCE                   = 88,
    ANIM_SHEATHE                             = 89,
    ANIM_HIP_SHEATHE                         = 90,
    ANIM_MOUNT                               = 91,
    ANIM_RUN_RIGHT                           = 92,
    ANIM_RUN_LEFT                            = 93,
    ANIM_MOUNT_SPECIAL                       = 94,
    ANIM_KICK                                = 95,
    ANIM_SIT_GROUND_DOWN                     = 96,
    ANIM_SIT_GROUND                          = 97,
    ANIM_SIT_GROUND_UP                       = 98,
    ANIM_SLEEP_DOWN                          = 99,
    ANIM_SLEEP                               = 100,
    ANIM_SLEEP_UP                            = 101,
    ANIM_SIT_CHAIR_LOW                       = 102,
    ANIM_SIT_CHAIR_MED                       = 103,
    ANIM_SIT_CHAIR_HIGH                      = 104,
    ANIM_LOAD_BOW                            = 105,
    ANIM_LOAD_RIFLE                          = 106,
    ANIM_ATTACK_THROWN                       = 107,
    ANIM_READY_THROWN                        = 108,
    ANIM_HOLD_BOW                            = 109,
    ANIM_HOLD_RIFLE                          = 110,
    ANIM_HOLD_THROWN                         = 111,
    ANIM_LOAD_THROWN                         = 112,
    ANIM_EMOTE_SALUTE                        = 113,
    ANIM_KNEEL_START                         = 114,
    ANIM_KNEEL_LOOP                          = 115,
    ANIM_KNEEL_END                           = 116,
    ANIM_ATTACK_UNARMED_OFF                  = 117,
    ANIM_SPECIAL_UNARMED                     = 118,
    ANIM_STEALTH_WALK                        = 119,
    ANIM_STEALTH_STAND                       = 120,
    ANIM_KNOCKDOWN                           = 121,
    ANIM_EATING_LOOP                         = 122,
    ANIM_USE_STANDING_LOOP                   = 123,
    ANIM_CHANNEL_CAST_DIRECTED               = 124,
    ANIM_CHANNEL_CAST_OMNI                   = 125,
    ANIM_WHIRLWIND                           = 126,
    ANIM_BIRTH                               = 127,
    ANIM_USE_STANDING_START                  = 128,
    ANIM_USE_STANDING_END                    = 129,
    ANIM_CREATURE_SPECIAL                    = 130,
    ANIM_DROWN                               = 131,
    ANIM_DROWNED                             = 132,
    ANIM_FISHING_CAST                        = 133,
    ANIM_FISHING_LOOP                        = 134,
    ANIM_FLY                                 = 135,
    ANIM_EMOTE_WORK_NO_SHEATHE               = 136,
    ANIM_EMOTE_STUN_NO_SHEATHE               = 137,
    ANIM_EMOTE_USE_STANDING_NO_SHEATHE       = 138,
    ANIM_SPELL_SLEEP_DOWN                    = 139,
    ANIM_SPELL_KNEEL_START                   = 140,
    ANIM_SPELL_KNEEL_LOOP                    = 141,
    ANIM_SPELL_KNEEL_END                     = 142,
    ANIM_SPRINT                              = 143,
    ANIM_IN_FLIGHT                           = 144,
    ANIM_SPAWN                               = 145,
    ANIM_CLOSE                               = 146,
    ANIM_CLOSED                              = 147,
    ANIM_OPEN                                = 148,
    ANIM_OPENED                              = 149,
    ANIM_DESTROY                             = 150,
    ANIM_DESTROYED                           = 151,
    ANIM_REBUILD                             = 152,
    ANIM_CUSTOM_0                            = 153,
    ANIM_CUSTOM_1                            = 154,
    ANIM_CUSTOM_2                            = 155,
    ANIM_CUSTOM_3                            = 156,
    ANIM_DESPAWN                             = 157,
    ANIM_HOLD                                = 158,
    ANIM_DECAY                               = 159,
    ANIM_BOW_PULL                            = 160,
    ANIM_BOW_RELEASE                         = 161,
    ANIM_SHIP_START                          = 162,
    ANIM_SHIP_MOVING                         = 163,
    ANIM_SHIP_STOP                           = 164,
    ANIM_GROUP_ARROW                         = 165,
    ANIM_ARROW                               = 166,
    ANIM_CORPSE_ARROW                        = 167,
    ANIM_GUIDE_ARROW                         = 168,
    ANIM_SWAY                                = 169,
    ANIM_DRUID_CAT_POUNCE                    = 170,
    ANIM_DRUID_CAT_RIP                       = 171,
    ANIM_DRUID_CAT_RAKE                      = 172,
    ANIM_DRUID_CAT_RAVAGE                    = 173,
    ANIM_DRUID_CAT_CLAW                      = 174,
    ANIM_DRUID_CAT_COWER                     = 175,
    ANIM_DRUID_BEAR_SWIPE                    = 176,
    ANIM_DRUID_BEAR_BITE                     = 177,
    ANIM_DRUID_BEAR_MAUL                     = 178,
    ANIM_DRUID_BEAR_BASH                     = 179,
    ANIM_DRAGON_TAIL                         = 180,
    ANIM_DRAGON_STOMP                        = 181,
    ANIM_DRAGON_SPIT                         = 182,
    ANIM_DRAGON_SPIT_HOVER                   = 183,
    ANIM_DRAGON_SPIT_FLY                     = 184,
    ANIM_EMOTE_YES                           = 185,
    ANIM_EMOTE_NO                            = 186,
    ANIM_JUMP_LAND_RUN                       = 187,
    ANIM_LOOT_HOLD                           = 188,
    ANIM_LOOT_UP                             = 189,
    ANIM_STAND_HIGH                          = 190,
    ANIM_IMPACT                              = 191,
    ANIM_LIFTOFF                             = 192,
    ANIM_HOVER                               = 193,
    ANIM_SUCCUBUS_ENTICE                     = 194,
    ANIM_EMOTE_TRAIN                         = 195,
    ANIM_EMOTE_DEAD                          = 196,
    ANIM_EMOTE_DANCE_ONCE                    = 197,
    ANIM_DEFLECT                             = 198,
    ANIM_EMOTE_EAT_NO_SHEATHE                = 199,
    ANIM_LAND                                = 200,
    ANIM_SUBMERGE                            = 201,
    ANIM_SUBMERGED                           = 202,
    ANIM_CANNIBALIZE                         = 203,
    ANIM_ARROW_BIRTH                         = 204,
    ANIM_GROUP_ARROW_BIRTH                   = 205,
    ANIM_CORPSE_ARROW_BIRTH                  = 206,
    ANIM_GUIDE_ARROW_BIRTH                   = 207,
    ANIM_EMOTE_TALK_NO_SHEATHE               = 208,
    ANIM_EMOTE_POINT_NO_SHEATHE              = 209,
    ANIM_EMOTE_SALUTE_NO_SHEATHE             = 210,
    ANIM_EMOTE_DANCE_SPECIAL                 = 211,
    ANIM_MUTILATE                            = 212,
    ANIM_CUSTOM_SPELL_01                     = 213,
    ANIM_CUSTOM_SPELL_02                     = 214,
    ANIM_CUSTOM_SPELL_03                     = 215,
    ANIM_CUSTOM_SPELL_04                     = 216,
    ANIM_CUSTOM_SPELL_05                     = 217,
    ANIM_CUSTOM_SPELL_06                     = 218,
    ANIM_CUSTOM_SPELL_07                     = 219,
    ANIM_CUSTOM_SPELL_08                     = 220,
    ANIM_CUSTOM_SPELL_09                     = 221,
    ANIM_CUSTOM_SPELL_10                     = 222,
    ANIM_STEALTH_RUN                         = 223,
    ANIM_EMERGE                              = 224,
    ANIM_COWER                               = 225,
    ANIM_GRAB                                = 226,
    ANIM_GRAB_CLOSED                         = 227,
    ANIM_GRAB_THROWN                         = 228,
    ANIM_FLY_STAND                           = 229,
    ANIM_FLY_DEATH                           = 230,
    ANIM_FLY_SPELL                           = 231,
    ANIM_FLY_STOP                            = 232,
    ANIM_FLY_WALK                            = 233,
    ANIM_FLY_RUN                             = 234,
    ANIM_FLY_DEAD                            = 235,
    ANIM_FLY_RISE                            = 236,
    ANIM_FLY_STAND_WOUND                     = 237,
    ANIM_FLY_COMBAT_WOUND                    = 238,
    ANIM_FLY_COMBAT_CRITICAL                 = 239,
    ANIM_FLY_SHUFFLE_LEFT                    = 240,
    ANIM_FLY_SHUFFLE_RIGHT                   = 241,
    ANIM_FLY_WALK_BACKWARDS                  = 242,
    ANIM_FLY_STUN                            = 243,
    ANIM_FLY_HANDS_CLOSED                    = 244,
    ANIM_FLY_ATTACK_UNARMED                  = 245,
    ANIM_FLY_ATTACK1H                        = 246,
    ANIM_FLY_ATTACK2H                        = 247,
    ANIM_FLY_ATTACK2HL                       = 248,
    ANIM_FLY_PARRY_UNARMED                   = 249,
    ANIM_FLY_PARRY1H                         = 250,
    ANIM_FLY_PARRY2H                         = 251,
    ANIM_FLY_PARRY2HL                        = 252,
    ANIM_FLY_SHIELD_BLOCK                    = 253,
    ANIM_FLY_READY_UNARMED                   = 254,
    ANIM_FLY_READY1H                         = 255,
    ANIM_FLY_READY2H                         = 256,
    ANIM_FLY_READY2HL                        = 257,
    ANIM_FLY_READY_BOW                       = 258,
    ANIM_FLY_DODGE                           = 259,
    ANIM_FLY_SPELL_PRECAST                   = 260,
    ANIM_FLY_SPELL_CAST                      = 261,
    ANIM_FLY_SPELL_CAST_AREA                 = 262,
    ANIM_FLY_NPC_WELCOME                     = 263,
    ANIM_FLY_NPC_GOODBYE                     = 264,
    ANIM_FLY_BLOCK                           = 265,
    ANIM_FLY_JUMP_START                      = 266,
    ANIM_FLY_JUMP                            = 267,
    ANIM_FLY_JUMP_END                        = 268,
    ANIM_FLY_FALL                            = 269,
    ANIM_FLY_SWIM_IDLE                       = 270,
    ANIM_FLY_SWIM                            = 271,
    ANIM_FLY_SWIM_LEFT                       = 272,
    ANIM_FLY_SWIM_RIGHT                      = 273,
    ANIM_FLY_SWIM_BACKWARDS                  = 274,
    ANIM_FLY_ATTACK_BOW                      = 275,
    ANIM_FLY_FIRE_BOW                        = 276,
    ANIM_FLY_READY_RIFLE                     = 277,
    ANIM_FLY_ATTACK_RIFLE                    = 278,
    ANIM_FLY_LOOT                            = 279,
    ANIM_FLY_READY_SPELL_DIRECTED            = 280,
    ANIM_FLY_READY_SPELL_OMNI                = 281,
    ANIM_FLY_SPELL_CAST_DIRECTED             = 282,
    ANIM_FLY_SPELL_CAST_OMNI                 = 283,
    ANIM_FLY_SPELL_BATTLE_ROAR               = 284,
    ANIM_FLY_READY_ABILITY                   = 285,
    ANIM_FLY_SPECIAL1H                       = 286,
    ANIM_FLY_SPECIAL2H                       = 287,
    ANIM_FLY_SHIELD_BASH                     = 288,
    ANIM_FLY_EMOTE_TALK                      = 289,
    ANIM_FLY_EMOTE_EAT                       = 290,
    ANIM_FLY_EMOTE_WORK                      = 291,
    ANIM_FLY_USE_STANDING                    = 292,
    ANIM_FLY_EMOTE_TALK_EXCLAMATION          = 293,
    ANIM_FLY_EMOTE_TALK_QUESTION             = 294,
    ANIM_FLY_EMOTE_BOW                       = 295,
    ANIM_FLY_EMOTE_WAVE                      = 296,
    ANIM_FLY_EMOTE_CHEER                     = 297,
    ANIM_FLY_EMOTE_DANCE                     = 298,
    ANIM_FLY_EMOTE_LAUGH                     = 299,
    ANIM_FLY_EMOTE_SLEEP                     = 300,
    ANIM_FLY_EMOTE_SIT_GROUND                = 301,
    ANIM_FLY_EMOTE_RUDE                      = 302,
    ANIM_FLY_EMOTE_ROAR                      = 303,
    ANIM_FLY_EMOTE_KNEEL                     = 304,
    ANIM_FLY_EMOTE_KISS                      = 305,
    ANIM_FLY_EMOTE_CRY                       = 306,
    ANIM_FLY_EMOTE_CHICKEN                   = 307,
    ANIM_FLY_EMOTE_BEG                       = 308,
    ANIM_FLY_EMOTE_APPLAUD                   = 309,
    ANIM_FLY_EMOTE_SHOUT                     = 310,
    ANIM_FLY_EMOTE_FLEX                      = 311,
    ANIM_FLY_EMOTE_SHY                       = 312,
    ANIM_FLY_EMOTE_POINT                     = 313,
    ANIM_FLY_ATTACK1H_PIERCE                 = 314,
    ANIM_FLY_ATTACK2H_LOOSE_PIERCE           = 315,
    ANIM_FLY_ATTACK_OFF                      = 316,
    ANIM_FLY_ATTACK_OFF_PIERCE               = 317,
    ANIM_FLY_SHEATH                          = 318,
    ANIM_FLY_HIP_SHEATH                      = 319,
    ANIM_FLY_MOUNT                           = 320,
    ANIM_FLY_RUN_RIGHT                       = 321,
    ANIM_FLY_RUN_LEFT                        = 322,
    ANIM_FLY_MOUNT_SPECIAL                   = 323,
    ANIM_FLY_KICK                            = 324,
    ANIM_FLY_SIT_GROUND_DOWN                 = 325,
    ANIM_FLY_SIT_GROUND                      = 326,
    ANIM_FLY_SIT_GROUND_UP                   = 327,
    ANIM_FLY_SLEEP_DOWN                      = 328,
    ANIM_FLY_SLEEP                           = 329,
    ANIM_FLY_SLEEP_UP                        = 330,
    ANIM_FLY_SIT_CHAIR_LOW                   = 331,
    ANIM_FLY_SIT_CHAIR_MED                   = 332,
    ANIM_FLY_SIT_CHAIR_HIGH                  = 333,
    ANIM_FLY_LOAD_BOW                        = 334,
    ANIM_FLY_LOAD_RIFLE                      = 335,
    ANIM_FLY_ATTACK_THROWN                   = 336,
    ANIM_FLY_READY_THROWN                    = 337,
    ANIM_FLY_HOLD_BOW                        = 338,
    ANIM_FLY_HOLD_RIFLE                      = 339,
    ANIM_FLY_HOLD_THROWN                     = 340,
    ANIM_FLY_LOAD_THROWN                     = 341,
    ANIM_FLY_EMOTE_SALUTE                    = 342,
    ANIM_FLY_KNEEL_START                     = 343,
    ANIM_FLY_KNEEL_LOOP                      = 344,
    ANIM_FLY_KNEEL_END                       = 345,
    ANIM_FLY_ATTACK_UNARMED_OFF              = 346,
    ANIM_FLY_SPECIAL_UNARMED                 = 347,
    ANIM_FLY_STEALTH_WALK                    = 348,
    ANIM_FLY_STEALTH_STAND                   = 349,
    ANIM_FLY_KNOCKDOWN                       = 350,
    ANIM_FLY_EATING_LOOP                     = 351,
    ANIM_FLY_USE_STANDING_LOOP               = 352,
    ANIM_FLY_CHANNEL_CAST_DIRECTED           = 353,
    ANIM_FLY_CHANNEL_CAST_OMNI               = 354,
    ANIM_FLY_WHIRLWIND                       = 355,
    ANIM_FLY_BIRTH                           = 356,
    ANIM_FLY_USE_STANDING_START              = 357,
    ANIM_FLY_USE_STANDING_END                = 358,
    ANIM_FLY_CREATURE_SPECIAL                = 359,
    ANIM_FLY_DROWN                           = 360,
    ANIM_FLY_DROWNED                         = 361,
    ANIM_FLY_FISHING_CAST                    = 362,
    ANIM_FLY_FISHING_LOOP                    = 363,
    ANIM_FLY_FLY                             = 364,
    ANIM_FLY_EMOTE_WORK_NO_SHEATHE           = 365,
    ANIM_FLY_EMOTE_STUN_NO_SHEATHE           = 366,
    ANIM_FLY_EMOTE_USE_STANDING_NO_SHEATHE   = 367,
    ANIM_FLY_SPELL_SLEEP_DOWN                = 368,
    ANIM_FLY_SPELL_KNEEL_START               = 369,
    ANIM_FLY_SPELL_KNEEL_LOOP                = 370,
    ANIM_FLY_SPELL_KNEEL_END                 = 371,
    ANIM_FLY_SPRINT                          = 372,
    ANIM_FLY_IN_FLIGHT                       = 373,
    ANIM_FLY_SPAWN                           = 374,
    ANIM_FLY_CLOSE                           = 375,
    ANIM_FLY_CLOSED                          = 376,
    ANIM_FLY_OPEN                            = 377,
    ANIM_FLY_OPENED                          = 378,
    ANIM_FLY_DESTROY                         = 379,
    ANIM_FLY_DESTROYED                       = 380,
    ANIM_FLY_REBUILD                         = 381,
    ANIM_FLY_CUSTOM_0                        = 382,
    ANIM_FLY_CUSTOM_1                        = 383,
    ANIM_FLY_CUSTOM_2                        = 384,
    ANIM_FLY_CUSTOM_3                        = 385,
    ANIM_FLY_DESPAWN                         = 386,
    ANIM_FLY_HOLD                            = 387,
    ANIM_FLY_DECAY                           = 388,
    ANIM_FLY_BOW_PULL                        = 389,
    ANIM_FLY_BOW_RELEASE                     = 390,
    ANIM_FLY_SHIP_START                      = 391,
    ANIM_FLY_SHIP_MOVING                     = 392,
    ANIM_FLY_SHIP_STOP                       = 393,
    ANIM_FLY_GROUP_ARROW                     = 394,
    ANIM_FLY_ARROW                           = 395,
    ANIM_FLY_CORPSE_ARROW                    = 396,
    ANIM_FLY_GUIDE_ARROW                     = 397,
    ANIM_FLY_SWAY                            = 398,
    ANIM_FLY_DRUID_CAT_POUNCE                = 399,
    ANIM_FLY_DRUID_CAT_RIP                   = 400,
    ANIM_FLY_DRUID_CAT_RAKE                  = 401,
    ANIM_FLY_DRUID_CAT_RAVAGE                = 402,
    ANIM_FLY_DRUID_CAT_CLAW                  = 403,
    ANIM_FLY_DRUID_CAT_COWER                 = 404,
    ANIM_FLY_DRUID_BEAR_SWIPE                = 405,
    ANIM_FLY_DRUID_BEAR_BITE                 = 406,
    ANIM_FLY_DRUID_BEAR_MAUL                 = 407,
    ANIM_FLY_DRUID_BEAR_BASH                 = 408,
    ANIM_FLY_DRAGON_TAIL                     = 409,
    ANIM_FLY_DRAGON_STOMP                    = 410,
    ANIM_FLY_DRAGON_SPIT                     = 411,
    ANIM_FLY_DRAGON_SPIT_HOVER               = 412,
    ANIM_FLY_DRAGON_SPIT_FLY                 = 413,
    ANIM_FLY_EMOTE_YES                       = 414,
    ANIM_FLY_EMOTE_NO                        = 415,
    ANIM_FLY_JUMP_LAND_RUN                   = 416,
    ANIM_FLY_LOOT_HOLD                       = 417,
    ANIM_FLY_LOOT_UP                         = 418,
    ANIM_FLY_STAND_HIGH                      = 419,
    ANIM_FLY_IMPACT                          = 420,
    ANIM_FLY_LIFTOFF                         = 421,
    ANIM_FLY_HOVER                           = 422,
    ANIM_FLY_SUCCUBUS_ENTICE                 = 423,
    ANIM_FLY_EMOTE_TRAIN                     = 424,
    ANIM_FLY_EMOTE_DEAD                      = 425,
    ANIM_FLY_EMOTE_DANCE_ONCE                = 426,
    ANIM_FLY_DEFLECT                         = 427,
    ANIM_FLY_EMOTE_EAT_NO_SHEATHE            = 428,
    ANIM_FLY_LAND                            = 429,
    ANIM_FLY_SUBMERGE                        = 430,
    ANIM_FLY_SUBMERGED                       = 431,
    ANIM_FLY_CANNIBALIZE                     = 432,
    ANIM_FLY_ARROW_BIRTH                     = 433,
    ANIM_FLY_GROUP_ARROW_BIRTH               = 434,
    ANIM_FLY_CORPSE_ARROW_BIRTH              = 435,
    ANIM_FLY_GUIDE_ARROW_BIRTH               = 436,
    ANIM_FLY_EMOTE_TALK_NO_SHEATHE           = 437,
    ANIM_FLY_EMOTE_POINT_NO_SHEATHE          = 438,
    ANIM_FLY_EMOTE_SALUTE_NO_SHEATHE         = 439,
    ANIM_FLY_EMOTE_DANCE_SPECIAL             = 440,
    ANIM_FLY_MUTILATE                        = 441,
    ANIM_FLY_CUSTOM_SPELL_01                 = 442,
    ANIM_FLY_CUSTOM_SPELL_02                 = 443,
    ANIM_FLY_CUSTOM_SPELL_03                 = 444,
    ANIM_FLY_CUSTOM_SPELL_04                 = 445,
    ANIM_FLY_CUSTOM_SPELL_05                 = 446,
    ANIM_FLY_CUSTOM_SPELL_06                 = 447,
    ANIM_FLY_CUSTOM_SPELL_07                 = 448,
    ANIM_FLY_CUSTOM_SPELL_08                 = 449,
    ANIM_FLY_CUSTOM_SPELL_09                 = 450,
    ANIM_FLY_CUSTOM_SPELL_10                 = 451,
    ANIM_FLY_STEALTH_RUN                     = 452,
    ANIM_FLY_EMERGE                          = 453,
    ANIM_FLY_COWER                           = 454,
    ANIM_FLY_GRAB                            = 455,
    ANIM_FLY_GRAB_CLOSED                     = 456,
    ANIM_FLY_GRAB_THROWN                     = 457,
    ANIM_TO_FLY                              = 458,
    ANIM_TO_HOVER                            = 459,
    ANIM_TO_GROUND                           = 460,
    ANIM_FLY_TO_FLY                          = 461,
    ANIM_FLY_TO_HOVER                        = 462,
    ANIM_FLY_TO_GROUND                       = 463,
    ANIM_SETTLE                              = 464,
    ANIM_FLY_SETTLE                          = 465,
    ANIM_DEATH_START                         = 466,
    ANIM_DEATH_LOOP                          = 467,
    ANIM_DEATH_END                           = 468,
    ANIM_FLY_DEATH_START                     = 469,
    ANIM_FLY_DEATH_LOOP                      = 470,
    ANIM_FLY_DEATH_END                       = 471,
    ANIM_DEATH_END_HOLD                      = 472,
    ANIM_FLY_DEATH_END_HOLD                  = 473,
    ANIM_STRANGULATE                         = 474,
    ANIM_FLY_STRANGULATE                     = 475,
    ANIM_READY_JOUST                         = 476,
    ANIM_LOAD_JOUST                          = 477,
    ANIM_HOLD_JOUST                          = 478,
    ANIM_FLY_READY_JOUST                     = 479,
    ANIM_FLY_LOAD_JOUST                      = 480,
    ANIM_FLY_HOLD_JOUST                      = 481,
    ANIM_ATTACK_JOUST                        = 482,
    ANIM_FLY_ATTACK_JOUST                    = 483,
    ANIM_RECLINED_MOUNT                      = 484,
    ANIM_FLY_RECLINED_MOUNT                  = 485,
    ANIM_TO_ALTERED                          = 486,
    ANIM_FROM_ALTERED                        = 487,
    ANIM_FLY_TO_ALTERED                      = 488,
    ANIM_FLY_FROM_ALTERED                    = 489,
    ANIM_IN_STOCKS                           = 490,
    ANIM_FLY_IN_STOCKS                       = 491,
    ANIM_VEHICLE_GRAB                        = 492,
    ANIM_VEHICLE_THROW                       = 493,
    ANIM_FLY_VEHICLE_GRAB                    = 494,
    ANIM_FLY_VEHICLE_THROW                   = 495,
    ANIM_TO_ALTERED_POST_SWAP                = 496,
    ANIM_FROM_ALTERED_POST_SWAP              = 497,
    ANIM_FLY_TO_ALTERED_POST_SWAP            = 498,
    ANIM_FLY_FROM_ALTERED_POST_SWAP          = 499,
    ANIM_RECLINED_MOUNT_PASSENGER            = 500,
    ANIM_FLY_RECLINED_MOUNT_PASSENGER        = 501,
    ANIM_CARRY2H                             = 502,
    ANIM_CARRIED2H                           = 503,
    ANIM_FLY_CARRY2H                         = 504,
    ANIM_FLY_CARRIED2H                       = 505,
    ANIM_EMOTE_SNIFF                         = 506,
    ANIM_EMOTE_FLY_SNIFF                     = 507,
    ANIM_ATTACK_FIST1H                       = 508,
    ANIM_FLY_ATTACK_FIST1H                   = 509,
    ANIM_ATTACK_FIST_1H_OFF                  = 510,
    ANIM_FLY_ATTACK_FIST_1H_OFF              = 511,
    ANIM_PARRY_FIST1H                        = 512,
    ANIM_FLY_PARRY_FIST1H                    = 513,
    ANIM_READY_FIST1H                        = 514,
    ANIM_FLY_READY_FIST1H                    = 515,
    ANIM_SPECIAL_FIST1H                      = 516,
    ANIM_FLY_SPECIAL_FIST1H                  = 517,
    ANIM_EMOTE_READ_START                    = 518,
    ANIM_FLY_EMOTE_READ_START                = 519,
    ANIM_EMOTE_READ_LOOP                     = 520,
    ANIM_FLY_EMOTE_READ_LOOP                 = 521,
    ANIM_EMOTE_READ_END                      = 522,
    ANIM_FLY_EMOTE_READ_END                  = 523,
    ANIM_SWIM_RUN                            = 524,
    ANIM_FLY_SWIM_RUN                        = 525,
    ANIM_SWIM_WALK                           = 526,
    ANIM_FLY_SWIM_WALK                       = 527,
    ANIM_SWIM_WALK_BACKWARDS                 = 528,
    ANIM_FLY_SWIM_WALK_BACKWARDS             = 529,
    ANIM_SWIM_SPRINT                         = 530,
    ANIM_FLY_SWIM_SPRINT                     = 531,
    ANIM_MOUNT_SWIM_IDLE                     = 532,
    ANIM_FLY_MOUNT_SWIM_IDLE                 = 533,
    ANIM_MOUNT_SWIM_BACKWARDS                = 534,
    ANIM_FLY_MOUNT_SWIM_BACKWARDS            = 535,
    ANIM_MOUNT_SWIM_LEFT                     = 536,
    ANIM_FLY_MOUNT_SWIM_LEFT                 = 537,
    ANIM_MOUNT_SWIM_RIGHT                    = 538,
    ANIM_FLY_MOUNT_SWIM_RIGHT                = 539,
    ANIM_MOUNT_SWIM_RUN                      = 540,
    ANIM_FLY_MOUNT_SWIM_RUN                  = 541,
    ANIM_MOUNT_SWIM_SPRINT                   = 542,
    ANIM_FLY_MOUNT_SWIM_SPRINT               = 543,
    ANIM_MOUNT_SWIM_WALK                     = 544,
    ANIM_FLY_MOUNT_SWIM_WALK                 = 545,
    ANIM_MOUNT_SWIM_WALK_BACKWARDS           = 546,
    ANIM_FLY_MOUNT_SWIM_WALK_BACKWARDS       = 547,
    ANIM_MOUNT_FLIGHT_IDLE                   = 548,
    ANIM_FLY_MOUNT_FLIGHT_IDLE               = 549,
    ANIM_MOUNT_FLIGHT_BACKWARDS              = 550,
    ANIM_FLY_MOUNT_FLIGHT_BACKWARDS          = 551,
    ANIM_MOUNT_FLIGHT_LEFT                   = 552,
    ANIM_FLY_MOUNT_FLIGHT_LEFT               = 553,
    ANIM_MOUNT_FLIGHT_RIGHT                  = 554,
    ANIM_FLY_MOUNT_FLIGHT_RIGHT              = 555,
    ANIM_MOUNT_FLIGHT_RUN                    = 556,
    ANIM_FLY_MOUNT_FLIGHT_RUN                = 557,
    ANIM_MOUNT_FLIGHT_SPRINT                 = 558,
    ANIM_FLY_MOUNT_FLIGHT_SPRINT             = 559,
    ANIM_MOUNT_FLIGHT_WALK                   = 560,
    ANIM_FLY_MOUNT_FLIGHT_WALK               = 561,
    ANIM_MOUNT_FLIGHT_WALK_BACKWARDS         = 562,
    ANIM_FLY_MOUNT_FLIGHT_WALK_BACKWARDS     = 563,
    ANIM_MOUNT_FLIGHT_START                  = 564,
    ANIM_FLY_MOUNT_FLIGHT_START              = 565,
    ANIM_MOUNT_SWIM_START                    = 566,
    ANIM_FLY_MOUNT_SWIM_START                = 567,
    ANIM_MOUNT_SWIM_LAND                     = 568,
    ANIM_FLY_MOUNT_SWIM_LAND                 = 569,
    ANIM_MOUNT_SWIM_LAND_RUN                 = 570,
    ANIM_FLY_MOUNT_SWIM_LAND_RUN             = 571,
    ANIM_MOUNT_FLIGHT_LAND                   = 572,
    ANIM_FLY_MOUNT_FLIGHT_LAND               = 573,
    ANIM_MOUNT_FLIGHT_LAND_RUN               = 574,
    ANIM_FLY_MOUNT_FLIGHT_LAND_RUN           = 575,
    ANIM_READY_BLOW_DART                     = 576,
    ANIM_FLY_READY_BLOW_DART                 = 577,
    ANIM_LOAD_BLOW_DART                      = 578,
    ANIM_FLY_LOAD_BLOW_DART                  = 579,
    ANIM_HOLD_BLOW_DART                      = 580,
    ANIM_FLY_HOLD_BLOW_DART                  = 581,
    ANIM_ATTACK_BLOW_DART                    = 582,
    ANIM_FLY_ATTACK_BLOW_DART                = 583,
    ANIM_CARRIAGE_MOUNT                      = 584,
    ANIM_FLY_CARRIAGE_MOUNT                  = 585,
    ANIM_CARRIAGE_PASSENGER_MOUNT            = 586,
    ANIM_FLY_CARRIAGE_PASSENGER_MOUNT        = 587,
    ANIM_CARRIAGE_MOUNT_ATTACK               = 588,
    ANIM_FLY_CARRIAGE_MOUNT_ATTACK           = 589,
    ANIM_BARTENDER_STAND                     = 590,
    ANIM_FLY_BARTENDER_STAND                 = 591,
    ANIM_BARTENDER_WALK                      = 592,
    ANIM_FLY_BARTENDER_WALK                  = 593,
    ANIM_BARTENDER_RUN                       = 594,
    ANIM_FLY_BARTENDER_RUN                   = 595,
    ANIM_BARTENDER_SHUFFLE_LEFT              = 596,
    ANIM_FLY_BARTENDER_SHUFFLE_LEFT          = 597,
    ANIM_BARTENDER_SHUFFLE_RIGHT             = 598,
    ANIM_FLY_BARTENDER_SHUFFLE_RIGHT         = 599,
    ANIM_BARTENDER_EMOTE_TALK                = 600,
    ANIM_FLY_BARTENDER_EMOTE_TALK            = 601,
    ANIM_BARTENDER_EMOTE_POINT               = 602,
    ANIM_FLY_BARTENDER_EMOTE_POINT           = 603,
    ANIM_BARMAID_STAND                       = 604,
    ANIM_FLY_BARMAID_STAND                   = 605,
    ANIM_BARMAID_WALK                        = 606,
    ANIM_FLY_BARMAID_WALK                    = 607,
    ANIM_BARMAID_RUN                         = 608,
    ANIM_FLY_BARMAID_RUN                     = 609,
    ANIM_BARMAID_SHUFFLE_LEFT                = 610,
    ANIM_FLY_BARMAID_SHUFFLE_LEFT            = 611,
    ANIM_BARMAID_SHUFFLE_RIGHT               = 612,
    ANIM_FLY_BARMAID_SHUFFLE_RIGHT           = 613,
    ANIM_BARMAID_EMOTE_TALK                  = 614,
    ANIM_FLY_BARMAID_EMOTE_TALK              = 615,
    ANIM_BARMAID_EMOTE_POINT                 = 616,
    ANIM_FLY_BARMAID_EMOTE_POINT             = 617,
    ANIM_MOUNT_SELF_IDLE                     = 618,
    ANIM_FLY_MOUNT_SELF_IDLE                 = 619,
    ANIM_MOUNT_SELF_WALK                     = 620,
    ANIM_FLY_MOUNT_SELF_WALK                 = 621,
    ANIM_MOUNT_SELF_RUN                      = 622,
    ANIM_FLY_MOUNT_SELF_RUN                  = 623,
    ANIM_MOUNT_SELF_SPRINT                   = 624,
    ANIM_FLY_MOUNT_SELF_SPRINT               = 625,
    ANIM_MOUNT_SELF_RUN_LEFT                 = 626,
    ANIM_FLY_MOUNT_SELF_RUN_LEFT             = 627,
    ANIM_MOUNT_SELF_RUN_RIGHT                = 628,
    ANIM_FLY_MOUNT_SELF_RUN_RIGHT            = 629,
    ANIM_MOUNT_SELF_SHUFFLE_LEFT             = 630,
    ANIM_FLY_MOUNT_SELF_SHUFFLE_LEFT         = 631,
    ANIM_MOUNT_SELF_SHUFFLE_RIGHT            = 632,
    ANIM_FLY_MOUNT_SELF_SHUFFLE_RIGHT        = 633,
    ANIM_MOUNT_SELF_WALK_BACKWARDS           = 634,
    ANIM_FLY_MOUNT_SELF_WALK_BACKWARDS       = 635,
    ANIM_MOUNT_SELF_SPECIAL                  = 636,
    ANIM_FLY_MOUNT_SELF_SPECIAL              = 637,
    ANIM_MOUNT_SELF_JUMP                     = 638,
    ANIM_FLY_MOUNT_SELF_JUMP                 = 639,
    ANIM_MOUNT_SELF_JUMP_START               = 640,
    ANIM_FLY_MOUNT_SELF_JUMP_START           = 641,
    ANIM_MOUNT_SELF_JUMP_END                 = 642,
    ANIM_FLY_MOUNT_SELF_JUMP_END             = 643,
    ANIM_MOUNT_SELF_JUMP_LAND_RUN            = 644,
    ANIM_FLY_MOUNT_SELF_JUMP_LAND_RUN        = 645,
    ANIM_MOUNT_SELF_START                    = 646,
    ANIM_FLY_MOUNT_SELF_START                = 647,
    ANIM_MOUNT_SELF_FALL                     = 648,
    ANIM_FLY_MOUNT_SELF_FALL                 = 649,
    ANIM_STORMSTRIKE                         = 650,
    ANIM_FLY_STORMSTRIKE                     = 651,
    ANIM_READY_JOUST_NO_SHEATHE              = 652,
    ANIM_FLY_READY_JOUST_NO_SHEATHE          = 653,
    ANIM_SLAM                                = 654,
    ANIM_FLY_SLAM                            = 655,
    ANIM_DEATH_STRIKE                        = 656,
    ANIM_FLY_DEATH_STRIKE                    = 657,
    ANIM_SWIM_ATTACK_UNARMED                 = 658,
    ANIM_FLY_SWIM_ATTACK_UNARMED             = 659,
    ANIM_SPINNING_KICK                       = 660,
    ANIM_FLY_SPINNING_KICK                   = 661,
    ANIM_ROUND_HOUSE_KICK                    = 662,
    ANIM_FLY_ROUND_HOUSE_KICK                = 663,
    ANIM_ROLL_START                          = 664,
    ANIM_FLY_ROLL_START                      = 665,
    ANIM_ROLL                                = 666,
    ANIM_FLY_ROLL                            = 667,
    ANIM_ROLL_END                            = 668,
    ANIM_FLY_ROLL_END                        = 669,
    ANIM_PALM_STRIKE                         = 670,
    ANIM_FLY_PALM_STRIKE                     = 671,
    ANIM_MONK_OFFENSE_ATTACK_UNARMED         = 672,
    ANIM_FLY_MONK_OFFENSE_ATTACK_UNARMED     = 673,
    ANIM_MONK_OFFENSE_ATTACK_UNARMED_OFF     = 674,
    ANIM_FLY_MONK_OFFENSE_ATTACK_UNARMED_OFF = 675,
    ANIM_MONK_OFFENSE_PARRY_UNARMED          = 676,
    ANIM_FLY_MONK_OFFENSE_PARRY_UNARMED      = 677,
    ANIM_MONK_OFFENSE_READY_UNARMED          = 678,
    ANIM_FLY_MONK_OFFENSE_READY_UNARMED      = 679,
    ANIM_MONK_OFFENSE_SPECIAL_UNARMED        = 680,
    ANIM_FLY_MONK_OFFENSE_SPECIAL_UNARMED    = 681,
    ANIM_MONK_DEFENSE_ATTACK_UNARMED         = 682,
    ANIM_FLY_MONK_DEFENSE_ATTACK_UNARMED     = 683,
    ANIM_MONK_DEFENSE_ATTACK_UNARMED_OFF     = 684,
    ANIM_FLY_MONK_DEFENSE_ATTACK_UNARMED_OFF = 685,
    ANIM_MONK_DEFENSE_PARRY_UNARMED          = 686,
    ANIM_FLY_MONK_DEFENSE_PARRY_UNARMED      = 687,
    ANIM_MONK_DEFENSE_READY_UNARMED          = 688,
    ANIM_FLY_MONK_DEFENSE_READY_UNARMED      = 689,
    ANIM_MONK_DEFENSE_SPECIAL_UNARMED        = 690,
    ANIM_FLY_MONK_DEFENSE_SPECIAL_UNARMED    = 691,
    ANIM_MONK_HEAL_ATTACK_UNARMED            = 692,
    ANIM_FLY_MONK_HEAL_ATTACK_UNARMED        = 693,
    ANIM_MONK_HEAL_ATTACK_UNARMED_OFF        = 694,
    ANIM_FLY_MONK_HEAL_ATTACK_UNARMED_OFF    = 695,
    ANIM_MONK_HEAL_PARRY_UNARMED             = 696,
    ANIM_FLY_MONK_HEAL_PARRY_UNARMED         = 697,
    ANIM_MONK_HEAL_READY_UNARMED             = 698,
    ANIM_FLY_MONK_HEAL_READY_UNARMED         = 699,
    ANIM_MONK_HEAL_SPECIAL_UNARMED           = 700,
    ANIM_FLY_MONK_HEAL_SPECIAL_UNARMED       = 701,
    ANIM_FLYING_KICK                         = 702,
    ANIM_FLY_FLYING_KICK                     = 703,
    ANIM_FLYING_KICK_START                   = 704,
    ANIM_FLY_FLYING_KICK_START               = 705,
    ANIM_FLYING_KICK_END                     = 706,
    ANIM_FLY_FLYING_KICK_END                 = 707,
    ANIM_CRANE_START                         = 708,
    ANIM_FLY_CRANE_START                     = 709,
    ANIM_CRANE_LOOP                          = 710,
    ANIM_FLY_CRANE_LOOP                      = 711,
    ANIM_CRANE_END                           = 712,
    ANIM_FLY_CRANE_END                       = 713,
    ANIM_DESPAWNED                           = 714,
    ANIM_FLY_DESPAWNED                       = 715,
    ANIM_THOUSAND_FISTS                      = 716,
    ANIM_FLY_THOUSAND_FISTS                  = 717,
    ANIM_MONK_HEAL_READY_SPELL_DIRECTED      = 718,
    ANIM_FLY_MONK_HEAL_READY_SPELL_DIRECTED  = 719,
    ANIM_MONK_HEAL_READY_SPELL_OMNI          = 720,
    ANIM_FLY_MONK_HEAL_READY_SPELL_OMNI      = 721,
    ANIM_MONK_HEAL_SPELL_CAST_DIRECTED       = 722,
    ANIM_FLY_MONK_HEAL_SPELL_CAST_DIRECTED   = 723,
    ANIM_MONK_HEAL_SPELL_CAST_OMNI           = 724,
    ANIM_FLY_MONK_HEAL_SPELL_CAST_OMNI       = 725,
    ANIM_MONK_HEAL_CHANNEL_CAST_DIRECTED     = 726,
    ANIM_FLY_MONK_HEAL_CHANNEL_CAST_DIRECTED = 727,
    ANIM_MONK_HEAL_CHANNEL_CAST_OMNI         = 728,
    ANIM_FLY_MONK_HEAL_CHANNEL_CAST_OMNI     = 729,
    ANIM_TORPEDO                             = 730,
    ANIM_FLY_TORPEDO                         = 731,
    ANIM_MEDITATE                            = 732,
    ANIM_FLY_MEDITATE                        = 733,
    ANIM_BREATH_OF_FIRE                      = 734,
    ANIM_FLY_BREATH_OF_FIRE                  = 735,
    ANIM_RISING_SUN_KICK                     = 736,
    ANIM_FLY_RISING_SUN_KICK                 = 737,
    ANIM_GROUND_KICK                         = 738,
    ANIM_FLY_GROUND_KICK                     = 739,
    ANIM_KICK_BACK                           = 740,
    ANIM_FLY_KICK_BACK                       = 741,
    ANIM_PET_BATTLE_STAND                    = 742,
    ANIM_FLY_PET_BATTLE_STAND                = 743,
    ANIM_PET_BATTLE_DEATH                    = 744,
    ANIM_FLY_PET_BATTLE_DEATH                = 745,
    ANIM_PET_BATTLE_RUN                      = 746,
    ANIM_FLY_PET_BATTLE_RUN                  = 747,
    ANIM_PET_BATTLE_WOUND                    = 748,
    ANIM_FLY_PET_BATTLE_WOUND                = 749,
    ANIM_PET_BATTLE_ATTACK                   = 750,
    ANIM_FLY_PET_BATTLE_ATTACK               = 751,
    ANIM_PET_BATTLE_READY_SPELL              = 752,
    ANIM_FLY_PET_BATTLE_READY_SPELL          = 753,
    ANIM_PET_BATTLE_SPELL_CAST               = 754,
    ANIM_FLY_PET_BATTLE_SPELL_CAST           = 755,
    ANIM_PET_BATTLE_CUSTOM0                  = 756,
    ANIM_FLY_PET_BATTLE_CUSTOM0              = 757,
    ANIM_PET_BATTLE_CUSTOM1                  = 758,
    ANIM_FLY_PET_BATTLE_CUSTOM1              = 759,
    ANIM_PET_BATTLE_CUSTOM2                  = 760,
    ANIM_FLY_PET_BATTLE_CUSTOM2              = 761,
    ANIM_PET_BATTLE_CUSTOM3                  = 762,
    ANIM_FLY_PET_BATTLE_CUSTOM3              = 763,
    ANIM_PET_BATTLE_VICTORY                  = 764,
    ANIM_FLY_PET_BATTLE_VICTORY              = 765,
    ANIM_PET_BATTLE_LOSS                     = 766,
    ANIM_FLY_PET_BATTLE_LOSS                 = 767,
    ANIM_PET_BATTLE_STUN                     = 768,
    ANIM_FLY_PET_BATTLE_STUN                 = 769,
    ANIM_PET_BATTLE_DEAD                     = 770,
    ANIM_FLY_PET_BATTLE_DEAD                 = 771,
    ANIM_PET_BATTLE_FREEZE                   = 772,
    ANIM_FLY_PET_BATTLE_FREEZE               = 773,
    ANIM_MONK_OFFENSE_ATTACK_WEAPON          = 774,
    ANIM_FLY_MONK_OFFENSE_ATTACK_WEAPON      = 775,
    ANIM_BAR_TEND_EMOTE_WAVE                 = 776,
    ANIM_FLY_BAR_TEND_EMOTE_WAVE             = 777,
    ANIM_BAR_SERVER_EMOTE_TALK               = 778,
    ANIM_FLY_BAR_SERVER_EMOTE_TALK           = 779,
    ANIM_BAR_SERVER_EMOTE_WAVE               = 780,
    ANIM_FLY_BAR_SERVER_EMOTE_WAVE           = 781,
    ANIM_BAR_SERVER_POUR_DRINKS              = 782,
    ANIM_FLY_BAR_SERVER_POUR_DRINKS          = 783,
    ANIM_BAR_SERVER_PICKUP                   = 784,
    ANIM_FLY_BAR_SERVER_PICKUP               = 785,
    ANIM_BAR_SERVER_PUT_DOWN                 = 786,
    ANIM_FLY_BAR_SERVER_PUT_DOWN             = 787,
    ANIM_BAR_SWEEP_STAND                     = 788,
    ANIM_FLY_BAR_SWEEP_STAND                 = 789,
    ANIM_BAR_PATRON_SIT                      = 790,
    ANIM_FLY_BAR_PATRON_SIT                  = 791,
    ANIM_BAR_PATRON_SIT_EMOTE_TALK           = 792,
    ANIM_FLY_BAR_PATRON_SIT_EMOTE_TALK       = 793,
    ANIM_BAR_PATRON_STAND                    = 794,
    ANIM_FLY_BAR_PATRON_STAND                = 795,
    ANIM_BAR_PATRON_STAND_EMOTE_TALK         = 796,
    ANIM_FLY_BAR_PATRON_STAND_EMOTE_TALK     = 797,
    ANIM_BAR_PATRON_STAND_EMOTE_POINT        = 798,
    ANIM_FLY_BAR_PATRON_STAND_EMOTE_POINT    = 799,
    ANIM_CARRION_SWARM                       = 800,
    ANIM_FLY_CARRION_SWARM                   = 801,
    ANIM_WHEEL_LOOP                          = 802,
    ANIM_FLY_WHEEL_LOOP                      = 803,
    ANIM_STAND_CHARACTER_CREATE              = 804,
    ANIM_FLY_STAND_CHARACTER_CREATE          = 805,
    ANIM_MOUNT_CHOPPER                       = 806,
    ANIM_FLY_MOUNT_CHOPPER                   = 807,
    ANIM_FACE_POSE                           = 808,
    ANIM_FLY_FACE_POSE                       = 809,
    ANIM_WARRIOR_COLOSSUS_SMASH              = 810,
    ANIM_FLY_WARRIOR_COLOSSUS_SMASH          = 811,
    ANIM_WARRIOR_MORTAL_STRIKE               = 812,
    ANIM_FLY_WARRIOR_MORTAL_STRIKE           = 813,
    ANIM_WARRIOR_WHIRLWIND                   = 814,
    ANIM_FLY_WARRIOR_WHIRLWIND               = 815,
    ANIM_WARRIOR_CHARGE                      = 816,
    ANIM_FLY_WARRIOR_CHARGE                  = 817,
    ANIM_WARRIOR_CHARGE_START                = 818,
    ANIM_FLY_WARRIOR_CHARGE_START            = 819,
    ANIM_WARRIOR_CHARGE_END                  = 820,
    ANIM_FLY_WARRIOR_CHARGE_END              = 821
};

enum LockKeyType
{
    LOCK_KEY_NONE  = 0,
    LOCK_KEY_ITEM  = 1,
    LOCK_KEY_SKILL = 2,
    LOCK_KEY_SPELL = 3
};

enum LockType
{
    LOCKTYPE_PICKLOCK              = 1,
    LOCKTYPE_HERBALISM             = 2,
    LOCKTYPE_MINING                = 3,
    LOCKTYPE_DISARM_TRAP           = 4,
    LOCKTYPE_OPEN                  = 5,
    LOCKTYPE_TREASURE              = 6,
    LOCKTYPE_CALCIFIED_ELVEN_GEMS  = 7,
    LOCKTYPE_CLOSE                 = 8,
    LOCKTYPE_ARM_TRAP              = 9,
    LOCKTYPE_QUICK_OPEN            = 10,
    LOCKTYPE_QUICK_CLOSE           = 11,
    LOCKTYPE_OPEN_TINKERING        = 12,
    LOCKTYPE_OPEN_KNEELING         = 13,
    LOCKTYPE_OPEN_ATTACKING        = 14,
    LOCKTYPE_GAHZRIDIAN            = 15,
    LOCKTYPE_BLASTING              = 16,
    LOCKTYPE_SLOW_OPEN             = 17,
    LOCKTYPE_SLOW_CLOSE            = 18,
    LOCKTYPE_FISHING               = 19,
    LOCKTYPE_INSCRIPTION           = 20,
    LOCKTYPE_OPEN_FROM_VEHICLE     = 21,
    LOCKTYPE_ARCHAELOGY            = 22,
    LOCKTYPE_PVP_OPEN_FAST         = 23,
    LOCKTYPE_LUMBER_MILL           = 28
};

enum TrainerType                                            // this is important type for npcs!
{
    TRAINER_TYPE_CLASS             = 0,                     // TODO: Not in MoP
    TRAINER_TYPE_MOUNTS            = 1,                     // on blizz it's 2
    TRAINER_TYPE_TRADESKILLS       = 2,
    TRAINER_TYPE_PETS              = 3,

    MAX_TRAINER_TYPE
};

// CreatureType.dbc
enum CreatureType
{
    CREATURE_TYPE_BEAST            = 1,
    CREATURE_TYPE_DRAGONKIN        = 2,
    CREATURE_TYPE_DEMON            = 3,
    CREATURE_TYPE_ELEMENTAL        = 4,
    CREATURE_TYPE_GIANT            = 5,
    CREATURE_TYPE_UNDEAD           = 6,
    CREATURE_TYPE_HUMANOID         = 7,
    CREATURE_TYPE_CRITTER          = 8,
    CREATURE_TYPE_MECHANICAL       = 9,
    CREATURE_TYPE_NOT_SPECIFIED    = 10,
    CREATURE_TYPE_TOTEM            = 11,
    CREATURE_TYPE_NON_COMBAT_PET   = 12,
    CREATURE_TYPE_GAS_CLOUD        = 13,
    CREATURE_TYPE_WILD_PET         = 14,
    CREATURE_TYPE_ABBERATION       = 15,
};

constexpr uint32 CREATURE_TYPEMASK_HUMANOID_OR_UNDEAD = (1 << (CREATURE_TYPE_HUMANOID-1)) | (1 << (CREATURE_TYPE_UNDEAD-1));

// CreatureFamily.dbc
enum CreatureFamily
{
    CREATURE_FAMILY_WOLF                = 1,
    CREATURE_FAMILY_CAT                 = 2,
    CREATURE_FAMILY_SPIDER              = 3,
    CREATURE_FAMILY_BEAR                = 4,
    CREATURE_FAMILY_BOAR                = 5,
    CREATURE_FAMILY_CROCOLISK           = 6,
    CREATURE_FAMILY_CARRION_BIRD        = 7,
    CREATURE_FAMILY_CRAB                = 8,
    CREATURE_FAMILY_GORILLA             = 9,
    CREATURE_FAMILY_HORSE_CUSTOM        = 10,   // Does not exist in DBC but used for horse like beasts in DB
    CREATURE_FAMILY_RAPTOR              = 11,
    CREATURE_FAMILY_TALLSTRIDER         = 12,
    CREATURE_FAMILY_FELHUNTER           = 15,
    CREATURE_FAMILY_VOIDWALKER          = 16,
    CREATURE_FAMILY_SUCCUBUS            = 17,
    CREATURE_FAMILY_DOOMGUARD           = 19,
    CREATURE_FAMILY_SCORPID             = 20,
    CREATURE_FAMILY_TURTLE              = 21,
    CREATURE_FAMILY_IMP                 = 23,
    CREATURE_FAMILY_BAT                 = 24,
    CREATURE_FAMILY_HYENA               = 25,
    CREATURE_FAMILY_BIRD_OF_PREY        = 26,
    CREATURE_FAMILY_WIND_SERPENT        = 27,
    CREATURE_FAMILY_REMOTE_CONTROL      = 28,
    CREATURE_FAMILY_FELGUARD            = 29,
    CREATURE_FAMILY_DRAGONHAWK          = 30,
    CREATURE_FAMILY_RAVAGER             = 31,
    CREATURE_FAMILY_WARP_STALKER        = 32,
    CREATURE_FAMILY_SPOREBAT            = 33,
    CREATURE_FAMILY_NETHER_RAY          = 34,
    CREATURE_FAMILY_SERPENT             = 35,
    CREATURE_FAMILY_MOTH                = 37,
    CREATURE_FAMILY_CHIMAERA            = 38,
    CREATURE_FAMILY_DEVILSAUR           = 39,
    CREATURE_FAMILY_GHOUL               = 40,
    CREATURE_FAMILY_SILITHID            = 41,
    CREATURE_FAMILY_WORM                = 42,
    CREATURE_FAMILY_RHINO               = 43,
    CREATURE_FAMILY_WASP                = 44,
    CREATURE_FAMILY_CORE_HOUND          = 45,
    CREATURE_FAMILY_SPIRIT_BEAST        = 46,
    CREATURE_FAMILY_WATER_ELEMENTAL     = 49,
    CREATURE_FAMILY_FOX                 = 50,
    CREATURE_FAMILY_MONKEY              = 51,
    CREATURE_FAMILY_DOG                 = 52,
    CREATURE_FAMILY_BEETLE              = 53,
    CREATURE_FAMILY_SHALE_SPIDER        = 55,
    CREATURE_FAMILY_ZOMBIE              = 56,
    CREATURE_FAMILY_BEETLE_OLD          = 57,
    CREATURE_FAMILY_SILITHID_2          = 59,
    CREATURE_FAMILY_WASP_2              = 66,
    CREATURE_FAMILY_HYDRA               = 68,       // New on MoP 5.0.5
    CREATURE_FAMILY_FEL_IMP             = 100,      // New on MoP 5.0.5
    CREATURE_FAMILY_VOID_WALKER         = 101,      // New on MoP 5.0.5
    CREATURE_FAMILY_SHIVARRA            = 102,      // New on MoP 5.0.5
    CREATURE_FAMILY_OBSERVER            = 103,      // New on MoP 5.0.5
    CREATURE_FAMILY_WRATH_GUARD         = 104,      // New on MoP 5.0.5
    CREATURE_FAMILY_INFERNAL            = 108,      // New on MoP 5.0.5
    CREATURE_FAMILY_ELEMENTAL_FIRE_TOTEM = 116,     // New on MoP 5.0.5
    CREATURE_FAMILY_ELEMENTAL_EARTH_TOTEM =117,     // New on MoP 5.0.5
    CREATURE_FAMILY_MONK_CRANEKICK      = 125,      // New on MoP 5.0.5
    CREATURE_FAMILY_ELEMENTAL_MOTE      = 126,      // New on MoP 5.0.5
    CREATURE_FAMILY_BOAR_NEW            = 127,      // New on MoP 5.0.5
    CREATURE_FAMILY_CAT_NEW             = 128,      // New on MoP 5.0.5
    CREATURE_FAMILY_MOUNTAINRAM         = 129,      // New on MoP 5.0.5
    CREATURE_FAMILY_CROCOLISK_NEW       = 130,      // New on MoP 5.0.5
    CREATURE_FAMILY_DIREHORN            = 138,
    CREATURE_FAMILY_STORMELEMENTAL      = 145,
    CREATURE_FAMILY_MTWATERELEMENTAL    = 146,
    CREATURE_FAMILY_TORRORGUARD         = 147,
    CREATURE_FAMILY_ABYSSAL             = 148,
    CREATURE_FAMILY_RYLAK               = 149,
    CREATURE_FAMILY_RIVERBEAST          = 150,
    CREATURE_FAMILY_STAG                = 151
};

enum CreatureTypeFlags
{
    CREATURE_TYPEFLAGS_TAMEABLE                          = 0x00000001, // Tameable by any hunter
    CREATURE_TYPEFLAGS_GHOST                             = 0x00000002, // Creature are also visible for not alive player. Allow gossip interaction if npcflag allow?
    CREATURE_TYPEFLAGS_BOSS                              = 0x00000004,
    CREATURE_TYPEFLAGS_DO_NOT_PLAY_WOUND_PARRY_ANIMATION = 0x00000008,
    CREATURE_TYPEFLAGS_HIDE_FACTION_TOOLTIP              = 0x00000010,
    CREATURE_TYPEFLAGS_UNK5                              = 0x00000020,
    CREATURE_TYPEFLAGS_SPELL_ATTACKABLE                  = 0x00000040,
    CREATURE_TYPEFLAGS_DEAD_INTERACT                     = 0x00000080, // Player can interact with the creature if its dead (not player dead)
    CREATURE_TYPEFLAGS_HERBLOOT                          = 0x00000100, // Can be looted by herbalist
    CREATURE_TYPEFLAGS_MININGLOOT                        = 0x00000200, // Can be looted by miner
    CREATURE_TYPEFLAGS_DONT_LOG_DEATH                    = 0x00000400, // Death event will not show up in combat log
    CREATURE_TYPEFLAGS_MOUNTED_COMBAT                    = 0x00000800, // Creature can remain mounted when entering combat
    CREATURE_TYPEFLAGS_CAN_ASSIST                        = 0x00001000,
    CREATURE_TYPEFLAGS_IS_PET_BAR_USED                   = 0x00002000,
    CREATURE_TYPEFLAGS_MASK_UID                          = 0x00004000,
    CREATURE_TYPEFLAGS_ENGINEERLOOT                      = 0x00008000, // Can be looted by engineer
    CREATURE_TYPEFLAGS_EXOTIC                            = 0x00010000, // Can be tamed by hunter as exotic pet
    CREATURE_TYPEFLAGS_USE_DEFAULT_COLLISION_BOX         = 0x00020000,
    CREATURE_TYPEFLAGS_IS_SIEGE_WEAPON                   = 0x00040000,
    CREATURE_TYPEFLAGS_PROJECTILE_COLLISION              = 0x00080000, // Projectiles can collide with this creature - interacts with TARGET_DEST_TRAJ
    CREATURE_TYPEFLAGS_HIDE_NAMEPLATE                    = 0x00100000,
    CREATURE_TYPEFLAGS_DO_NOT_PLAY_MOUNTED_ANIMATIONS    = 0x00200000,
    CREATURE_TYPEFLAGS_IS_LINK_ALL                       = 0x00400000,
    CREATURE_TYPEFLAGS_INTERACT_ONLY_WITH_CREATOR        = 0x00800000,
    CREATURE_TYPEFLAGS_DO_NOT_PLAY_UNIT_EVENT_SOUNDS     = 0x01000000,
    CREATURE_TYPEFLAGS_HAS_NO_SHADOW_BLOB                = 0x02000000,
    CREATURE_TYPEFLAGS_TREAT_AS_RAID_UNIT                = 0x04000000, //! Creature can be targeted by spells that require target to be in caster's party/raid
    CREATURE_TYPEFLAGS_FORCE_GOSSIP                      = 0x08000000,
    CREATURE_TYPEFLAGS_DO_NOT_SHEATHE                    = 0x10000000,
    CREATURE_TYPEFLAGS_DO_NOT_TARGET_ON_INTERACTION      = 0x20000000,
    CREATURE_TYPEFLAGS_DO_NOT_RENDER_OBJECT_NAME         = 0x40000000,
    CREATURE_TYPEFLAGS_UNIT_IS_QUEST_BOSS                = 0x80000000  // Not verified
};

enum CreatureTypeFlags2
{
    CREATURE_TYPEFLAGS_2_UNK1           = 0x00000001,
    CREATURE_TYPEFLAGS_2_UNK2           = 0x00000002,
    CREATURE_TYPEFLAGS_2_UNK3           = 0x00000004,
    CREATURE_TYPEFLAGS_2_UNK4           = 0x00000008,
    CREATURE_TYPEFLAGS_2_UNK5           = 0x00000010,
    CREATURE_TYPEFLAGS_2_UNK6           = 0x00000020,
    CREATURE_TYPEFLAGS_2_UNK7           = 0x00000040,
    CREATURE_TYPEFLAGS_2_UNK8           = 0x00000080,
    CREATURE_TYPEFLAGS_2_UNK9           = 0x00000100,
    CREATURE_TYPEFLAGS_2_UNK10          = 0x00000200,
    CREATURE_TYPEFLAGS_2_UNK11          = 0x00000400,
    CREATURE_TYPEFLAGS_2_UNK12          = 0x00000800, // May be skaling level?
    CREATURE_TYPEFLAGS_2_UNK13          = 0x00001000,
};

enum CreatureClassification
{
    CREATURE_CLASSIFICATION_NORMAL       = 0,  // normal mob
    CREATURE_CLASSIFICATION_ELITE        = 1,  // elite mob with golden dragon portrait
    CREATURE_CLASSIFICATION_RARE_ELITE   = 2,  // elite mob with solid silver (steel) dragon portrait
    CREATURE_CLASSIFICATION_WORLDBOSS    = 3,  // elite mob - hide unit level text
    CREATURE_CLASSIFICATION_RARE         = 4,  // normal mob with silver dragon
    CREATURE_CLASSIFICATION_MINUS        = 5,  // Minion of another NPC; does not give experience or reputation, don't have power bar for example
    CREATURE_CLASSIFICATION_TRIVIAL      = 6   // not affect on visual
};

// values based at Holidays.dbc 
enum HolidayIds //< 6.2.2
{
    HOLIDAY_NONE                     = 0,

    HOLIDAY_FIREWORKS_SPECTACULAR    = 62,
    HOLIDAY_FEAST_OF_WINTER_VEIL     = 141,
    HOLIDAY_NOBLEGARDEN              = 181,
    HOLIDAY_CHILDRENS_WEEK           = 201,
    HOLIDAY_FISHING_EXTRAVAGANZA     = 301,
    HOLIDAY_HARVEST_FESTIVAL         = 321,
    HOLIDAY_HALLOWS_END              = 324,
    HOLIDAY_LUNAR_FESTIVAL           = 327,
    HOLIDAY_LOVE_IS_IN_THE_AIR_OLD   = 335,
    HOLIDAY_FIRE_FESTIVAL            = 341,
    HOLIDAY_BREWFEST                 = 372,
    HOLIDAY_PIRATES_DAY              = 398,
    HOLIDAY_PILGRIMS_BOUNTY          = 404,
    HOLIDAY_WOTLK_LAUNCH             = 406,
    HOLIDAY_DAY_OF_DEAD              = 409,
    HOLIDAY_LOVE_IS_IN_THE_AIR       = 423,
    HOLIDAY_KALU_AK_FISHING_DERBY    = 424,
    HOLIDAY_DARKMOON_FAIRE_TEROKKAR  = 479,
    HOLIDAY_ANNIVERSARY_10_YEARS     = 514,
    
    HOLIDAY_TIMEWALKING_BC           = 559,
    HOLIDAY_WEEKEND_APEXIS           = 560,
    HOLIDAY_WEEKEND_PVP_SKIRMISH     = 561,
    HOLIDAY_TIMEWALKING_WOTLK        = 562,
    HOLIDAY_WEEKEND_BATTLEGROUNDS    = 563,
    HOLIDAY_WEEKEND_WOD              = 564,
    HOLIDAY_WEEKEND_PET_BATTLES      = 565,
    HOLIDAY_TIMEWALKING_CATACLYSM    = 587,
    HOLIDAY_TIMEWALKING_PANDARIA     = 643,

    HOLIDAY_TRIAL_OF_STYLE           = 691,
    HOLIDAY_DARKMOON_FAIRE           = 479
};

// QuestSort.dbc (6.0)
enum QuestSort
{
    QUEST_SORT_EPIC                       = 1,
    QUEST_SORT_HALLOWS_END                = 21,
    QUEST_SORT_SEASONAL                   = 22,
    QUEST_SORT_CATACLYSM                  = 23,
    QUEST_SORT_HERBALISM                  = 24,
    QUEST_SORT_BATTLEGROUNDS              = 25,
    QUEST_SORT_DAY_OF_THE_DEAD            = 41,
    QUEST_SORT_WARLOCK                    = 61,
    QUEST_SORT_WARRIOR                    = 81,
    QUEST_SORT_SHAMAN                     = 82,
    QUEST_SORT_FISHING                    = 101,
    QUEST_SORT_BLACKSMITHING              = 121,
    QUEST_SORT_PALADIN                    = 141,
    QUEST_SORT_MAGE                       = 161,
    QUEST_SORT_ROGUE                      = 162,
    QUEST_SORT_ALCHEMY                    = 181,
    QUEST_SORT_LEATHERWORKING             = 182,
    QUEST_SORT_ENGINEERING                = 201,
    QUEST_SORT_TREASURE_MAP               = 221,
    QUEST_SORT_TOURNAMENT                 = 241,
    QUEST_SORT_HUNTER                     = 261,
    QUEST_SORT_PRIEST                     = 262,
    QUEST_SORT_DRUID                      = 263,
    QUEST_SORT_TAILORING                  = 264,
    QUEST_SORT_SPECIAL                    = 284,
    QUEST_SORT_COOKING                    = 304,
    QUEST_SORT_FIRST_AID                  = 324,
    QUEST_SORT_LEGENDARY                  = 344,
    QUEST_SORT_DARKMOON_FAIRE             = 364,
    QUEST_SORT_AHN_QIRAJ_WAR              = 365,
    QUEST_SORT_LUNAR_FESTIVAL             = 366,
    QUEST_SORT_REPUTATION                 = 367,
    QUEST_SORT_INVASION                   = 368,
    QUEST_SORT_MIDSUMMER                  = 369,
    QUEST_SORT_BREWFEST                   = 370,
    QUEST_SORT_INSCRIPTION                = 371,
    QUEST_SORT_DEATH_KNIGHT               = 372,
    QUEST_SORT_JEWELCRAFTING              = 373,
    QUEST_SORT_NOBLEGARDEN                = 374,
    QUEST_SORT_PILGRIMS_BOUNTY            = 375,
    QUEST_SORT_LOVE_IS_IN_THE_AIR         = 376,
    QUEST_SORT_ARCHAEOLOGY                = 377,
    QUEST_SORT_CHILDRENS_WEEK             = 378,
    QUEST_SORT_FIRELANDS_INVASION         = 379,
    QUEST_SORT_THE_ZANDALARI              = 380,
    QUEST_SORT_ELEMENTAL_BONDS            = 381,
    QUEST_SORT_PANDAREN_BREWMASTER        = 391,
    QUEST_SORT_SCENARIO                   = 392,
    QUEST_SORT_BATTLE_PETS                = 394,
    QUEST_SORT_MONK                       = 395,
    QUEST_SORT_LANDFALL                   = 396,
    QUEST_SORT_PANDAREN_CAMPAIGN          = 397,
    QUEST_SORT_RIDING                     = 398,
    QUEST_SORT_BRAWLERS_GUILD             = 399,
    QUEST_SORT_PROVING_GROUNDS            = 400,
    QUEST_SORT_GARRISON_CAMPAIGN          = 401,
    QUEST_SORT_ASSAULT_ON_THE_DARK_PORTAL = 402,
    QUEST_SORT_GARRISON_SUPPORT           = 403,
    QUEST_SORT_LOGGING                    = 404,
    QUEST_SORT_PICKPOCKETING              = 405
};

enum SkillType
{
    SKILL_NONE                     = 0,

    SKILL_FROST                    = 6,
    SKILL_FIRE                     = 8,
    SKILL_ARMS                     = 26,
    SKILL_COMBAT                   = 38,
    SKILL_SUBTLETY                 = 39,
    SKILL_SWORDS                   = 43,
    SKILL_AXES                     = 44,
    SKILL_BOWS                     = 45,
    SKILL_GUNS                     = 46,
    SKILL_BEAST_MASTERY            = 50,
    SKILL_SURVIVAL                 = 51,
    SKILL_MACES                    = 54,
    SKILL_2H_SWORDS                = 55,
    SKILL_HOLY                     = 56,
    SKILL_SHADOW                   = 78,
    SKILL_DEFENSE                  = 95,
    SKILL_LANG_COMMON              = 98,
    SKILL_RACIAL_DWARVEN           = 101,
    SKILL_LANG_ORCISH              = 109,
    SKILL_LANG_DWARVEN             = 111,
    SKILL_LANG_DARNASSIAN          = 113,
    SKILL_LANG_TAURAHE             = 115,
    SKILL_DUAL_WIELD               = 118,
    SKILL_RACIAL_TAUREN            = 124,
    SKILL_ORC_RACIAL               = 125,
    SKILL_RACIAL_NIGHT_ELF         = 126,
    SKILL_FIRST_AID                = 129,
    SKILL_FERAL_COMBAT             = 134,
    SKILL_STAVES                   = 136,
    SKILL_LANG_THALASSIAN          = 137,
    SKILL_LANG_DRACONIC            = 138,
    SKILL_LANG_DEMON_TONGUE        = 139,
    SKILL_LANG_TITAN               = 140,
    SKILL_LANG_OLD_TONGUE          = 141,
    SKILL_SURVIVAL2                = 142,
    SKILL_RIDING_HORSE             = 148,
    SKILL_RIDING_WOLF              = 149,
    SKILL_RIDING_TIGER             = 150,
    SKILL_RIDING_RAM               = 152,
    SKILL_SWIMING                  = 155,
    SKILL_2H_MACES                 = 160,
    SKILL_UNARMED                  = 162,
    SKILL_MARKSMANSHIP             = 163,
    SKILL_BLACKSMITHING            = 164,
    SKILL_LEATHERWORKING           = 165,
    SKILL_ALCHEMY                  = 171,
    SKILL_2H_AXES                  = 172,
    SKILL_DAGGERS                  = 173,
    SKILL_THROWN                   = 176,
    SKILL_HERBALISM                = 182,
    SKILL_GENERIC_DND              = 183,
    SKILL_RETRIBUTION              = 184,
    SKILL_COOKING                  = 185,
    SKILL_MINING                   = 186,
    SKILL_PET_IMP                  = 188,
    SKILL_PET_FELHUNTER            = 189,
    SKILL_TAILORING                = 197,
    SKILL_ENGINEERING              = 202,
    SKILL_PET_SPIDER               = 203,
    SKILL_PET_VOIDWALKER           = 204,
    SKILL_PET_SUCCUBUS             = 205,
    SKILL_PET_INFERNAL             = 206,
    SKILL_PET_DOOMGUARD            = 207,
    SKILL_PET_WOLF                 = 208,
    SKILL_PET_CAT                  = 209,
    SKILL_PET_BEAR                 = 210,
    SKILL_PET_BOAR                 = 211,
    SKILL_PET_CROCILISK            = 212,
    SKILL_PET_CARRION_BIRD         = 213,
    SKILL_PET_CRAB                 = 214,
    SKILL_PET_GORILLA              = 215,
    SKILL_PET_RAPTOR               = 217,
    SKILL_PET_TALLSTRIDER          = 218,
    SKILL_RACIAL_UNDED             = 220,
    SKILL_CROSSBOWS                = 226,
    SKILL_WANDS                    = 228,
    SKILL_POLEARMS                 = 229,
    SKILL_PET_SCORPID              = 236,
    SKILL_ARCANE                   = 237,
    SKILL_PET_TURTLE               = 251,
    SKILL_ASSASSINATION            = 253,
    SKILL_FURY                     = 256,
    SKILL_PROTECTION               = 257,
    SKILL_PROTECTION2              = 267,
    SKILL_PET_TALENTS              = 270,
    SKILL_PLATE_MAIL               = 293,
    SKILL_LANG_GNOMISH             = 313,
    SKILL_LANG_TROLL               = 315,
    SKILL_ENCHANTING               = 333,
    SKILL_DEMONOLOGY               = 354,
    SKILL_AFFLICTION               = 355,
    SKILL_FISHING                  = 356,
    SKILL_ENHANCEMENT              = 373,
    SKILL_RESTORATION              = 374,
    SKILL_ELEMENTAL_COMBAT         = 375,
    SKILL_SKINNING                 = 393,
    SKILL_MAIL                     = 413,
    SKILL_LEATHER                  = 414,
    SKILL_CLOTH                    = 415,
    SKILL_SHIELD                   = 433,
    SKILL_FIST_WEAPONS             = 473,
    SKILL_RIDING_RAPTOR            = 533,
    SKILL_RIDING_MECHANOSTRIDER    = 553,
    SKILL_RIDING_UNDEAD_HORSE      = 554,
    SKILL_RESTORATION2             = 573,
    SKILL_BALANCE                  = 574,
    SKILL_DESTRUCTION              = 593,
    SKILL_HOLY2                    = 594,
    SKILL_DISCIPLINE               = 613,
    SKILL_LOCKPICKING              = 633,
    SKILL_PET_BAT                  = 653,
    SKILL_PET_HYENA                = 654,
    SKILL_PET_BIRD_OF_PREY         = 655,
    SKILL_PET_WIND_SERPENT         = 656,
    SKILL_LANG_GUTTERSPEAK         = 673,
    SKILL_RIDING_KODO              = 713,
    SKILL_RACIAL_TROLL             = 733,
    SKILL_RACIAL_GNOME             = 753,
    SKILL_RACIAL_HUMAN             = 754,
    SKILL_JEWELCRAFTING            = 755,
    SKILL_RACIAL_BLOODELF          = 756,
    SKILL_PET_EVENT_RC             = 758,   // SkillCategory = -1
    SKILL_LANG_DRAENEI             = 759,
    SKILL_RACIAL_DRAENEI           = 760,
    SKILL_PET_FELGUARD             = 761,
    SKILL_RIDING                   = 762,
    SKILL_PET_DRAGONHAWK           = 763,
    SKILL_PET_NETHER_RAY           = 764,
    SKILL_PET_SPOREBAT             = 765,
    SKILL_PET_WARP_STALKER         = 766,
    SKILL_PET_RAVAGER              = 767,
    SKILL_PET_SERPENT              = 768,
    SKILL_INTERNAL                 = 769,
    SKILL_DK_BLOOD                 = 770,
    SKILL_DK_FROST                 = 771,
    SKILL_DK_UNHOLY                = 772,
    SKILL_INSCRIPTION              = 773,
    SKILL_PET_MOTH                 = 775,
    SKILL_RUNEFORGING              = 776,
    SKILL_MOUNTS                   = 777,
    SKILL_COMPANIONS               = 778,
    SKILL_PET_EXOTIC_CHIMAERA      = 780,
    SKILL_PET_EXOTIC_DEVILSAUR     = 781,
    SKILL_PET_GHOUL                = 782,
    SKILL_PET_EXOTIC_SILITHID      = 783,
    SKILL_PET_EXOTIC_WORM          = 784,
    SKILL_PET_WASP                 = 785,
    SKILL_PET_EXOTIC_RHINO         = 786,
    SKILL_PET_EXOTIC_CORE_HOUND    = 787,
    SKILL_PET_EXOTIC_SPIRIT_BEAST  = 788,
    SKILL_RACIAL_WORGEN            = 789,
    SKILL_RACIAL_GOBLIN            = 790,
    SKILL_LANG_WORGEN              = 791,
    SKILL_LANG_GOBLIN              = 792,
    SKILL_ARCHAEOLOGY              = 794,
    SKILL_GENERAL_HUNTER           = 795,
    SKILL_GENERAL_DEATH_KNIGHT     = 796,
    SKILL_GENERAL_ROGUE            = 797,
    SKILL_GENERAL_DRUID            = 798,
    SKILL_GENERAL_MAGE             = 799,
    SKILL_GENERAL_PALADIN          = 800,
    SKILL_GENERAL_SHAMAN           = 801,
    SKILL_GENERAL_WARLOCK          = 802,
    SKILL_GENERAL_WARRIOR          = 803,
    SKILL_GENERAL_PRIEST           = 804,
    SKILL_PET_WATER_ELEMENTAL      = 805,
    SKILL_PET_FOX                  = 808,
    SKILL_ALL_GLYPHS               = 810,
    SKILL_PET_DOG                  = 811,
    SKILL_PET_MONKEY               = 815,
    SKILL_PET_SHALE_SPIDER         = 817,
    SKILL_PET_BEETLE               = 818,
    SKILL_ALL_GUILD_PERKS          = 821,
    SKILL_PET_HYDRA                = 824,
    SKILL_MONK                     = 829,
    SKILL_WARRIOR                  = 840,
    SKILL_WARLOCK                  = 849,
    SKILL_RACIAL_PANDAREN          = 899,
    SKILL_MAGE                     = 904,
    SKILL_LANG_PANDAREN_NEUTRAL    = 905,
    SKILL_LANG_PANDAREN_ALLIANCE   = 906,
    SKILL_LANG_PANDAREN_HORDE      = 907,
    SKILL_ROGUE                    = 921,
    SKILL_SHAMAN                   = 924,
    SKILL_FEL_IMP                  = 927,
    SKILL_VOIDLORD                 = 928,
    SKILL_SHIVARRA                 = 929,
    SKILL_OBSERVER                 = 930,
    SKILL_WRATHGUARD               = 931,
    SKILL_ALL_SPECIALIZATIONS      = 934,
    SKILL_RUNEFORGING_2            = 960,
    SKILL_PET_PRIMAL_FIRE_ELEMENTAL = 962,
    SKILL_PET_PRIMAL_EARTH_ELEMENTAL = 963,
    SKILL_WAY_OF_THE_GRILL         = 975,
    SKILL_WAY_OF_THE_WOK           = 976,
    SKILL_WAY_OF_THE_POT           = 977,
    SKILL_WAY_OF_THE_STEAMER       = 978,
    SKILL_WAY_OF_THE_OVEN          = 979,
    SKILL_WAY_OF_THE_BREW          = 980,
    SKILL_APPRENTICE_COOKING       = 981,
    SKILL_JOURNEYMAN_COOKBOOK      = 982,
    SKILL_PORCUPINE                = 983,
    SKILL_CRANE                    = 984,
    SKILL_WATER_STRIDER            = 985,
    SKILL_PET_EXOTIC_QUILEN        = 986,
    SKILL_PET_GOAT                 = 987,
    SKILL_BASILISK                 = 988,
    SKILL_NO_PLAYERS               = 999,
    SKILL_DIREHORN                 = 1305,
    SKILL_PET_PRIMAL_STORM_ELEMENTAL = 1748,
    SKILL_PET_WATER_MINOR_TALENT_VERSION = 1777,
    SKILL_PET_EXOTIC_HOOK_WASP     = 1818,
    SKILL_PET_RIVERBEAST           = 1819,
    SKILL_UNUSED                   = 1830,
    SKILL_DEMON_HUNTER             = 1848,
    SKILL_LOGGING                  = 1945,
    SKILL_PET_TERRORGUARD          = 1981,
    SKILL_PET_ABYSSAL              = 1982,
    SKILL_PET_STAG                 = 1993,
    SKILL_TRADING_POST             = 2000,
    SKILL_WARGLAIVES               = 2152,
    SKILL_PET_MECHANICAL           = 2189
};

enum SkillCategory
{
    SKILL_CATEGORY_UNK1          = 0,
    SKILL_CATEGORY_ATTRIBUTES    = 5,
    SKILL_CATEGORY_WEAPON        = 6,
    SKILL_CATEGORY_CLASS         = 7,
    SKILL_CATEGORY_ARMOR         = 8,
    SKILL_CATEGORY_SECONDARY     = 9,                       // secondary professions
    SKILL_CATEGORY_LANGUAGES     = 10,
    SKILL_CATEGORY_PROFESSION    = 11,                      // primary professions
    SKILL_CATEGORY_GENERIC       = 12
};

enum TotemCategory
{
    TC_SKINNING_SKIFE_OLD          = 1,
    TC_EARTH_TOTEM                 = 2,
    TC_AIR_TOTEM                   = 3,
    TC_FIRE_TOTEM                  = 4,
    TC_WATER_TOTEM                 = 5,
    TC_COPPER_ROD                  = 6,
    TC_SILVER_ROD                  = 7,
    TC_GOLDEN_ROD                  = 8,
    TC_TRUESILVER_ROD              = 9,
    TC_ARCANITE_ROD                = 10,
    TC_MINING_PICK_OLD             = 11,
    TC_PHILOSOPHERS_STONE          = 12,
    TC_BLACKSMITH_HAMMER_OLD       = 13,
    TC_ARCLIGHT_SPANNER            = 14,
    TC_GYROMATIC_MA                = 15,
    TC_MASTER_TOTEM                = 21,
    TC_FEL_IRON_ROD                = 41,
    TC_ADAMANTITE_ROD              = 62,
    TC_ETERNIUM_ROD                = 63,
    TC_HOLLOW_QUILL                = 81,
    TC_RUNED_AZURITE_ROD           = 101,
    TC_VIRTUOSO_INKING_SET         = 121,
    TC_DRUMS                       = 141,
    TC_GNOMISH_ARMY_KNIFE          = 161,
    TC_BLACKSMITH_HAMMER           = 162,
    TC_MINING_PICK                 = 165,
    TC_SKINNING_KNIFE              = 166,
    TC_HAMMER_PICK                 = 167,
    TC_BLADED_PICKAXE              = 168,
    TC_FLINT_AND_TINDER            = 169,
    TC_RUNED_COBALT_ROD            = 189,
    TC_RUNED_TITANIUM_ROD          = 190,
    TC_RUNED_ELEMENTIUM_ROD        = 209,
    TC_HIGH_POWERED_BOLT_GUN       = 210,
    TC_RUNED_COPPER_ROD            = 230,
    TC_JEWELERS_KIT                = 238,
    TC_ULTIMATE_GNOMISH_ARMY_KNIFE = 250
};

enum UnitDynFlags
{
    UNIT_DYNFLAG_NONE                       = 0x0000,
    UNIT_DYNFLAG_HIDE_MODEL                 = 0x0001, // Object model is not shown with this flag
    UNIT_DYNFLAG_NOT_SELECTABLE_MODEL       = 0x0002,
    UNIT_DYNFLAG_LOOTABLE                   = 0x0004,
    UNIT_DYNFLAG_TRACK_UNIT                 = 0x0008,
    UNIT_DYNFLAG_TAPPED                     = 0x0010, // Lua_UnitIsTapped
    UNIT_DYNFLAG_SPECIALINFO                = 0x0020,
    UNIT_DYNFLAG_REFER_A_FRIEND             = 0x0040,
    UNIT_DYNFLAG_DISABLE_SAME_INTARACT      = 0x0080  // Example: seat on friend mount
};

enum CorpseDynFlags
{
    CORPSE_DYNFLAG_LOOTABLE        = 0x0001
};

enum ArchaeologyFinds
{
    GO_DWARF_FIND            = 204282,
    GO_DRAENEI_FIND          = 207188,
    GO_FOSSIL_FIND           = 206836,
    GO_NIGHT_ELF_FIND        = 203071,
    GO_NERUBIAN_FIND         = 203078,
    GO_ORC_FIND              = 207187,
    GO_TOLVIR_FIND           = 207190,
    GO_TROLL_FIND            = 202655,
    GO_VRYKUL_FIND           = 207189,
    GO_PANDAREN_FIND         = 211163,
    GO_MOGU_FIND             = 211174,
    GO_MANTID_FIND           = 218950,
    GO_DRAENOR_FIND          = 226521,
    GO_ARAKKOA_FIND          = 234105,
    GO_OGRE_FIND             = 234106,
    GO_HIGHMOUNTAIN_TAUREN1  = 246804,
    GO_HIGHMOUNTAIN_TAUREN2  = 268450,
    GO_HIGHBORNE_FIND1       = 246811,
    GO_HIGHBORNE_FIND2       = 268440,
    GO_HIGHBORNE_FIND3       = 268453,
    GO_DEMONIC_FIND1         = 246812,
    GO_DEMONIC_FIND2         = 268451,
    GO_DEMONIC_FIND3         = 268466,
};

enum ArchaeologyBots
{
    GO_FAR_SURVEYBOT    = 206590,
    GO_MEDIUM_SURVEYBOT = 206589,
    GO_CLOSE_SURVEYBOT  = 204272
};

enum WeatherType
{
    WEATHER_TYPE_FINE       = 0,
    WEATHER_TYPE_RAIN       = 1,
    WEATHER_TYPE_SNOW       = 2,
    WEATHER_TYPE_STORM      = 3,
    WEATHER_TYPE_THUNDERS   = 86,
    WEATHER_TYPE_BLACKRAIN  = 90
};

const auto MAX_WEATHER_TYPE = 4;

enum ChatMsg
{
    CHAT_MSG_ADDON                              = 0xFFFFFFFF, // -1
    CHAT_MSG_SYSTEM                             = 0x00,
    CHAT_MSG_SAY                                = 0x01,
    CHAT_MSG_PARTY                              = 0x02,
    CHAT_MSG_RAID                               = 0x03,
    CHAT_MSG_GUILD                              = 0x04,
    CHAT_MSG_OFFICER                            = 0x05,
    CHAT_MSG_YELL                               = 0x06,
    CHAT_MSG_WHISPER                            = 0x07,
    CHAT_MSG_WHISPER_FOREIGN                    = 0x08,
    CHAT_MSG_WHISPER_INFORM                     = 0x09,
    CHAT_MSG_EMOTE                              = 0x0A,
    CHAT_MSG_TEXT_EMOTE                         = 0x0B,
    CHAT_MSG_MONSTER_SAY                        = 0x0C,
    CHAT_MSG_MONSTER_PARTY                      = 0x0D,
    CHAT_MSG_MONSTER_YELL                       = 0x0E,
    CHAT_MSG_MONSTER_WHISPER                    = 0x0F,
    CHAT_MSG_MONSTER_EMOTE                      = 0x10,
    CHAT_MSG_CHANNEL                            = 0x11,
    CHAT_MSG_CHANNEL_JOIN                       = 0x12,
    CHAT_MSG_CHANNEL_LEAVE                      = 0x13,
    CHAT_MSG_CHANNEL_LIST                       = 0x14,
    CHAT_MSG_CHANNEL_NOTICE                     = 0x15,
    CHAT_MSG_CHANNEL_NOTICE_USER                = 0x16,
    CHAT_MSG_AFK                                = 0x17,
    CHAT_MSG_DND                                = 0x18,
    CHAT_MSG_IGNORED                            = 0x19,
    CHAT_MSG_SKILL                              = 0x1A,
    CHAT_MSG_LOOT                               = 0x1B,
    CHAT_MSG_MONEY                              = 0x1C,
    CHAT_MSG_OPENING                            = 0x1D,
    CHAT_MSG_TRADESKILLS                        = 0x1E,
    CHAT_MSG_PET_INFO                           = 0x1F,
    CHAT_MSG_COMBAT_MISC_INFO                   = 0x20,
    CHAT_MSG_COMBAT_XP_GAIN                     = 0x21,
    CHAT_MSG_COMBAT_HONOR_GAIN                  = 0x22,
    CHAT_MSG_COMBAT_FACTION_CHANGE              = 0x23,
    CHAT_MSG_BG_SYSTEM_NEUTRAL                  = 0x24,
    CHAT_MSG_BG_SYSTEM_ALLIANCE                 = 0x25,
    CHAT_MSG_BG_SYSTEM_HORDE                    = 0x26,
    CHAT_MSG_RAID_LEADER                        = 0x27,
    CHAT_MSG_RAID_WARNING                       = 0x28,
    CHAT_MSG_RAID_BOSS_EMOTE                    = 0x29,
    CHAT_MSG_RAID_BOSS_WHISPER                  = 0x2A,
    CHAT_MSG_FILTERED                           = 0x2B,
    CHAT_MSG_RESTRICTED                         = 0x2C,
    CHAT_MSG_BATTLENET                          = 0x2D,
    CHAT_MSG_ACHIEVEMENT                        = 0x2E,
    CHAT_MSG_GUILD_ACHIEVEMENT                  = 0x2F,
    CHAT_MSG_ARENA_POINTS                       = 0x30,
    CHAT_MSG_PARTY_LEADER                       = 0x31,
    CHAT_MSG_TARGETICONS                        = 0x32,
    CHAT_MSG_BN_WHISPER                         = 0x33,
    CHAT_MSG_BN_WHISPER_INFORM                  = 0x34,
    CHAT_MSG_BN_CONVERSATION                    = 0x35,
    CHAT_MSG_BN_CONVERSATION_NOTICE             = 0x36,
    CHAT_MSG_BN_CONVERSATION_LIST               = 0x37,
    CHAT_MSG_BN_INLINE_TOAST_ALERT              = 0x38,
    CHAT_MSG_BN_INLINE_TOAST_BROADCAST          = 0x39,
    CHAT_MSG_BN_INLINE_TOAST_BROADCAST_INFORM   = 0x3A,
    CHAT_MSG_BN_INLINE_TOAST_CONVERSATION       = 0x3B,
    CHAT_MSG_BN_WHISPER_PLAYER_OFFLINE          = 0x3C,
    CHAT_MSG_COMBAT_GUILD_XP_GAIN               = 0x3D,
    // CHAT_MSG_CURRENCY                           = 0x3E,
    // CHAT_MSG_QUEST_BOSS_EMOTE                   = 0x3E,
    CHAT_MSG_INSTANCE_CHAT                      = 0x3E,
    CHAT_MSG_INSTANCE_CHAT_LEADER               = 0x3F,

    MAX_CHAT_MSG_TYPE
};

// Values from ItemPetFood (power of (value-1) used for compare with CreatureFamilyEntry.petDietMask
enum PetDiet
{
    PET_DIET_MEAT       = 1,
    PET_DIET_FISH       = 2,
    PET_DIET_CHEESE     = 3,
    PET_DIET_BREAD      = 4,
    PET_DIET_FUNGAS     = 5,
    PET_DIET_FRUIT      = 6,
    PET_DIET_RAW_MEAT   = 7,
    PET_DIET_RAW_FISH   = 8,

    MAX_PET_DIET
};

const uint8 CHAIN_SPELL_JUMP_RADIUS = 8;

const uint8 GUILD_BANKLOG_MAX_RECORDS = 25;
const uint8 GUILD_EVENTLOG_MAX_RECORDS = 100;
const uint8 GUILD_NEWSLOG_MAX_RECORDS = 250;

enum AiReaction
{
    AI_REACTION_ALERT    = 0,                               // pre-aggro (used in client packet handler)
    AI_REACTION_FRIENDLY = 1,                               // (NOT used in client packet handler)
    AI_REACTION_HOSTILE  = 2,                               // sent on every attack, triggers aggro sound (used in client packet handler)
    AI_REACTION_AFRAID   = 3,                               // seen for polymorph (when AI not in control of self?) (NOT used in client packet handler)
    AI_REACTION_DESTROY  = 4                                // used on object destroy (NOT used in client packet handler)
};

// Diminishing Returns Types
enum DiminishingReturnsType
{
    DRTYPE_NONE         = 0,                                // this spell is not diminished, but may have limited it's duration to 10s
    DRTYPE_PLAYER       = 1,                                // this spell is diminished only when applied on players
    DRTYPE_ALL          = 2                                 // this spell is diminished in every case
};

enum DiminishingLevels
{
    DIMINISHING_LEVEL_1             = 0,
    DIMINISHING_LEVEL_2             = 1,
    DIMINISHING_LEVEL_3             = 2,
    DIMINISHING_LEVEL_IMMUNE        = 3,
    DIMINISHING_LEVEL_4             = 3,
    DIMINISHING_LEVEL_TAUNT_IMMUNE  = 4,
};

// Diminishing Return Groups
enum DiminishingGroup
{
    DIMINISHING_NONE                = 0,
    DIMINISHING_ROOT                = 1,
    DIMINISHING_STUN                = 2,
    DIMINISHING_INCAPACITATE        = 3,
    DIMINISHING_DISORIENT           = 4,
    DIMINISHING_SILENCE             = 5,
    DIMINISHING_AOE_KNOCKBACK       = 6,
    DIMINISHING_TAUNT               = 7,
    DIMINISHING_LIMITONLY           = 8,

    DIMINISHING_MAX
};

enum SummonCategory
{
    SUMMON_CATEGORY_WILD        = 0,
    SUMMON_CATEGORY_ALLY        = 1,
    SUMMON_CATEGORY_PET         = 2,
    SUMMON_CATEGORY_PUPPET      = 3,
    SUMMON_CATEGORY_VEHICLE     = 4,
    SUMMON_CATEGORY_UNK         = 5  // as of patch 3.3.5a only Bone Spike in Icecrown Citadel
    // uses this category
};

enum SummonType
{
    SUMMON_TYPE_NONE        = 0,
    SUMMON_TYPE_PET         = 1,
    SUMMON_TYPE_GUARDIAN    = 2,
    SUMMON_TYPE_MINION      = 3,
    SUMMON_TYPE_TOTEM       = 4,
    SUMMON_TYPE_MINIPET     = 5,
    SUMMON_TYPE_GUARDIAN2   = 6,
    SUMMON_TYPE_WILD2       = 7,
    SUMMON_TYPE_WILD3       = 8,
    SUMMON_TYPE_VEHICLE     = 9,
    SUMMON_TYPE_VEHICLE2    = 10,
    SUMMON_TYPE_LIGHTWELL   = 11,
    SUMMON_TYPE_JEEVES      = 12,
    SUMMON_TYPE_UNK13       = 13,
    SUMMON_TYPE_GATE        = 14,
    SUMMON_TYPE_UNK15       = 15,
    SUMMON_TYPE_STATUE      = 16,
    SUMMON_TYPE_MIRROR_COPY = 17,
    SUMMON_TYPE_BANNER      = 18,
};

enum EventId
{
    EVENT_CHARGE            = 1003,
    EVENT_JUMP              = 1004
};

enum ResponseCodes
{
    RESPONSE_SUCCESS                                       = 0,
    RESPONSE_FAILURE                                       = 1,
    RESPONSE_CANCELLED                                     = 2,
    RESPONSE_DISCONNECTED                                  = 3,
    RESPONSE_FAILED_TO_CONNECT                             = 4,
    RESPONSE_CONNECTED                                     = 5,
    RESPONSE_VERSION_MISMATCH                              = 6,

    CSTATUS_CONNECTING                                     = 7,
    CSTATUS_NEGOTIATING_SECURITY                           = 8,
    CSTATUS_NEGOTIATION_COMPLETE                           = 9,
    CSTATUS_NEGOTIATION_FAILED                             = 10,
    CSTATUS_AUTHENTICATING                                 = 11,

    REALM_LIST_IN_PROGRESS                                 = 12,
    REALM_LIST_SUCCESS                                     = 13,
    REALM_LIST_FAILED                                      = 14,
    REALM_LIST_INVALID                                     = 15,
    REALM_LIST_REALM_NOT_FOUND                             = 16,

    ACCOUNT_CREATE_IN_PROGRESS                             = 17,
    ACCOUNT_CREATE_SUCCESS                                 = 18,
    ACCOUNT_CREATE_FAILED                                  = 19,

    CHAR_LIST_RETRIEVING                                   = 20,
    CHAR_LIST_RETRIEVED                                    = 21,
    CHAR_LIST_FAILED                                       = 22,

    CHAR_CREATE_IN_PROGRESS                                = 23,
    CHAR_CREATE_SUCCESS                                    = 24,
    CHAR_CREATE_ERROR                                      = 25,
    CHAR_CREATE_FAILED                                     = 26,
    CHAR_CREATE_NAME_IN_USE                                = 27,
    CHAR_CREATE_DISABLED                                   = 28,
    CHAR_CREATE_PVP_TEAMS_VIOLATION                        = 29,
    CHAR_CREATE_SERVER_LIMIT                               = 30,
    CHAR_CREATE_ACCOUNT_LIMIT                              = 31,
    CHAR_CREATE_SERVER_QUEUE                               = 32,
    CHAR_CREATE_ONLY_EXISTING                              = 33,
    CHAR_CREATE_EXPANSION                                  = 34,
    CHAR_CREATE_EXPANSION_CLASS                            = 35,
    CHAR_CREATE_LEVEL_REQUIREMENT                          = 36,
    CHAR_CREATE_UNIQUE_CLASS_LIMIT                         = 37,
    CHAR_CREATE_CHARACTER_IN_GUILD                         = 38,
    CHAR_CREATE_RESTRICTED_RACECLASS                       = 39,
    CHAR_CREATE_CHARACTER_CHOOSE_RACE                      = 40,
    CHAR_CREATE_CHARACTER_ARENA_LEADER                     = 41,
    CHAR_CREATE_CHARACTER_DELETE_MAIL                      = 42,
    CHAR_CREATE_CHARACTER_SWAP_FACTION                     = 43,
    CHAR_CREATE_CHARACTER_RACE_ONLY                        = 44,
    CHAR_CREATE_CHARACTER_GOLD_LIMIT                       = 45,
    CHAR_CREATE_FORCE_LOGIN                                = 46,
    CHAR_CREATE_TRIAL                                      = 47,
    CHAR_CREATE_TIMEOUT                                    = 48,
    CHAR_CREATE_THROTTLE                                   = 49,
    CHAR_CREATE_ALLIED_RACE_ACHIEVEMENT                    = 50,
    CHAR_CREATE_LEVEL_REQUIREMENT_DEMON_HUNTER             = 51,

    CHAR_DELETE_IN_PROGRESS                                = 52,
    CHAR_DELETE_SUCCESS                                    = 53,
    CHAR_DELETE_FAILED                                     = 54,
    CHAR_DELETE_FAILED_LOCKED_FOR_TRANSFER                 = 55,
    CHAR_DELETE_FAILED_GUILD_LEADER                        = 56,
    CHAR_DELETE_FAILED_ARENA_CAPTAIN                       = 57,
    CHAR_DELETE_FAILED_HAS_HEIRLOOM_OR_MAIL                = 58,
    CHAR_DELETE_FAILED_UPGRADE_IN_PROGRESS                 = 59,
    CHAR_DELETE_FAILED_HAS_WOW_TOKEN                       = 60,
    CHAR_DELETE_FAILED_VAS_TRANSACTION_IN_PROGRESS         = 61,

    CHAR_LOGIN_IN_PROGRESS                                 = 62,
    CHAR_LOGIN_SUCCESS                                     = 63,
    CHAR_LOGIN_NO_WORLD                                    = 64,
    CHAR_LOGIN_DUPLICATE_CHARACTER                         = 65,
    CHAR_LOGIN_NO_INSTANCES                                = 66,
    CHAR_LOGIN_FAILED                                      = 67,
    CHAR_LOGIN_DISABLED                                    = 68,
    CHAR_LOGIN_NO_CHARACTER                                = 69,
    CHAR_LOGIN_LOCKED_FOR_TRANSFER                         = 70,
    CHAR_LOGIN_LOCKED_BY_BILLING                           = 71,
    CHAR_LOGIN_LOCKED_BY_MOBILE_AH                         = 72,
    CHAR_LOGIN_TEMPORARY_GM_LOCK                           = 73,
    CHAR_LOGIN_LOCKED_BY_CHARACTER_UPGRADE                 = 74,
    CHAR_LOGIN_LOCKED_BY_REVOKED_CHARACTER_UPGRADE         = 75,
    CHAR_LOGIN_LOCKED_BY_REVOKED_VAS_TRANSACTION           = 76,
    CHAR_LOGIN_LOCKED_BY_RESTRICTION                       = 77,

    CHAR_NAME_SUCCESS                                      = 78,
    CHAR_NAME_FAILURE                                      = 79,
    CHAR_NAME_NO_NAME                                      = 80,
    CHAR_NAME_TOO_SHORT                                    = 81,
    CHAR_NAME_TOO_LONG                                     = 82,
    CHAR_NAME_INVALID_CHARACTER                            = 83,
    CHAR_NAME_MIXED_LANGUAGES                              = 84,
    CHAR_NAME_PROFANE                                      = 85,
    CHAR_NAME_RESERVED                                     = 86,
    CHAR_NAME_INVALID_APOSTROPHE                           = 87,
    CHAR_NAME_MULTIPLE_APOSTROPHES                         = 88,
    CHAR_NAME_THREE_CONSECUTIVE                            = 89,
    CHAR_NAME_INVALID_SPACE                                = 90,
    CHAR_NAME_CONSECUTIVE_SPACES                           = 91,
    CHAR_NAME_RUSSIAN_CONSECUTIVE_SILENT_CHARACTERS        = 92,
    CHAR_NAME_RUSSIAN_SILENT_CHARACTER_AT_BEGINNING_OR_END = 93,
    CHAR_NAME_DECLENSION_DOESNT_MATCH_BASE_NAME            = 94
};


/// Ban function modes
enum BanMode
{
    BAN_ACCOUNT,
    BAN_CHARACTER,
    BAN_IP
};

/// Ban function return codes
enum BanReturn
{
    BAN_SUCCESS,
    BAN_SYNTAX_ERROR,
    BAN_NOTFOUND
};

const uint8 MAX_ARENA_SLOT = 3;                                    // 0..2 slots
const uint8 MAX_BRACKET_SLOT = 4;

enum MailResponseType
{
    MAIL_SEND               = 0,
    MAIL_MONEY_TAKEN        = 1,
    MAIL_ITEM_TAKEN         = 2,
    MAIL_RETURNED_TO_SENDER = 3,
    MAIL_DELETED            = 4,
    MAIL_MADE_PERMANENT     = 5
};

enum MailResponseResult
{
    MAIL_OK                            = 0,
    MAIL_ERR_EQUIP_ERROR               = 1,
    MAIL_ERR_CANNOT_SEND_TO_SELF       = 2,
    MAIL_ERR_NOT_ENOUGH_MONEY          = 3,
    MAIL_ERR_RECIPIENT_NOT_FOUND       = 4,
    MAIL_ERR_NOT_YOUR_TEAM             = 5,
    MAIL_ERR_INTERNAL_ERROR            = 6,
    MAIL_ERR_DISABLED_FOR_TRIAL_ACC    = 14,
    MAIL_ERR_RECIPIENT_CAP_REACHED     = 15,
    MAIL_ERR_CANT_SEND_WRAPPED_COD     = 16,
    MAIL_ERR_MAIL_AND_CHAT_SUSPENDED   = 17,
    MAIL_ERR_TOO_MANY_ATTACHMENTS      = 18,
    MAIL_ERR_MAIL_ATTACHMENT_INVALID   = 19,
    MAIL_ERR_ITEM_HAS_EXPIRED          = 21
};

enum SpellFamilyNames
{
    SPELLFAMILY_GENERIC     = 0,
    SPELLFAMILY_EVENTS      = 1,
    SPELLFAMILY_MAGE        = 3,
    SPELLFAMILY_WARRIOR     = 4,
    SPELLFAMILY_WARLOCK     = 5,
    SPELLFAMILY_PRIEST      = 6,
    SPELLFAMILY_DRUID       = 7,
    SPELLFAMILY_ROGUE       = 8,
    SPELLFAMILY_HUNTER      = 9,
    SPELLFAMILY_PALADIN     = 10,
    SPELLFAMILY_SHAMAN      = 11,
    SPELLFAMILY_UNK2        = 12,
    SPELLFAMILY_POTION      = 13,
    SPELLFAMILY_DEATHKNIGHT = 15,
    SPELLFAMILY_PET         = 17,
    SPELLFAMILY_TOTEMS      = 50,
    SPELLFAMILY_MONK        = 53,
    SPELLFAMILY_PET_ABILITY = 57,
    SPELLFAMILY_UNK66       = 66,
    SPELLFAMILY_UNK71       = 71,
    SPELLFAMILY_UNK78       = 78,
    SPELLFAMILY_UNK91       = 91,
    SPELLFAMILY_UNK100      = 100,
    SPELLFAMILY_DEMON_HUNTER = 107,
};

// stored in character_pet.slot
enum PetSlot
{
    //Some not-in-db slots
    PET_SLOT_FULL_LIST              =  -4,        //Used when there is no slot free for tameing
    PET_SLOT_UNK_SLOT               =  -3,        //Used in some scripts.

    //Hunter pet slots, sended to client at stable.
    PET_SLOT_HUNTER_FIRST           =   0,        //PetType == HUNTER_PET
    PET_SLOT_HUNTER_LAST            =   4,        //PetType == HUNTER_PET
    PET_SLOT_STABLE_FIRST           =   5,
    PET_SLOT_STABLE_LAST            =  55,

    //Non-hunter pet slot
    PET_SLOT_OTHER_PET              = 56,        // PetType != HUNTER_PET
    PET_SLOT_LAST                                // For iteration
};

const uint8 MAX_PET_STABLES = PET_SLOT_STABLE_LAST;

enum TradeStatus
{
    TRADE_STATUS_PLAYER_BUSY           = 0,
    TRADE_STATUS_PROPOSED              = 1,
    TRADE_STATUS_INITIATED             = 2,
    TRADE_STATUS_CANCELLED             = 3,
    TRADE_STATUS_ACCEPTED              = 4,
    TRADE_STATUS_ALREADY_TRADING       = 5,
    TRADE_STATUS_NO_TARGET             = 6,
    TRADE_STATUS_UNACCEPTED            = 7,
    TRADE_STATUS_COMPLETE              = 8,
    TRADE_STATUS_STATE_CHANGED         = 9,
    TRADE_STATUS_TOO_FAR_AWAY          = 10,
    TRADE_STATUS_WRONG_FACTION         = 11,
    TRADE_STATUS_FAILED                = 12,
    TRADE_STATUS_PETITION              = 13,
    TRADE_STATUS_PLAYER_IGNORED        = 14,
    TRADE_STATUS_STUNNED               = 15,
    TRADE_STATUS_TARGET_STUNNED        = 16,
    TRADE_STATUS_DEAD                  = 17,
    TRADE_STATUS_TARGET_DEAD           = 18,
    TRADE_STATUS_LOGGING_OUT           = 19,
    TRADE_STATUS_TARGET_LOGGING_OUT    = 20,
    TRADE_STATUS_RESTRICTED_ACCOUNT    = 21,
    TRADE_STATUS_WRONG_REALM           = 22,
    TRADE_STATUS_NOT_ON_TAPLIST        = 23,
    TRADE_STATUS_CURRENCY_NOT_TRADABLE = 24,
    TRADE_STATUS_NOT_ENOUGH_CURRENCY   = 25,
    TRADE_STATUS_HAS_RESTRICTION       = 26,

};

enum XPColorChar
{
    XP_RED,
    XP_ORANGE,
    XP_YELLOW,
    XP_GREEN,
    XP_GRAY
};

enum RemoveMethod
{
    GROUP_REMOVEMETHOD_DEFAULT  = 0,
    GROUP_REMOVEMETHOD_KICK     = 1,
    GROUP_REMOVEMETHOD_LEAVE    = 2,
    GROUP_REMOVEMETHOD_KICK_LFG = 3,
};

enum ActivateTaxiReply
{
    ERR_TAXIOK                      = 0,
    ERR_TAXIUNSPECIFIEDSERVERERROR  = 1,
    ERR_TAXINOSUCHPATH              = 2,
    ERR_TAXINOTENOUGHMONEY          = 3,
    ERR_TAXITOOFARAWAY              = 4,
    ERR_TAXINOVENDORNEARBY          = 5,
    ERR_TAXINOTVISITED              = 6,
    ERR_TAXIPLAYERBUSY              = 7,
    ERR_TAXIPLAYERALREADYMOUNTED    = 8,
    ERR_TAXIPLAYERSHAPESHIFTED      = 9,
    ERR_TAXIPLAYERMOVING            = 10,
    ERR_TAXISAMENODE                = 11,
    ERR_TAXINOTSTANDING             = 12
};

enum TaxiNodeStatus
{
    TAXISTATUS_NOT_ELIGIBLE     = 0,
    TAXISTATUS_LEARNED          = 1,
    TAXISTATUS_UNLEARNED        = 2,
    TAXISTATUS_NONE             = 3
};

enum ProfessionUI
{
    MAX_PRIMARY_PROFESSIONS = 2,
    MAX_SECONDARY_SKILLS = 5
};

constexpr auto VOID_STORAGE_UNLOCK = 100 * GOLD;
constexpr auto VOID_STORAGE_STORE_ITEM  = 10 * GOLD;
const uint8 VOID_STORAGE_MAX_DEPOSIT = 9;
const uint8 VOID_STORAGE_MAX_WITHDRAW = 9;
const uint8 VOID_STORAGE_MAX_SLOT = 160;

enum VoidTransferError
{
    VOID_TRANSFER_ERROR_NO_ERROR          = 0,
    VOID_TRANSFER_ERROR_INTERNAL_ERROR_1  = 1,
    VOID_TRANSFER_ERROR_INTERNAL_ERROR_2  = 2,
    VOID_TRANSFER_ERROR_FULL              = 3,
    VOID_TRANSFER_ERROR_INTERNAL_ERROR_3  = 4,
    VOID_TRANSFER_ERROR_INTERNAL_ERROR_4  = 5,
    VOID_TRANSFER_ERROR_NOT_ENOUGH_MONEY  = 6,
    VOID_TRANSFER_ERROR_INVENTORY_FULL    = 7,
    VOID_TRANSFER_ERROR_INTERNAL_ERROR_5  = 8,
    VOID_TRANSFER_ERROR_TRANSFER_UNKNOWN  = 9
};

enum ChallengeMode
{
    CHALLENGE_NOT_IN_TIMER  = 0,
    CHALLENGE_TIMER_LEVEL_1 = 1,
    CHALLENGE_TIMER_LEVEL_2 = 2,
    CHALLENGE_TIMER_LEVEL_3 = 3
};

enum TimerType : uint32
{
    WORLD_TIMER_TYPE_PVP            = 0,
    WORLD_TIMER_TYPE_CHALLENGE_MODE = 1,
    WORLD_TIMER_TIMER_TYPE_PROVING_GROUND = 2,
};

enum LossOfControlType
{
    LOC_NONE              = 0,
    LOC_POSSESS           = 1,
    LOC_CONFUSE           = 2,
    LOC_CHARM             = 3,
    LOC_FEAR              = 4,
    LOC_STUN              = 5,
    LOC_PACIFY            = 6,
    LOC_ROOT              = 7,
    LOC_SILENCE           = 8,
    LOC_PACIFYSILENCE     = 9,
    LOC_DISARM            = 10,
    LOC_SCHOOL_INTERRUPT  = 11,
    LOC_STUN_MECHANIC     = 12,
    LOC_FEAR_MECHANIC     = 13,
    LOC_SILENCE_HARMFUL   = 14
};

enum TokenResult
{
    TOKEN_RESULT_SUCCESS                        = 0,
    TOKEN_RESULT_ERROR_DISABLED                 = 1,
    TOKEN_RESULT_ERROR_OTHER                    = 2,
    TOKEN_RESULT_ERROR_NONE_FOR_SALE            = 3,
    TOKEN_RESULT_ERROR_TOO_MANY_TOKENS          = 4,
    TOKEN_RESULT_SUCCESS_NO                     = 5,
    TOKEN_RESULT_ERROR_TRANSACTION_IN_PROGRESS  = 6,
    TOKEN_RESULT_ERROR_AUCTIONABLE_TOKEN_OWNED  = 7,
    TOKEN_RESULT_ERROR_TRIAL_RESTRICTED         = 8
};

enum CharacterUndeleteResult
{
    CHARACTER_UNDELETE_RESULT_OK = 0,
    CHARACTER_UNDELETE_RESULT_ERROR_COOLDOWN = 1,
    CHARACTER_UNDELETE_RESULT_ERROR_CHAR_CREATE = 2,
    CHARACTER_UNDELETE_RESULT_ERROR_DISABLED = 3,
    CHARACTER_UNDELETE_RESULT_ERROR_NAME_TAKEN_BY_THIS_ACCOUNT = 4,
    CHARACTER_UNDELETE_RESULT_ERROR_UNKNOWN = 5
};

enum MountResultEnum : uint32
{
    MOUNT_RESULT_INVALID_MOUNT_TREE = 0,
    MOUNT_RESULT_TOO_FAR_AWAY       = 1,
    MOUNT_RESULT_ALREADY_MOUNTED    = 2,
    MOUNT_RESULT_NOT_MOUNTABLE      = 3,
    MOUNT_RESULT_NOT_YOUR_PET       = 4,
    MOUNT_RESULT_OTHER              = 5,
    MOUNT_RESULT_LOOTING            = 6,
    MOUNT_RESULT_RACE_CANT_MOUNT    = 7,
    MOUNT_RESULT_SHAPESHITED        = 8,
    MOUNT_RESULT_FORCE_DISMOUNT     = 9,
    MOUNT_RESULT_OK                 = 10
};

enum RespecType
{
    RESPEC_TYPE_TALENTS     = 0,
    RESPEC_TYPE_SPEC        = 1,
    RESPEC_TYPE_GLYPH       = 2
};

enum BattleGroundCapturePointState : int8
{
    NODE_STATE_NONE                 = 0,
    NODE_STATE_NEUTRAL              = 1,

    NODE_STATE_HORDE_ASSAULT        = 2,
    NODE_STATE_ALLIANCE_ASSAULT     = 3,

    NODE_STATE_HORDE_CAPTURE        = 4,
    NODE_STATE_ALLIANCE_CAPTURE     = 5,
};

enum StableResultCode : uint8
{
    STABLE_ERR_NONE                 = 0x00, // does nothing, just resets stable states
    STABLE_ERR_MONEY                = 0x01, // "you don't have enough money"
    STABLE_ERR_INVALID_SLOT         = 0x03,
    STABLE_ERR_STABLE               = 0x06, // currently used in most fail cases
    STABLE_SUCCESS_STABLE           = 0x08, // stable success
    STABLE_SUCCESS_UNSTABLE         = 0x09, // unstable/swap success
    STABLE_SUCCESS_BUY_SLOT         = 0x0A, // buy slot success
    STABLE_ERR_EXOTIC               = 0x0B, // "you are unable to control exotic creatures"
    STABLE_ERR_INTERNAL             = 0x0C
};

enum class UIErrors : uint32
{
    ERR_SYSTEM                                              = 0,
    ERR_INV_FULL                                            = 1,
    ERR_BANK_FULL                                           = 2,
    ERR_CANT_EQUIP_LEVEL_I                                  = 3,
    ERR_CANT_EQUIP_SKILL                                    = 4,
    ERR_CANT_EQUIP_EVER                                     = 5,
    ERR_CANT_EQUIP_RANK                                     = 6,
    ERR_CANT_EQUIP_RATING                                   = 7,
    ERR_CANT_EQUIP_REPUTATION                               = 8,
    ERR_PROFICIENCY_NEEDED                                  = 9,
    ERR_WRONG_SLOT                                          = 10,
    ERR_CANT_EQUIP_NEED_TALENT                              = 11,
    ERR_BAG_FULL                                            = 12,
    ERR_INTERNAL_BAG_ERROR                                  = 13,
    ERR_DESTROY_NONEMPTY_BAG                                = 14,
    ERR_BAG_IN_BAG                                          = 15,
    ERR_TOO_MANY_SPECIAL_BAGS                               = 16,
    ERR_TRADE_EQUIPPED_BAG                                  = 17,
    ERR_AMMO_ONLY                                           = 18,
    ERR_NO_SLOT_AVAILABLE                                   = 19,
    ERR_WRONG_BAG_TYPE                                      = 20,
    ERR_ITEM_MAX_COUNT                                      = 21,
    ERR_NOT_EQUIPPABLE                                      = 22,
    ERR_CANT_STACK                                          = 23,
    ERR_CANT_SWAP                                           = 24,
    ERR_SLOT_EMPTY                                          = 25,
    ERR_ITEM_NOT_FOUND                                      = 26,
    ERR_TOO_FEW_TO_SPLIT                                    = 27,
    ERR_SPLIT_FAILED                                        = 28,
    ERR_NOT_A_BAG                                           = 29,
    ERR_NOT_OWNER                                           = 30,
    ERR_ONLY_ONE_QUIVER                                     = 31,
    ERR_NO_BANK_SLOT                                        = 32,
    ERR_NO_BANK_HERE                                        = 33,
    ERR_ITEM_LOCKED                                         = 34,
    ERR_2HANDED_EQUIPPED                                    = 35,
    ERR_VENDOR_NOT_INTERESTED                               = 36,
    ERR_VENDOR_HATES_YOU                                    = 37,
    ERR_VENDOR_SOLD_OUT                                     = 38,
    ERR_VENDOR_TOO_FAR                                      = 39,
    ERR_VENDOR_DOESNT_BUY                                   = 40,
    ERR_NOT_ENOUGH_MONEY                                    = 41,
    ERR_RECEIVE_ITEM_S                                      = 42,
    ERR_DROP_BOUND_ITEM                                     = 43,
    ERR_TRADE_BOUND_ITEM                                    = 44,
    ERR_TRADE_QUEST_ITEM                                    = 45,
    ERR_TRADE_TEMP_ENCHANT_BOUND                            = 46,
    ERR_TRADE_GROUND_ITEM                                   = 47,
    ERR_TRADE_BAG                                           = 48,
    ERR_SPELL_FAILED_S                                      = 49,
    ERR_ITEM_COOLDOWN                                       = 50,
    ERR_POTION_COOLDOWN                                     = 51,
    ERR_FOOD_COOLDOWN                                       = 52,
    ERR_SPELL_COOLDOWN                                      = 53,
    ERR_ABILITY_COOLDOWN                                    = 54,
    ERR_SPELL_ALREADY_KNOWN_S                               = 55,
    ERR_PET_SPELL_ALREADY_KNOWN_S                           = 56,
    ERR_PROFICIENCY_GAINED_S                                = 57,
    ERR_SKILL_GAINED_S                                      = 58,
    ERR_SKILL_UP_SI                                         = 59,
    ERR_LEARN_SPELL_S                                       = 60,
    ERR_LEARN_ABILITY_S                                     = 61,
    ERR_LEARN_PASSIVE_S                                     = 62,
    ERR_LEARN_RECIPE_S                                      = 63,
    ERR_LEARN_COMPANION_S                                   = 64,
    ERR_LEARN_MOUNT_S                                       = 65,
    ERR_LEARN_TOY_S                                         = 66,
    ERR_LEARN_HEIRLOOM_S                                    = 67,
    ERR_LEARN_TRANSMOG_S                                    = 68,
    ERR_COMPLETED_TRANSMOG_SET_S                            = 69,
    ERR_REVOKE_TRANSMOG_S                                   = 70,
    ERR_INVITE_PLAYER_S                                     = 71,
    ERR_INVITE_SELF                                         = 72,
    ERR_INVITED_TO_GROUP_SS                                 = 73,
    ERR_INVITED_ALREADY_IN_GROUP_SS                         = 74,
    ERR_ALREADY_IN_GROUP_S                                  = 75,
    ERR_CROSS_REALM_RAID_INVITE                             = 76,
    ERR_PLAYER_BUSY_S                                       = 77,
    ERR_NEW_LEADER_S                                        = 78,
    ERR_NEW_LEADER_YOU                                      = 79,
    ERR_NEW_GUIDE_S                                         = 80,
    ERR_NEW_GUIDE_YOU                                       = 81,
    ERR_LEFT_GROUP_S                                        = 82,
    ERR_LEFT_GROUP_YOU                                      = 83,
    ERR_GROUP_DISBANDED                                     = 84,
    ERR_DECLINE_GROUP_S                                     = 85,
    ERR_JOINED_GROUP_S                                      = 86,
    ERR_UNINVITE_YOU                                        = 87,
    ERR_BAD_PLAYER_NAME_S                                   = 88,
    ERR_NOT_IN_GROUP                                        = 89,
    ERR_TARGET_NOT_IN_GROUP_S                               = 90,
    ERR_TARGET_NOT_IN_INSTANCE_S                            = 91,
    ERR_NOT_IN_INSTANCE_GROUP                               = 92,
    ERR_GROUP_FULL                                          = 93,
    ERR_NOT_LEADER                                          = 94,
    ERR_PLAYER_DIED_S                                       = 95,
    ERR_GUILD_CREATE_S                                      = 96,
    ERR_GUILD_INVITE_S                                      = 97,
    ERR_INVITED_TO_GUILD_SSS                                = 98,
    ERR_ALREADY_IN_GUILD_S                                  = 99,
    ERR_ALREADY_INVITED_TO_GUILD_S                          = 100,
    ERR_INVITED_TO_GUILD                                    = 101,
    ERR_ALREADY_IN_GUILD                                    = 102,
    ERR_GUILD_ACCEPT                                        = 103,
    ERR_GUILD_DECLINE_S                                     = 104,
    ERR_GUILD_DECLINE_AUTO_S                                = 105,
    ERR_GUILD_PERMISSIONS                                   = 106,
    ERR_GUILD_JOIN_S                                        = 107,
    ERR_GUILD_FOUNDER_S                                     = 108,
    ERR_GUILD_PROMOTE_SSS                                   = 109,
    ERR_GUILD_DEMOTE_SS                                     = 110,
    ERR_GUILD_DEMOTE_SSS                                    = 111,
    ERR_GUILD_INVITE_SELF                                   = 112,
    ERR_GUILD_QUIT_S                                        = 113,
    ERR_GUILD_LEAVE_S                                       = 114,
    ERR_GUILD_REMOVE_SS                                     = 115,
    ERR_GUILD_REMOVE_SELF                                   = 116,
    ERR_GUILD_DISBAND_S                                     = 117,
    ERR_GUILD_DISBAND_SELF                                  = 118,
    ERR_GUILD_LEADER_S                                      = 119,
    ERR_GUILD_LEADER_SELF                                   = 120,
    ERR_GUILD_PLAYER_NOT_FOUND_S                            = 121,
    ERR_GUILD_PLAYER_NOT_IN_GUILD_S                         = 122,
    ERR_GUILD_PLAYER_NOT_IN_GUILD                           = 123,
    ERR_GUILD_CANT_PROMOTE_S                                = 124,
    ERR_GUILD_CANT_DEMOTE_S                                 = 125,
    ERR_GUILD_NOT_IN_A_GUILD                                = 126,
    ERR_GUILD_INTERNAL                                      = 127,
    ERR_GUILD_LEADER_IS_S                                   = 128,
    ERR_GUILD_LEADER_CHANGED_SS                             = 129,
    ERR_GUILD_DISBANDED                                     = 130,
    ERR_GUILD_NOT_ALLIED                                    = 131,
    ERR_GUILD_LEADER_LEAVE                                  = 132,
    ERR_GUILD_RANKS_LOCKED                                  = 133,
    ERR_GUILD_RANK_IN_USE                                   = 134,
    ERR_GUILD_RANK_TOO_HIGH_S                               = 135,
    ERR_GUILD_RANK_TOO_LOW_S                                = 136,
    ERR_GUILD_NAME_EXISTS_S                                 = 137,
    ERR_GUILD_WITHDRAW_LIMIT                                = 138,
    ERR_GUILD_NOT_ENOUGH_MONEY                              = 139,
    ERR_GUILD_TOO_MUCH_MONEY                                = 140,
    ERR_GUILD_BANK_CONJURED_ITEM                            = 141,
    ERR_GUILD_BANK_EQUIPPED_ITEM                            = 142,
    ERR_GUILD_BANK_BOUND_ITEM                               = 143,
    ERR_GUILD_BANK_QUEST_ITEM                               = 144,
    ERR_GUILD_BANK_WRAPPED_ITEM                             = 145,
    ERR_GUILD_BANK_FULL                                     = 146,
    ERR_GUILD_BANK_WRONG_TAB                                = 147,
    ERR_NO_GUILD_CHARTER                                    = 148,
    ERR_OUT_OF_RANGE                                        = 149,
    ERR_PLAYER_DEAD                                         = 150,
    ERR_CLIENT_LOCKED_OUT                                   = 151,
    ERR_KILLED_BY_S                                         = 152,
    ERR_LOOT_LOCKED                                         = 153,
    ERR_LOOT_TOO_FAR                                        = 154,
    ERR_LOOT_DIDNT_KILL                                     = 155,
    ERR_LOOT_BAD_FACING                                     = 156,
    ERR_LOOT_NOTSTANDING                                    = 157,
    ERR_LOOT_STUNNED                                        = 158,
    ERR_LOOT_NO_UI                                          = 159,
    ERR_LOOT_WHILE_INVULNERABLE                             = 160,
    ERR_NO_LOOT                                             = 161,
    ERR_QUEST_ACCEPTED_S                                    = 162,
    ERR_QUEST_COMPLETE_S                                    = 163,
    ERR_QUEST_FAILED_S                                      = 164,
    ERR_QUEST_FAILED_BAG_FULL_S                             = 165,
    ERR_QUEST_FAILED_MAX_COUNT_S                            = 166,
    ERR_QUEST_FAILED_LOW_LEVEL                              = 167,
    ERR_QUEST_FAILED_MISSING_ITEMS                          = 168,
    ERR_QUEST_FAILED_WRONG_RACE                             = 169,
    ERR_QUEST_FAILED_NOT_ENOUGH_MONEY                       = 170,
    ERR_QUEST_FAILED_EXPANSION                              = 171,
    ERR_QUEST_ONLY_ONE_TIMED                                = 172,
    ERR_QUEST_NEED_PREREQS                                  = 173,
    ERR_QUEST_NEED_PREREQS_CUSTOM                           = 174,
    ERR_QUEST_ALREADY_ON                                    = 175,
    ERR_QUEST_ALREADY_DONE                                  = 176,
    ERR_QUEST_ALREADY_DONE_DAILY                            = 177,
    ERR_QUEST_HAS_IN_PROGRESS                               = 178,
    ERR_QUEST_REWARD_EXP_I                                  = 179,
    ERR_QUEST_REWARD_MONEY_S                                = 180,
    ERR_QUEST_MUST_CHOOSE                                   = 181,
    ERR_QUEST_LOG_FULL                                      = 182,
    ERR_COMBAT_DAMAGE_SSI                                   = 183,
    ERR_INSPECT_S                                           = 184,
    ERR_CANT_USE_ITEM                                       = 185,
    ERR_CANT_USE_ITEM_IN_ARENA                              = 186,
    ERR_CANT_USE_ITEM_IN_RATED_BATTLEGROUND                 = 187,
    ERR_MUST_EQUIP_ITEM                                     = 188,
    ERR_PASSIVE_ABILITY                                     = 189,
    ERR_2HSKILLNOTFOUND                                     = 190,
    ERR_NO_ATTACK_TARGET                                    = 191,
    ERR_INVALID_ATTACK_TARGET                               = 192,
    ERR_ATTACK_PVP_TARGET_WHILE_UNFLAGGED                   = 193,
    ERR_ATTACK_STUNNED                                      = 194,
    ERR_ATTACK_PACIFIED                                     = 195,
    ERR_ATTACK_MOUNTED                                      = 196,
    ERR_ATTACK_FLEEING                                      = 197,
    ERR_ATTACK_CONFUSED                                     = 198,
    ERR_ATTACK_CHARMED                                      = 199,
    ERR_ATTACK_DEAD                                         = 200,
    ERR_ATTACK_PREVENTED_BY_MECHANIC_S                      = 201,
    ERR_ATTACK_CHANNEL                                      = 202,
    ERR_TAXISAMENODE                                        = 203,
    ERR_TAXINOSUCHPATH                                      = 204,
    ERR_TAXIUNSPECIFIEDSERVERERROR                          = 205,
    ERR_TAXINOTENOUGHMONEY                                  = 206,
    ERR_TAXITOOFARAWAY                                      = 207,
    ERR_TAXINOVENDORNEARBY                                  = 208,
    ERR_TAXINOTVISITED                                      = 209,
    ERR_TAXIPLAYERBUSY                                      = 210,
    ERR_TAXIPLAYERALREADYMOUNTED                            = 211,
    ERR_TAXIPLAYERSHAPESHIFTED                              = 212,
    ERR_TAXIPLAYERMOVING                                    = 213,
    ERR_TAXINOPATHS                                         = 214,
    ERR_TAXINOTELIGIBLE                                     = 215,
    ERR_TAXINOTSTANDING                                     = 216,
    ERR_NO_REPLY_TARGET                                     = 217,
    ERR_GENERIC_NO_TARGET                                   = 218,
    ERR_INITIATE_TRADE_S                                    = 219,
    ERR_TRADE_REQUEST_S                                     = 220,
    ERR_TRADE_BLOCKED_S                                     = 221,
    ERR_TRADE_TARGET_DEAD                                   = 222,
    ERR_TRADE_TOO_FAR                                       = 223,
    ERR_TRADE_CANCELLED                                     = 224,
    ERR_TRADE_COMPLETE                                      = 225,
    ERR_TRADE_BAG_FULL                                      = 226,
    ERR_TRADE_TARGET_BAG_FULL                               = 227,
    ERR_TRADE_MAX_COUNT_EXCEEDED                            = 228,
    ERR_TRADE_TARGET_MAX_COUNT_EXCEEDED                     = 229,
    ERR_ALREADY_TRADING                                     = 230,
    ERR_MOUNT_INVALIDMOUNTEE                                = 231,
    ERR_MOUNT_TOOFARAWAY                                    = 232,
    ERR_MOUNT_ALREADYMOUNTED                                = 233,
    ERR_MOUNT_NOTMOUNTABLE                                  = 234,
    ERR_MOUNT_NOTYOURPET                                    = 235,
    ERR_MOUNT_OTHER                                         = 236,
    ERR_MOUNT_LOOTING                                       = 237,
    ERR_MOUNT_RACECANTMOUNT                                 = 238,
    ERR_MOUNT_SHAPESHIFTED                                  = 239,
    ERR_MOUNT_NO_FAVORITES                                  = 240,
    ERR_DISMOUNT_NOPET                                      = 241,
    ERR_DISMOUNT_NOTMOUNTED                                 = 242,
    ERR_DISMOUNT_NOTYOURPET                                 = 243,
    ERR_SPELL_FAILED_TOTEMS                                 = 244,
    ERR_SPELL_FAILED_REAGENTS                               = 245,
    ERR_SPELL_FAILED_REAGENTS_GENERIC                       = 246,
    ERR_SPELL_FAILED_EQUIPPED_ITEM                          = 247,
    ERR_SPELL_FAILED_EQUIPPED_ITEM_CLASS_S                  = 248,
    ERR_SPELL_FAILED_SHAPESHIFT_FORM_S                      = 249,
    ERR_SPELL_FAILED_ANOTHER_IN_PROGRESS                    = 250,
    ERR_BADATTACKFACING                                     = 251,
    ERR_BADATTACKPOS                                        = 252,
    ERR_CHEST_IN_USE                                        = 253,
    ERR_USE_CANT_OPEN                                       = 254,
    ERR_USE_LOCKED                                          = 255,
    ERR_DOOR_LOCKED                                         = 256,
    ERR_BUTTON_LOCKED                                       = 257,
    ERR_USE_LOCKED_WITH_ITEM_S                              = 258,
    ERR_USE_LOCKED_WITH_SPELL_S                             = 259,
    ERR_USE_LOCKED_WITH_SPELL_KNOWN_SI                      = 260,
    ERR_USE_TOO_FAR                                         = 261,
    ERR_USE_BAD_ANGLE                                       = 262,
    ERR_USE_OBJECT_MOVING                                   = 263,
    ERR_USE_SPELL_FOCUS                                     = 264,
    ERR_USE_DESTROYED                                       = 265,
    ERR_SET_LOOT_FREEFORALL                                 = 266,
    ERR_SET_LOOT_ROUNDROBIN                                 = 267,
    ERR_SET_LOOT_MASTER                                     = 268,
    ERR_SET_LOOT_GROUP                                      = 269,
    ERR_SET_LOOT_THRESHOLD_S                                = 270,
    ERR_NEW_LOOT_MASTER_S                                   = 271,
    ERR_SPECIFY_MASTER_LOOTER                               = 272,
    ERR_LOOT_SPEC_CHANGED_S                                 = 273,
    ERR_TAME_FAILED                                         = 274,
    ERR_CHAT_WHILE_DEAD                                     = 275,
    ERR_CHAT_PLAYER_NOT_FOUND_S                             = 276,
    ERR_NEWTAXIPATH                                         = 277,
    ERR_NO_PET                                              = 278,
    ERR_NOTYOURPET                                          = 279,
    ERR_PET_NOT_RENAMEABLE                                  = 280,
    ERR_QUEST_OBJECTIVE_COMPLETE_S                          = 281,
    ERR_QUEST_UNKNOWN_COMPLETE                              = 282,
    ERR_QUEST_ADD_KILL_SII                                  = 283,
    ERR_QUEST_ADD_FOUND_SII                                 = 284,
    ERR_QUEST_ADD_ITEM_SII                                  = 285,
    ERR_QUEST_ADD_PLAYER_KILL_SII                           = 286,
    ERR_CANNOTCREATEDIRECTORY                               = 287,
    ERR_CANNOTCREATEFILE                                    = 288,
    ERR_PLAYER_WRONG_FACTION                                = 289,
    ERR_PLAYER_IS_NEUTRAL                                   = 290,
    ERR_BANKSLOT_FAILED_TOO_MANY                            = 291,
    ERR_BANKSLOT_INSUFFICIENT_FUNDS                         = 292,
    ERR_BANKSLOT_NOTBANKER                                  = 293,
    ERR_FRIEND_DB_ERROR                                     = 294,
    ERR_FRIEND_LIST_FULL                                    = 295,
    ERR_FRIEND_ADDED_S                                      = 296,
    ERR_BATTLETAG_FRIEND_ADDED_S                            = 297,
    ERR_FRIEND_ONLINE_SS                                    = 298,
    ERR_FRIEND_OFFLINE_S                                    = 299,
    ERR_FRIEND_NOT_FOUND                                    = 300,
    ERR_FRIEND_WRONG_FACTION                                = 301,
    ERR_FRIEND_REMOVED_S                                    = 302,
    ERR_BATTLETAG_FRIEND_REMOVED_S                          = 303,
    ERR_FRIEND_ERROR                                        = 304,
    ERR_FRIEND_ALREADY_S                                    = 305,
    ERR_FRIEND_SELF                                         = 306,
    ERR_FRIEND_DELETED                                      = 307,
    ERR_IGNORE_FULL                                         = 308,
    ERR_IGNORE_SELF                                         = 309,
    ERR_IGNORE_NOT_FOUND                                    = 310,
    ERR_IGNORE_ALREADY_S                                    = 311,
    ERR_IGNORE_ADDED_S                                      = 312,
    ERR_IGNORE_REMOVED_S                                    = 313,
    ERR_IGNORE_AMBIGUOUS                                    = 314,
    ERR_IGNORE_DELETED                                      = 315,
    ERR_ONLY_ONE_BOLT                                       = 316,
    ERR_ONLY_ONE_AMMO                                       = 317,
    ERR_SPELL_FAILED_EQUIPPED_SPECIFIC_ITEM                 = 318,
    ERR_WRONG_BAG_TYPE_SUBCLASS                             = 319,
    ERR_CANT_WRAP_STACKABLE                                 = 320,
    ERR_CANT_WRAP_EQUIPPED                                  = 321,
    ERR_CANT_WRAP_WRAPPED                                   = 322,
    ERR_CANT_WRAP_BOUND                                     = 323,
    ERR_CANT_WRAP_UNIQUE                                    = 324,
    ERR_CANT_WRAP_BAGS                                      = 325,
    ERR_OUT_OF_MANA                                         = 326,
    ERR_OUT_OF_RAGE                                         = 327,
    ERR_OUT_OF_FOCUS                                        = 328,
    ERR_OUT_OF_ENERGY                                       = 329,
    ERR_OUT_OF_CHI                                          = 330,
    ERR_OUT_OF_HEALTH                                       = 331,
    ERR_OUT_OF_RUNES                                        = 332,
    ERR_OUT_OF_RUNIC_POWER                                  = 333,
    ERR_OUT_OF_SOUL_SHARDS                                  = 334,
    ERR_OUT_OF_LUNAR_POWER                                  = 335,
    ERR_OUT_OF_HOLY_POWER                                   = 336,
    ERR_OUT_OF_MAELSTROM                                    = 337,
    ERR_OUT_OF_COMBO_POINTS                                 = 338,
    ERR_OUT_OF_INSANITY                                     = 339,
    ERR_OUT_OF_ARCANE_CHARGES                               = 340,
    ERR_OUT_OF_FURY                                         = 341,
    ERR_OUT_OF_PAIN                                         = 342,
    ERR_OUT_OF_POWER_DISPLAY                                = 343,
    ERR_LOOT_GONE                                           = 344,
    ERR_MOUNT_FORCEDDISMOUNT                                = 345,
    ERR_AUTOFOLLOW_TOO_FAR                                  = 346,
    ERR_UNIT_NOT_FOUND                                      = 347,
    ERR_INVALID_FOLLOW_TARGET                               = 348,
    ERR_INVALID_INSPECT_TARGET                              = 349,
    ERR_GUILDEMBLEM_SUCCESS                                 = 350,
    ERR_GUILDEMBLEM_INVALID_TABARD_COLORS                   = 351,
    ERR_GUILDEMBLEM_NOGUILD                                 = 352,
    ERR_GUILDEMBLEM_NOTGUILDMASTER                          = 353,
    ERR_GUILDEMBLEM_NOTENOUGHMONEY                          = 354,
    ERR_GUILDEMBLEM_INVALIDVENDOR                           = 355,
    ERR_EMBLEMERROR_NOTABARDGEOSET                          = 356,
    ERR_SPELL_OUT_OF_RANGE                                  = 357,
    ERR_COMMAND_NEEDS_TARGET                                = 358,
    ERR_NOAMMO_S                                            = 359,
    ERR_TOOBUSYTOFOLLOW                                     = 360,
    ERR_DUEL_REQUESTED                                      = 361,
    ERR_DUEL_CANCELLED                                      = 362,
    ERR_DEATHBINDALREADYBOUND                               = 363,
    ERR_DEATHBIND_SUCCESS_S                                 = 364,
    ERR_NOEMOTEWHILERUNNING                                 = 365,
    ERR_ZONE_EXPLORED                                       = 366,
    ERR_ZONE_EXPLORED_XP                                    = 367,
    ERR_INVALID_ITEM_TARGET                                 = 368,
    ERR_INVALID_QUEST_TARGET                                = 369,
    ERR_IGNORING_YOU_S                                      = 370,
    ERR_FISH_NOT_HOOKED                                     = 371,
    ERR_FISH_ESCAPED                                        = 372,
    ERR_SPELL_FAILED_NOTUNSHEATHED                          = 373,
    ERR_PETITION_OFFERED_S                                  = 374,
    ERR_PETITION_SIGNED                                     = 375,
    ERR_PETITION_SIGNED_S                                   = 376,
    ERR_PETITION_DECLINED_S                                 = 377,
    ERR_PETITION_ALREADY_SIGNED                             = 378,
    ERR_PETITION_RESTRICTED_ACCOUNT_TRIAL                   = 379,
    ERR_PETITION_ALREADY_SIGNED_OTHER                       = 380,
    ERR_PETITION_IN_GUILD                                   = 381,
    ERR_PETITION_CREATOR                                    = 382,
    ERR_PETITION_NOT_ENOUGH_SIGNATURES                      = 383,
    ERR_PETITION_NOT_SAME_SERVER                            = 384,
    ERR_PETITION_FULL                                       = 385,
    ERR_PETITION_ALREADY_SIGNED_BY_S                        = 386,
    ERR_GUILD_NAME_INVALID                                  = 387,
    ERR_SPELL_UNLEARNED_S                                   = 388,
    ERR_PET_SPELL_ROOTED                                    = 389,
    ERR_PET_SPELL_AFFECTING_COMBAT                          = 390,
    ERR_PET_SPELL_OUT_OF_RANGE                              = 391,
    ERR_PET_SPELL_NOT_BEHIND                                = 392,
    ERR_PET_SPELL_TARGETS_DEAD                              = 393,
    ERR_PET_SPELL_DEAD                                      = 394,
    ERR_PET_SPELL_NOPATH                                    = 395,
    ERR_ITEM_CANT_BE_DESTROYED                              = 396,
    ERR_TICKET_ALREADY_EXISTS                               = 397,
    ERR_TICKET_CREATE_ERROR                                 = 398,
    ERR_TICKET_UPDATE_ERROR                                 = 399,
    ERR_TICKET_DB_ERROR                                     = 400,
    ERR_TICKET_NO_TEXT                                      = 401,
    ERR_TICKET_TEXT_TOO_LONG                                = 402,
    ERR_OBJECT_IS_BUSY                                      = 403,
    ERR_EXHAUSTION_WELLRESTED                               = 404,
    ERR_EXHAUSTION_RESTED                                   = 405,
    ERR_EXHAUSTION_NORMAL                                   = 406,
    ERR_EXHAUSTION_TIRED                                    = 407,
    ERR_EXHAUSTION_EXHAUSTED                                = 408,
    ERR_NO_ITEMS_WHILE_SHAPESHIFTED                         = 409,
    ERR_CANT_INTERACT_SHAPESHIFTED                          = 410,
    ERR_REALM_NOT_FOUND                                     = 411,
    ERR_MAIL_QUEST_ITEM                                     = 412,
    ERR_MAIL_BOUND_ITEM                                     = 413,
    ERR_MAIL_CONJURED_ITEM                                  = 414,
    ERR_MAIL_BAG                                            = 415,
    ERR_MAIL_TO_SELF                                        = 416,
    ERR_MAIL_TARGET_NOT_FOUND                               = 417,
    ERR_MAIL_DATABASE_ERROR                                 = 418,
    ERR_MAIL_DELETE_ITEM_ERROR                              = 419,
    ERR_MAIL_WRAPPED_COD                                    = 420,
    ERR_MAIL_CANT_SEND_REALM                                = 421,
    ERR_MAIL_SENT                                           = 422,
    ERR_NOT_HAPPY_ENOUGH                                    = 423,
    ERR_USE_CANT_IMMUNE                                     = 424,
    ERR_CANT_BE_DISENCHANTED                                = 425,
    ERR_CANT_USE_DISARMED                                   = 426,
    ERR_AUCTION_QUEST_ITEM                                  = 427,
    ERR_AUCTION_BOUND_ITEM                                  = 428,
    ERR_AUCTION_CONJURED_ITEM                               = 429,
    ERR_AUCTION_LIMITED_DURATION_ITEM                       = 430,
    ERR_AUCTION_WRAPPED_ITEM                                = 431,
    ERR_AUCTION_LOOT_ITEM                                   = 432,
    ERR_AUCTION_BAG                                         = 433,
    ERR_AUCTION_EQUIPPED_BAG                                = 434,
    ERR_AUCTION_DATABASE_ERROR                              = 435,
    ERR_AUCTION_BID_OWN                                     = 436,
    ERR_AUCTION_BID_INCREMENT                               = 437,
    ERR_AUCTION_HIGHER_BID                                  = 438,
    ERR_AUCTION_MIN_BID                                     = 439,
    ERR_AUCTION_REPAIR_ITEM                                 = 440,
    ERR_AUCTION_USED_CHARGES                                = 441,
    ERR_AUCTION_ALREADY_BID                                 = 442,
    ERR_AUCTION_STARTED                                     = 443,
    ERR_AUCTION_REMOVED                                     = 444,
    ERR_AUCTION_OUTBID_S                                    = 445,
    ERR_AUCTION_WON_S                                       = 446,
    ERR_AUCTION_SOLD_S                                      = 447,
    ERR_AUCTION_EXPIRED_S                                   = 448,
    ERR_AUCTION_REMOVED_S                                   = 449,
    ERR_AUCTION_BID_PLACED                                  = 450,
    ERR_LOGOUT_FAILED                                       = 451,
    ERR_QUEST_PUSH_SUCCESS_S                                = 452,
    ERR_QUEST_PUSH_INVALID_S                                = 453,
    ERR_QUEST_PUSH_ACCEPTED_S                               = 454,
    ERR_QUEST_PUSH_DECLINED_S                               = 455,
    ERR_QUEST_PUSH_BUSY_S                                   = 456,
    ERR_QUEST_PUSH_DEAD_S                                   = 457,
    ERR_QUEST_PUSH_LOG_FULL_S                               = 458,
    ERR_QUEST_PUSH_ONQUEST_S                                = 459,
    ERR_QUEST_PUSH_ALREADY_DONE_S                           = 460,
    ERR_QUEST_PUSH_NOT_DAILY_S                              = 461,
    ERR_QUEST_PUSH_TIMER_EXPIRED_S                          = 462,
    ERR_QUEST_PUSH_NOT_IN_PARTY_S                           = 463,
    ERR_QUEST_PUSH_DIFFERENT_SERVER_DAILY_S                 = 464,
    ERR_QUEST_PUSH_NOT_ALLOWED_S                            = 465,
    ERR_RAID_GROUP_LOWLEVEL                                 = 466,
    ERR_RAID_GROUP_ONLY                                     = 467,
    ERR_RAID_GROUP_FULL                                     = 468,
    ERR_RAID_GROUP_REQUIREMENTS_UNMATCH                     = 469,
    ERR_CORPSE_IS_NOT_IN_INSTANCE                           = 470,
    ERR_PVP_KILL_HONORABLE                                  = 471,
    ERR_PVP_KILL_DISHONORABLE                               = 472,
    ERR_SPELL_FAILED_ALREADY_AT_FULL_HEALTH                 = 473,
    ERR_SPELL_FAILED_ALREADY_AT_FULL_MANA                   = 474,
    ERR_SPELL_FAILED_ALREADY_AT_FULL_POWER_S                = 475,
    ERR_AUTOLOOT_MONEY_S                                    = 476,
    ERR_GENERIC_STUNNED                                     = 477,
    ERR_TARGET_STUNNED                                      = 478,
    ERR_MUST_REPAIR_DURABILITY                              = 479,
    ERR_RAID_YOU_JOINED                                     = 480,
    ERR_RAID_YOU_LEFT                                       = 481,
    ERR_INSTANCE_GROUP_JOINED_WITH_PARTY                    = 482,
    ERR_INSTANCE_GROUP_JOINED_WITH_RAID                     = 483,
    ERR_RAID_MEMBER_ADDED_S                                 = 484,
    ERR_RAID_MEMBER_REMOVED_S                               = 485,
    ERR_INSTANCE_GROUP_ADDED_S                              = 486,
    ERR_INSTANCE_GROUP_REMOVED_S                            = 487,
    ERR_CLICK_ON_ITEM_TO_FEED                               = 488,
    ERR_TOO_MANY_CHAT_CHANNELS                              = 489,
    ERR_LOOT_ROLL_PENDING                                   = 490,
    ERR_LOOT_PLAYER_NOT_FOUND                               = 491,
    ERR_NOT_IN_RAID                                         = 492,
    ERR_LOGGING_OUT                                         = 493,
    ERR_TARGET_LOGGING_OUT                                  = 494,
    ERR_NOT_WHILE_MOUNTED                                   = 495,
    ERR_NOT_WHILE_SHAPESHIFTED                              = 496,
    ERR_NOT_IN_COMBAT                                       = 497,
    ERR_NOT_WHILE_DISARMED                                  = 498,
    ERR_PET_BROKEN                                          = 499,
    ERR_TALENT_WIPE_ERROR                                   = 500,
    ERR_SPEC_WIPE_ERROR                                     = 501,
    ERR_GLYPH_WIPE_ERROR                                    = 502,
    ERR_PET_SPEC_WIPE_ERROR                                 = 503,
    ERR_FEIGN_DEATH_RESISTED                                = 504,
    ERR_MEETING_STONE_IN_QUEUE_S                            = 505,
    ERR_MEETING_STONE_LEFT_QUEUE_S                          = 506,
    ERR_MEETING_STONE_OTHER_MEMBER_LEFT                     = 507,
    ERR_MEETING_STONE_PARTY_KICKED_FROM_QUEUE               = 508,
    ERR_MEETING_STONE_MEMBER_STILL_IN_QUEUE                 = 509,
    ERR_MEETING_STONE_SUCCESS                               = 510,
    ERR_MEETING_STONE_IN_PROGRESS                           = 511,
    ERR_MEETING_STONE_MEMBER_ADDED_S                        = 512,
    ERR_MEETING_STONE_GROUP_FULL                            = 513,
    ERR_MEETING_STONE_NOT_LEADER                            = 514,
    ERR_MEETING_STONE_INVALID_LEVEL                         = 515,
    ERR_MEETING_STONE_TARGET_NOT_IN_PARTY                   = 516,
    ERR_MEETING_STONE_TARGET_INVALID_LEVEL                  = 517,
    ERR_MEETING_STONE_MUST_BE_LEADER                        = 518,
    ERR_MEETING_STONE_NO_RAID_GROUP                         = 519,
    ERR_MEETING_STONE_NEED_PARTY                            = 520,
    ERR_MEETING_STONE_NOT_FOUND                             = 521,
    ERR_GUILDEMBLEM_SAME                                    = 522,
    ERR_EQUIP_TRADE_ITEM                                    = 523,
    ERR_PVP_TOGGLE_ON                                       = 524,
    ERR_PVP_TOGGLE_OFF                                      = 525,
    ERR_GROUP_JOIN_BATTLEGROUND_DESERTERS                   = 526,
    ERR_GROUP_JOIN_BATTLEGROUND_DEAD                        = 527,
    ERR_GROUP_JOIN_BATTLEGROUND_S                           = 528,
    ERR_GROUP_JOIN_BATTLEGROUND_FAIL                        = 529,
    ERR_GROUP_JOIN_BATTLEGROUND_TOO_MANY                    = 530,
    ERR_SOLO_JOIN_BATTLEGROUND_S                            = 531,
    ERR_BATTLEGROUND_TOO_MANY_QUEUES                        = 532,
    ERR_BATTLEGROUND_CANNOT_QUEUE_FOR_RATED                 = 533,
    ERR_BATTLEDGROUND_QUEUED_FOR_RATED                      = 534,
    ERR_BATTLEGROUND_TEAM_LEFT_QUEUE                        = 535,
    ERR_BATTLEGROUND_NOT_IN_BATTLEGROUND                    = 536,
    ERR_ALREADY_IN_ARENA_TEAM_S                             = 537,
    ERR_INVALID_PROMOTION_CODE                              = 538,
    ERR_BG_PLAYER_JOINED_SS                                 = 539,
    ERR_BG_PLAYER_LEFT_S                                    = 540,
    ERR_RESTRICTED_ACCOUNT                                  = 541,
    ERR_RESTRICTED_ACCOUNT_TRIAL                            = 542,
    ERR_PLAY_TIME_EXCEEDED                                  = 543,
    ERR_APPROACHING_PARTIAL_PLAY_TIME                       = 544,
    ERR_APPROACHING_PARTIAL_PLAY_TIME_2                     = 545,
    ERR_APPROACHING_NO_PLAY_TIME                            = 546,
    ERR_APPROACHING_NO_PLAY_TIME_2                          = 547,
    ERR_UNHEALTHY_TIME                                      = 548,
    ERR_CHAT_RESTRICTED_TRIAL                               = 549,
    ERR_CHAT_THROTTLED                                      = 550,
    ERR_MAIL_REACHED_CAP                                    = 551,
    ERR_INVALID_RAID_TARGET                                 = 552,
    ERR_RAID_LEADER_READY_CHECK_START_S                     = 553,
    ERR_READY_CHECK_IN_PROGRESS                             = 554,
    ERR_READY_CHECK_THROTTLED                               = 555,
    ERR_DUNGEON_DIFFICULTY_FAILED                           = 556,
    ERR_DUNGEON_DIFFICULTY_CHANGED_S                        = 557,
    ERR_TRADE_WRONG_REALM                                   = 558,
    ERR_TRADE_NOT_ON_TAPLIST                                = 559,
    ERR_CHAT_PLAYER_AMBIGUOUS_S                             = 560,
    ERR_LOOT_CANT_LOOT_THAT_NOW                             = 561,
    ERR_LOOT_MASTER_INV_FULL                                = 562,
    ERR_LOOT_MASTER_UNIQUE_ITEM                             = 563,
    ERR_LOOT_MASTER_OTHER                                   = 564,
    ERR_FILTERING_YOU_S                                     = 565,
    ERR_USE_PREVENTED_BY_MECHANIC_S                         = 566,
    ERR_ITEM_UNIQUE_EQUIPPABLE                              = 567,
    ERR_LFG_LEADER_IS_LFM_S                                 = 568,
    ERR_LFG_PENDING                                         = 569,
    ERR_CANT_SPEAK_LANGAGE                                  = 570,
    ERR_VENDOR_MISSING_TURNINS                              = 571,
    ERR_BATTLEGROUND_NOT_IN_TEAM                            = 572,
    ERR_NOT_IN_BATTLEGROUND                                 = 573,
    ERR_NOT_ENOUGH_HONOR_POINTS                             = 574,
    ERR_NOT_ENOUGH_ARENA_POINTS                             = 575,
    ERR_SOCKETING_REQUIRES_META_GEM                         = 576,
    ERR_SOCKETING_META_GEM_ONLY_IN_METASLOT                 = 577,
    ERR_SOCKETING_REQUIRES_HYDRAULIC_GEM                    = 578,
    ERR_SOCKETING_HYDRAULIC_GEM_ONLY_IN_HYDRAULICSLOT       = 579,
    ERR_SOCKETING_REQUIRES_COGWHEEL_GEM                     = 580,
    ERR_SOCKETING_COGWHEEL_GEM_ONLY_IN_COGWHEELSLOT         = 581,
    ERR_SOCKETING_ITEM_TOO_LOW_LEVEL                        = 582,
    ERR_ITEM_MAX_COUNT_SOCKETED                             = 583,
    ERR_SYSTEM_DISABLED                                     = 584,
    ERR_QUEST_FAILED_TOO_MANY_DAILY_QUESTS_I                = 585,
    ERR_ITEM_MAX_COUNT_EQUIPPED_SOCKETED                    = 586,
    ERR_ITEM_UNIQUE_EQUIPPABLE_SOCKETED                     = 587,
    ERR_USER_SQUELCHED                                      = 588,
    ERR_TOO_MUCH_GOLD                                       = 589,
    ERR_NOT_BARBER_SITTING                                  = 590,
    ERR_QUEST_FAILED_CAIS                                   = 591,
    ERR_INVITE_RESTRICTED_TRIAL                             = 592,
    ERR_VOICE_IGNORE_FULL                                   = 593,
    ERR_VOICE_IGNORE_SELF                                   = 594,
    ERR_VOICE_IGNORE_NOT_FOUND                              = 595,
    ERR_VOICE_IGNORE_ALREADY_S                              = 596,
    ERR_VOICE_IGNORE_ADDED_S                                = 597,
    ERR_VOICE_IGNORE_REMOVED_S                              = 598,
    ERR_VOICE_IGNORE_AMBIGUOUS                              = 599,
    ERR_VOICE_IGNORE_DELETED                                = 600,
    ERR_UNKNOWN_MACRO_OPTION_S                              = 601,
    ERR_NOT_DURING_ARENA_MATCH                              = 602,
    ERR_PLAYER_SILENCED                                     = 603,
    ERR_PLAYER_UNSILENCED                                   = 604,
    ERR_COMSAT_DISCONNECT                                   = 605,
    ERR_COMSAT_RECONNECT_ATTEMPT                            = 606,
    ERR_COMSAT_CONNECT_FAIL                                 = 607,
    ERR_MAIL_INVALID_ATTACHMENT_SLOT                        = 608,
    ERR_MAIL_TOO_MANY_ATTACHMENTS                           = 609,
    ERR_MAIL_INVALID_ATTACHMENT                             = 610,
    ERR_MAIL_ATTACHMENT_EXPIRED                             = 611,
    ERR_VOICE_CHAT_PARENTAL_DISABLE_ALL                     = 612,
    ERR_VOICE_CHAT_PARENTAL_DISABLE_MIC                     = 613,
    ERR_PROFANE_CHAT_NAME                                   = 614,
    ERR_PLAYER_SILENCED_ECHO                                = 615,
    ERR_PLAYER_UNSILENCED_ECHO                              = 616,
    ERR_VOICESESSION_FULL                                   = 617,
    ERR_LOOT_CANT_LOOT_THAT                                 = 618,
    ERR_ARENA_EXPIRED_CAIS                                  = 619,
    ERR_GROUP_ACTION_THROTTLED                              = 620,
    ERR_ALREADY_PICKPOCKETED                                = 621,
    ERR_NAME_INVALID                                        = 622,
    ERR_NAME_NO_NAME                                        = 623,
    ERR_NAME_TOO_SHORT                                      = 624,
    ERR_NAME_TOO_LONG                                       = 625,
    ERR_NAME_MIXED_LANGUAGES                                = 626,
    ERR_NAME_PROFANE                                        = 627,
    ERR_NAME_RESERVED                                       = 628,
    ERR_NAME_THREE_CONSECUTIVE                              = 629,
    ERR_NAME_INVALID_SPACE                                  = 630,
    ERR_NAME_CONSECUTIVE_SPACES                             = 631,
    ERR_NAME_RUSSIAN_CONSECUTIVE_SILENT_CHARACTERS          = 632,
    ERR_NAME_RUSSIAN_SILENT_CHARACTER_AT_BEGINNING_OR_END   = 633,
    ERR_NAME_DECLENSION_DOESNT_MATCH_BASE_NAME              = 634,
    ERR_REFER_A_FRIEND_NOT_REFERRED_BY                      = 635,
    ERR_REFER_A_FRIEND_TARGET_TOO_HIGH                      = 636,
    ERR_REFER_A_FRIEND_INSUFFICIENT_GRANTABLE_LEVELS        = 637,
    ERR_REFER_A_FRIEND_TOO_FAR                              = 638,
    ERR_REFER_A_FRIEND_DIFFERENT_FACTION                    = 639,
    ERR_REFER_A_FRIEND_NOT_NOW                              = 640,
    ERR_REFER_A_FRIEND_GRANT_LEVEL_MAX_I                    = 641,
    ERR_REFER_A_FRIEND_SUMMON_LEVEL_MAX_I                   = 642,
    ERR_REFER_A_FRIEND_SUMMON_COOLDOWN                      = 643,
    ERR_REFER_A_FRIEND_SUMMON_OFFLINE_S                     = 644,
    ERR_REFER_A_FRIEND_INSUF_EXPAN_LVL                      = 645,
    ERR_REFER_A_FRIEND_NOT_IN_LFG                           = 646,
    ERR_REFER_A_FRIEND_NO_XREALM                            = 647,
    ERR_REFER_A_FRIEND_MAP_INCOMING_TRANSFER_NOT_ALLOWED    = 648,
    ERR_NOT_SAME_ACCOUNT                                    = 649,
    ERR_BAD_ON_USE_ENCHANT                                  = 650,
    ERR_TRADE_SELF                                          = 651,
    ERR_TOO_MANY_SOCKETS                                    = 652,
    ERR_ITEM_MAX_LIMIT_CATEGORY_COUNT_EXCEEDED_IS           = 653,
    ERR_TRADE_TARGET_MAX_LIMIT_CATEGORY_COUNT_EXCEEDED_IS   = 654,
    ERR_ITEM_MAX_LIMIT_CATEGORY_SOCKETED_EXCEEDED_IS        = 655,
    ERR_ITEM_MAX_LIMIT_CATEGORY_EQUIPPED_EXCEEDED_IS        = 656,
    ERR_SHAPESHIFT_FORM_CANNOT_EQUIP                        = 657,
    ERR_ITEM_INVENTORY_FULL_SATCHEL                         = 658,
    ERR_SCALING_STAT_ITEM_LEVEL_EXCEEDED                    = 659,
    ERR_SCALING_STAT_ITEM_LEVEL_TOO_LOW                     = 660,
    ERR_PURCHASE_LEVEL_TOO_LOW                              = 661,
    ERR_GROUP_SWAP_FAILED                                   = 662,
    ERR_INVITE_IN_COMBAT                                    = 663,
    ERR_INVALID_GLYPH_SLOT                                  = 664,
    ERR_GENERIC_NO_VALID_TARGETS                            = 665,
    ERR_CALENDAR_EVENT_ALERT_S                              = 666,
    ERR_PET_LEARN_SPELL_S                                   = 667,
    ERR_PET_LEARN_ABILITY_S                                 = 668,
    ERR_PET_SPELL_UNLEARNED_S                               = 669,
    ERR_INVITE_UNKNOWN_REALM                                = 670,
    ERR_INVITE_NO_PARTY_SERVER                              = 671,
    ERR_INVITE_PARTY_BUSY                                   = 672,
    ERR_PARTY_TARGET_AMBIGUOUS                              = 673,
    ERR_PARTY_LFG_INVITE_RAID_LOCKED                        = 674,
    ERR_PARTY_LFG_BOOT_LIMIT                                = 675,
    ERR_PARTY_LFG_BOOT_COOLDOWN_S                           = 676,
    ERR_PARTY_LFG_BOOT_NOT_ELIGIBLE_S                       = 677,
    ERR_PARTY_LFG_BOOT_INPATIENT_TIMER_S                    = 678,
    ERR_PARTY_LFG_BOOT_IN_PROGRESS                          = 679,
    ERR_PARTY_LFG_BOOT_TOO_FEW_PLAYERS                      = 680,
    ERR_PARTY_LFG_BOOT_VOTE_SUCCEEDED                       = 681,
    ERR_PARTY_LFG_BOOT_VOTE_FAILED                          = 682,
    ERR_PARTY_LFG_BOOT_IN_COMBAT                            = 683,
    ERR_PARTY_LFG_BOOT_DUNGEON_COMPLETE                     = 684,
    ERR_PARTY_LFG_BOOT_LOOT_ROLLS                           = 685,
    ERR_PARTY_LFG_BOOT_VOTE_REGISTERED                      = 686,
    ERR_PARTY_PRIVATE_GROUP_ONLY                            = 687,
    ERR_PARTY_LFG_TELEPORT_IN_COMBAT                        = 688,
    ERR_RAID_DISALLOWED_BY_LEVEL                            = 689,
    ERR_RAID_DISALLOWED_BY_CROSS_REALM                      = 690,
    ERR_PARTY_ROLE_NOT_AVAILABLE                            = 691,
    ERR_JOIN_LFG_OBJECT_FAILED                              = 692,
    ERR_LFG_REMOVED_LEVELUP                                 = 693,
    ERR_LFG_REMOVED_XP_TOGGLE                               = 694,
    ERR_LFG_REMOVED_FACTION_CHANGE                          = 695,
    ERR_BATTLEGROUND_INFO_THROTTLED                         = 696,
    ERR_BATTLEGROUND_ALREADY_IN                             = 697,
    ERR_ARENA_TEAM_CHANGE_FAILED_QUEUED                     = 698,
    ERR_ARENA_TEAM_PERMISSIONS                              = 699,
    ERR_NOT_WHILE_FALLING                                   = 700,
    ERR_NOT_WHILE_MOVING                                    = 701,
    ERR_NOT_WHILE_FATIGUED                                  = 702,
    ERR_MAX_SOCKETS                                         = 703,
    ERR_MULTI_CAST_ACTION_TOTEM_S                           = 704,
    ERR_BATTLEGROUND_JOIN_LEVELUP                           = 705,
    ERR_REMOVE_FROM_PVP_QUEUE_XP_GAIN                       = 706,
    ERR_BATTLEGROUND_JOIN_XP_GAIN                           = 707,
    ERR_BATTLEGROUND_JOIN_MERCENARY                         = 708,
    ERR_BATTLEGROUND_JOIN_TOO_MANY_HEALERS                  = 709,
    ERR_BATTLEGROUND_JOIN_TOO_MANY_TANKS                    = 710,
    ERR_BATTLEGROUND_JOIN_TOO_MANY_DAMAGE                   = 711,
    ERR_RAID_DIFFICULTY_FAILED                              = 712,
    ERR_RAID_DIFFICULTY_CHANGED_S                           = 713,
    ERR_LEGACY_RAID_DIFFICULTY_CHANGED_S                    = 714,
    ERR_RAID_LOCKOUT_CHANGED_S                              = 715,
    ERR_RAID_CONVERTED_TO_PARTY                             = 716,
    ERR_PARTY_CONVERTED_TO_RAID                             = 717,
    ERR_PLAYER_DIFFICULTY_CHANGED_S                         = 718,
    ERR_GMRESPONSE_DB_ERROR                                 = 719,
    ERR_BATTLEGROUND_JOIN_RANGE_INDEX                       = 720,
    ERR_ARENA_JOIN_RANGE_INDEX                              = 721,
    ERR_REMOVE_FROM_PVP_QUEUE_FACTION_CHANGE                = 722,
    ERR_BATTLEGROUND_JOIN_FAILED                            = 723,
    ERR_BATTLEGROUND_JOIN_NO_VALID_SPEC_FOR_ROLE            = 724,
    ERR_BATTLEGROUND_JOIN_RESPEC                            = 725,
    ERR_BATTLEGROUND_INVITATION_DECLINED                    = 726,
    ERR_BATTLEGROUND_JOIN_TIMED_OUT                         = 727,
    ERR_BATTLEGROUND_DUPE_QUEUE                             = 728,
    ERR_BATTLEGROUND_JOIN_MUST_COMPLETE_QUEST               = 729,
    ERR_IN_BATTLEGROUND_RESPEC                              = 730,
    ERR_MAIL_LIMITED_DURATION_ITEM                          = 731,
    ERR_YELL_RESTRICTED_TRIAL                               = 732,
    ERR_CHAT_RAID_RESTRICTED_TRIAL                          = 733,
    ERR_LFG_ROLE_CHECK_FAILED                               = 734,
    ERR_LFG_ROLE_CHECK_FAILED_TIMEOUT                       = 735,
    ERR_LFG_ROLE_CHECK_FAILED_NOT_VIABLE                    = 736,
    ERR_LFG_READY_CHECK_FAILED                              = 737,
    ERR_LFG_READY_CHECK_FAILED_TIMEOUT                      = 738,
    ERR_LFG_GROUP_FULL                                      = 739,
    ERR_LFG_NO_LFG_OBJECT                                   = 740,
    ERR_LFG_NO_SLOTS_PLAYER                                 = 741,
    ERR_LFG_NO_SLOTS_PARTY                                  = 742,
    ERR_LFG_NO_SPEC                                         = 743,
    ERR_LFG_MISMATCHED_SLOTS                                = 744,
    ERR_LFG_MISMATCHED_SLOTS_LOCAL_XREALM                   = 745,
    ERR_LFG_PARTY_PLAYERS_FROM_DIFFERENT_REALMS             = 746,
    ERR_LFG_MEMBERS_NOT_PRESENT                             = 747,
    ERR_LFG_GET_INFO_TIMEOUT                                = 748,
    ERR_LFG_INVALID_SLOT                                    = 749,
    ERR_LFG_DESERTER_PLAYER                                 = 750,
    ERR_LFG_DESERTER_PARTY                                  = 751,
    ERR_LFG_DEAD                                            = 752,
    ERR_LFG_RANDOM_COOLDOWN_PLAYER                          = 753,
    ERR_LFG_RANDOM_COOLDOWN_PARTY                           = 754,
    ERR_LFG_TOO_MANY_MEMBERS                                = 755,
    ERR_LFG_TOO_FEW_MEMBERS                                 = 756,
    ERR_LFG_PROPOSAL_FAILED                                 = 757,
    ERR_LFG_PROPOSAL_DECLINED_SELF                          = 758,
    ERR_LFG_PROPOSAL_DECLINED_PARTY                         = 759,
    ERR_LFG_NO_SLOTS_SELECTED                               = 760,
    ERR_LFG_NO_ROLES_SELECTED                               = 761,
    ERR_LFG_ROLE_CHECK_INITIATED                            = 762,
    ERR_LFG_READY_CHECK_INITIATED                           = 763,
    ERR_LFG_PLAYER_DECLINED_ROLE_CHECK                      = 764,
    ERR_LFG_PLAYER_DECLINED_READY_CHECK                     = 765,
    ERR_LFG_JOINED_QUEUE                                    = 766,
    ERR_LFG_JOINED_FLEX_QUEUE                               = 767,
    ERR_LFG_JOINED_RF_QUEUE                                 = 768,
    ERR_LFG_JOINED_SCENARIO_QUEUE                           = 769,
    ERR_LFG_JOINED_WORLD_PVP_QUEUE                          = 770,
    ERR_LFG_JOINED_LIST                                     = 771,
    ERR_LFG_LEFT_QUEUE                                      = 772,
    ERR_LFG_LEFT_LIST                                       = 773,
    ERR_LFG_ROLE_CHECK_ABORTED                              = 774,
    ERR_LFG_READY_CHECK_ABORTED                             = 775,
    ERR_LFG_CANT_USE_BATTLEGROUND                           = 776,
    ERR_LFG_CANT_USE_DUNGEONS                               = 777,
    ERR_LFG_REASON_TOO_MANY_LFG                             = 778,
    ERR_INVALID_TELEPORT_LOCATION                           = 779,
    ERR_TOO_FAR_TO_INTERACT                                 = 780,
    ERR_BATTLEGROUND_PLAYERS_FROM_DIFFERENT_REALMS          = 781,
    ERR_DIFFICULTY_CHANGE_COOLDOWN_S                        = 782,
    ERR_DIFFICULTY_CHANGE_COMBAT_COOLDOWN_S                 = 783,
    ERR_DIFFICULTY_CHANGE_WORLDSTATE                        = 784,
    ERR_DIFFICULTY_CHANGE_ENCOUNTER                         = 785,
    ERR_DIFFICULTY_CHANGE_COMBAT                            = 786,
    ERR_DIFFICULTY_CHANGE_PLAYER_BUSY                       = 787,
    ERR_DIFFICULTY_CHANGE_ALREADY_STARTED                   = 788,
    ERR_DIFFICULTY_CHANGE_OTHER_HEROIC_S                    = 789,
    ERR_DIFFICULTY_CHANGE_HEROIC_INSTANCE_ALREADY_RUNNING   = 790,
    ERR_ARENA_TEAM_PARTY_SIZE                               = 791,
    ERR_QUEST_FORCE_REMOVED_S                               = 792,
    ERR_ATTACK_NO_ACTIONS                                   = 793,
    ERR_IN_RANDOM_BG                                        = 794,
    ERR_IN_NON_RANDOM_BG                                    = 795,
    ERR_AUCTION_ENOUGH_ITEMS                                = 796,
    ERR_BN_FRIEND_SELF                                      = 797,
    ERR_BN_FRIEND_ALREADY                                   = 798,
    ERR_BN_FRIEND_BLOCKED                                   = 799,
    ERR_BN_FRIEND_LIST_FULL                                 = 800,
    ERR_BN_FRIEND_REQUEST_SENT                              = 801,
    ERR_BN_BROADCAST_THROTTLE                               = 802,
    ERR_BG_DEVELOPER_ONLY                                   = 803,
    ERR_CURRENCY_SPELL_SLOT_MISMATCH                        = 804,
    ERR_CURRENCY_NOT_TRADABLE                               = 805,
    ERR_REQUIRES_EXPANSION_S                                = 806,
    ERR_QUEST_FAILED_SPELL                                  = 807,
    ERR_TALENT_FAILED_NOT_ENOUGH_TALENTS_IN_PRIMARY_TREE    = 808,
    ERR_TALENT_FAILED_NO_PRIMARY_TREE_SELECTED              = 809,
    ERR_TALENT_FAILED_CANT_REMOVE_TALENT                    = 810,
    ERR_TALENT_FAILED_UNKNOWN                               = 811,
    ERR_WARGAME_REQUEST_FAILURE                             = 812,
    ERR_RANK_REQUIRES_AUTHENTICATOR                         = 813,
    ERR_GUILD_BANK_VOUCHER_FAILED                           = 814,
    ERR_WARGAME_REQUEST_SENT                                = 815,
    ERR_REQUIRES_ACHIEVEMENT_I                              = 816,
    ERR_REFUND_RESULT_EXCEED_MAX_CURRENCY                   = 817,
    ERR_CANT_BUY_QUANTITY                                   = 818,
    ERR_ITEM_IS_BATTLE_PAY_LOCKED                           = 819,
    ERR_PARTY_ALREADY_IN_BATTLEGROUND_QUEUE                 = 820,
    ERR_PARTY_CONFIRMING_BATTLEGROUND_QUEUE                 = 821,
    ERR_BATTLEFIELD_TEAM_PARTY_SIZE                         = 822,
    ERR_INSUFF_TRACKED_CURRENCY_IS                          = 823,
    ERR_NOT_ON_TOURNAMENT_REALM                             = 824,
    ERR_GUILD_TRIAL_ACCOUNT_TRIAL                           = 825,
    ERR_GUILD_TRIAL_ACCOUNT_VETERAN                         = 826,
    ERR_GUILD_UNDELETABLE_DUE_TO_LEVEL                      = 827,
    ERR_CANT_DO_THAT_IN_A_GROUP                             = 828,
    ERR_GUILD_LEADER_REPLACED                               = 829,
    ERR_TRANSMOGRIFY_CANT_EQUIP                             = 830,
    ERR_TRANSMOGRIFY_INVALID_ITEM_TYPE                      = 831,
    ERR_TRANSMOGRIFY_NOT_SOULBOUND                          = 832,
    ERR_TRANSMOGRIFY_INVALID_SOURCE                         = 833,
    ERR_TRANSMOGRIFY_INVALID_DESTINATION                    = 834,
    ERR_TRANSMOGRIFY_MISMATCH                               = 835,
    ERR_TRANSMOGRIFY_LEGENDARY                              = 836,
    ERR_TRANSMOGRIFY_SAME_ITEM                              = 837,
    ERR_TRANSMOGRIFY_SAME_APPEARANCE                        = 838,
    ERR_TRANSMOGRIFY_NOT_EQUIPPED                           = 839,
    ERR_VOID_DEPOSIT_FULL                                   = 840,
    ERR_VOID_WITHDRAW_FULL                                  = 841,
    ERR_VOID_STORAGE_WRAPPED                                = 842,
    ERR_VOID_STORAGE_STACKABLE                              = 843,
    ERR_VOID_STORAGE_UNBOUND                                = 844,
    ERR_VOID_STORAGE_REPAIR                                 = 845,
    ERR_VOID_STORAGE_CHARGES                                = 846,
    ERR_VOID_STORAGE_QUEST                                  = 847,
    ERR_VOID_STORAGE_CONJURED                               = 848,
    ERR_VOID_STORAGE_MAIL                                   = 849,
    ERR_VOID_STORAGE_BAG                                    = 850,
    ERR_VOID_TRANSFER_STORAGE_FULL                          = 851,
    ERR_VOID_TRANSFER_INV_FULL                              = 852,
    ERR_VOID_TRANSFER_INTERNAL_ERROR                        = 853,
    ERR_VOID_TRANSFER_ITEM_INVALID                          = 854,
    ERR_DIFFICULTY_DISABLED_IN_LFG                          = 855,
    ERR_VOID_STORAGE_UNIQUE                                 = 856,
    ERR_VOID_STORAGE_LOOT                                   = 857,
    ERR_VOID_STORAGE_HOLIDAY                                = 858,
    ERR_VOID_STORAGE_DURATION                               = 859,
    ERR_VOID_STORAGE_LOAD_FAILED                            = 860,
    ERR_VOID_STORAGE_INVALID_ITEM                           = 861,
    ERR_PARENTAL_CONTROLS_CHAT_MUTED                        = 862,
    ERR_SOR_START_EXPERIENCE_INCOMPLETE                     = 863,
    ERR_SOR_INVALID_EMAIL                                   = 864,
    ERR_SOR_INVALID_COMMENT                                 = 865,
    ERR_CHALLENGE_MODE_RESET_COOLDOWN_S                     = 866,
    ERR_CHALLENGE_MODE_RESET_KEYSTONE                       = 867,
    ERR_PET_JOURNAL_ALREADY_IN_LOADOUT                      = 868,
    ERR_REPORT_SUBMITTED_SUCCESSFULLY                       = 869,
    ERR_REPORT_SUBMISSION_FAILED                            = 870,
    ERR_SUGGESTION_SUBMITTED_SUCCESSFULLY                   = 871,
    ERR_BUG_SUBMITTED_SUCCESSFULLY                          = 872,
    ERR_CHALLENGE_MODE_ENABLED                              = 873,
    ERR_CHALLENGE_MODE_DISABLED                             = 874,
    ERR_PETBATTLE_CREATE_FAILED                             = 875,
    ERR_PETBATTLE_NOT_HERE                                  = 876,
    ERR_PETBATTLE_NOT_HERE_ON_TRANSPORT                     = 877,
    ERR_PETBATTLE_NOT_HERE_UNEVEN_GROUND                    = 878,
    ERR_PETBATTLE_NOT_HERE_OBSTRUCTED                       = 879,
    ERR_PETBATTLE_NOT_WHILE_IN_COMBAT                       = 880,
    ERR_PETBATTLE_NOT_WHILE_DEAD                            = 881,
    ERR_PETBATTLE_NOT_WHILE_FLYING                          = 882,
    ERR_PETBATTLE_TARGET_INVALID                            = 883,
    ERR_PETBATTLE_TARGET_OUT_OF_RANGE                       = 884,
    ERR_PETBATTLE_TARGET_NOT_CAPTURABLE                     = 885,
    ERR_PETBATTLE_NOT_A_TRAINER                             = 886,
    ERR_PETBATTLE_DECLINED                                  = 887,
    ERR_PETBATTLE_IN_BATTLE                                 = 888,
    ERR_PETBATTLE_INVALID_LOADOUT                           = 889,
    ERR_PETBATTLE_ALL_PETS_DEAD                             = 890,
    ERR_PETBATTLE_NO_PETS_IN_SLOTS                          = 891,
    ERR_PETBATTLE_NO_ACCOUNT_LOCK                           = 892,
    ERR_PETBATTLE_WILD_PET_TAPPED                           = 893,
    ERR_PETBATTLE_RESTRICTED_ACCOUNT                        = 894,
    ERR_PETBATTLE_NOT_WHILE_IN_MATCHED_BATTLE               = 895,
    ERR_CANT_HAVE_MORE_PETS_OF_THAT_TYPE                    = 896,
    ERR_CANT_HAVE_MORE_PETS                                 = 897,
    ERR_PVP_MAP_NOT_FOUND                                   = 898,
    ERR_PVP_MAP_NOT_SET                                     = 899,
    ERR_PETBATTLE_QUEUE_QUEUED                              = 900,
    ERR_PETBATTLE_QUEUE_ALREADY_QUEUED                      = 901,
    ERR_PETBATTLE_QUEUE_JOIN_FAILED                         = 902,
    ERR_PETBATTLE_QUEUE_JOURNAL_LOCK                        = 903,
    ERR_PETBATTLE_QUEUE_REMOVED                             = 904,
    ERR_PETBATTLE_QUEUE_PROPOSAL_DECLINED                   = 905,
    ERR_PETBATTLE_QUEUE_PROPOSAL_TIMEOUT                    = 906,
    ERR_PETBATTLE_QUEUE_OPPONENT_DECLINED                   = 907,
    ERR_PETBATTLE_QUEUE_REQUEUED_INTERNAL                   = 908,
    ERR_PETBATTLE_QUEUE_REQUEUED_REMOVED                    = 909,
    ERR_PETBATTLE_QUEUE_SLOT_LOCKED                         = 910,
    ERR_PETBATTLE_QUEUE_SLOT_EMPTY                          = 911,
    ERR_PETBATTLE_QUEUE_SLOT_NO_TRACKER                     = 912,
    ERR_PETBATTLE_QUEUE_SLOT_NO_SPECIES                     = 913,
    ERR_PETBATTLE_QUEUE_SLOT_CANT_BATTLE                    = 914,
    ERR_PETBATTLE_QUEUE_SLOT_REVOKED                        = 915,
    ERR_PETBATTLE_QUEUE_SLOT_DEAD                           = 916,
    ERR_PETBATTLE_QUEUE_SLOT_NO_PET                         = 917,
    ERR_PETBATTLE_QUEUE_NOT_WHILE_NEUTRAL                   = 918,
    ERR_PETBATTLE_GAME_TIME_LIMIT_WARNING                   = 919,
    ERR_PETBATTLE_GAME_ROUNDS_LIMIT_WARNING                 = 920,
    ERR_HAS_RESTRICTION                                     = 921,
    ERR_ITEM_UPGRADE_ITEM_TOO_LOW_LEVEL                     = 922,
    ERR_ITEM_UPGRADE_NO_PATH                                = 923,
    ERR_ITEM_UPGRADE_NO_MORE_UPGRADES                       = 924,
    ERR_BONUS_ROLL_EMPTY                                    = 925,
    ERR_CHALLENGE_MODE_FULL                                 = 926,
    ERR_CHALLENGE_MODE_IN_PROGRESS                          = 927,
    ERR_CHALLENGE_MODE_INCORRECT_KEYSTONE                   = 928,
    ERR_BATTLETAG_FRIEND_NOT_FOUND                          = 929,
    ERR_BATTLETAG_FRIEND_NOT_VALID                          = 930,
    ERR_BATTLETAG_FRIEND_NOT_ALLOWED                        = 931,
    ERR_BATTLETAG_FRIEND_THROTTLED                          = 932,
    ERR_BATTLETAG_FRIEND_SUCCESS                            = 933,
    ERR_PET_TOO_HIGH_LEVEL_TO_UNCAGE                        = 934,
    ERR_PETBATTLE_INTERNAL                                  = 935,
    ERR_CANT_CAGE_PET_YET                                   = 936,
    ERR_NO_LOOT_IN_CHALLENGE_MODE                           = 937,
    ERR_QUEST_PET_BATTLE_VICTORIES_PVP_II                   = 938,
    ERR_ROLE_CHECK_ALREADY_IN_PROGRESS                      = 939,
    ERR_RECRUIT_A_FRIEND_ACCOUNT_LIMIT                      = 940,
    ERR_RECRUIT_A_FRIEND_FAILED                             = 941,
    ERR_SET_LOOT_PERSONAL                                   = 942,
    ERR_SET_LOOT_METHOD_FAILED_COMBAT                       = 943,
    ERR_REAGENT_BANK_FULL                                   = 944,
    ERR_REAGENT_BANK_LOCKED                                 = 945,
    ERR_GARRISON_BUILDING_EXISTS                            = 946,
    ERR_GARRISON_INVALID_PLOT                               = 947,
    ERR_GARRISON_INVALID_BUILDINGID                         = 948,
    ERR_GARRISON_INVALID_PLOT_BUILDING                      = 949,
    ERR_GARRISON_REQUIRES_BLUEPRINT                         = 950,
    ERR_GARRISON_NOT_ENOUGH_CURRENCY                        = 951,
    ERR_GARRISON_NOT_ENOUGH_GOLD                            = 952,
    ERR_GARRISON_COMPLETE_MISSION_WRONG_FOLLOWER_TYPE       = 953,
    ERR_ALREADY_USING_LFG_LIST                              = 954,
    ERR_RESTRICTED_ACCOUNT_LFG_LIST_TRIAL                   = 955,
    ERR_TOY_USE_LIMIT_REACHED                               = 956,
    ERR_TOY_ALREADY_KNOWN                                   = 957,
    ERR_TRANSMOG_SET_ALREADY_KNOWN                          = 958,
    ERR_NOT_ENOUGH_CURRENCY                                 = 959,
    ERR_SPEC_IS_DISABLED                                    = 960,
    ERR_FEATURE_RESTRICTED_TRIAL                            = 961,
    ERR_CANT_BE_OBLITERATED                                 = 962,
    ERR_ARTIFACT_RELIC_DOES_NOT_MATCH_ARTIFACT              = 963,
    ERR_MUST_EQUIP_ARTIFACT                                 = 964,
    ERR_CANT_DO_THAT_RIGHT_NOW                              = 965,
    ERR_AFFECTING_COMBAT                                    = 966,
    ERR_EQUIPMENT_MANAGER_COMBAT_SWAP_S                     = 967,
    ERR_EQUIPMENT_MANAGER_BAGS_FULL                         = 968,
    ERR_EQUIPMENT_MANAGER_MISSING_ITEM_S                    = 969,
    ERR_MOVIE_RECORDING_WARNING_PERF                        = 970,
    ERR_MOVIE_RECORDING_WARNING_DISK_FULL                   = 971,
    ERR_MOVIE_RECORDING_WARNING_NO_MOVIE                    = 972,
    ERR_MOVIE_RECORDING_WARNING_REQUIREMENTS                = 973,
    ERR_MOVIE_RECORDING_WARNING_COMPRESSING                 = 974,
    ERR_NO_CHALLENGE_MODE_REWARD                            = 975,
    ERR_CLAIMED_CHALLENGE_MODE_REWARD                       = 976,
    ERR_CHALLENGE_MODE_PERIOD_RESET_SS                      = 977,
    ERR_CANT_DO_THAT_CHALLENGE_MODE_ACTIVE                  = 978,
    ERR_TALENT_FAILED_REST_AREA                             = 979,
    ERR_CANNOT_ABANDON_LAST_PET                             = 980,
    ERR_TEST_CVAR_SET_SSS                                   = 981,
    ERR_QUEST_TURN_IN_FAIL_REASON                           = 982,
    ERR_CLAIMED_CHALLENGE_MODE_REWARD_OLD                   = 983,
};

#define MAX_ACCOUNT_TUTORIAL_VALUES 8

enum class RaidGroupReason : uint8
{
    NONE                    = 0,
    LOWLEVEL                = 1, // "You are too low level to enter this instance."
    ONLY                    = 2, // "You must be in a raid group to enter this instance."
    FULL                    = 3, // "The instance is full."
    REQUIREMENTS_UNMATCH    = 4  // "You do not meet the requirements to enter this instance."
};

enum class ResetFailedReason : uint8
{
    FAILED      = 0, // "Cannot reset %s.  There are players still inside the instance."
    ZONING      = 1, // "Cannot reset %s.  There are players in your party attempting to zone into an instance."
    OFFLINE     = 2  // "Cannot reset %s.  There are players offline in your party."
};

enum ObjectDBState
{
    DB_STATE_UNCHANGED = 0,
    DB_STATE_CHANGED = 1,
    DB_STATE_NEW = 2,
    DB_STATE_REMOVED = 3
};

enum class ChangeDifficultyResult : uint8
{
    DIFFICULTY_CHANGE_COOLDOWN_S = 0, // ERR_DIFFICULTY_CHANGE_COMBAT_COOLDOWN_S
    DIFFICULTY_CHANGE_WORLDSTATE = 1,
    DIFFICULTY_CHANGE_ENCOUNTER = 2,
    DIFFICULTY_CHANGE_COMBAT = 3,
    DIFFICULTY_CHANGE_PLAYER_BUSY = 4,
    DIFFICULTY_CHANGE_SET_COOLDOWN_S = 5,
    DIFFICULTY_CHANGE_ALREADY_STARTED = 6,
    DIFFICULTY_CHANGE_OTHER_HEROIC_S = 8,
    DIFFICULTY_CHANGE_HEROIC_INSTANCE_ALREADY_RUNNING = 9,
    DIFFICULTY_DISABLED_IN_LFG = 10,
    DIFFICULTY_CHANGE_BY_PARTY_LEADER = 11
};

enum class TutorialFrames : uint8
{
    TALENT = 1,
    SPEC = 2,
    GLYPH = 3,
    SPELLBOOK = 4,
    PROFESSIONS = 5,
    CORE_ABILITITES = 6,
    PET_JOURNAL = 7,
    WHAT_HAS_CHANGED = 8,
    GARRISON_BUILDING = 9,
    GARRISON_MISSION_LIST = 10,
    GARRISON_MISSION_PAGE = 11,
    GARRISON_LANDING = 12,
    GARRISON_ZONE_ABILITY = 13,
    WORLD_MAP_FRAME = 14,
    CLEAN_UP_BAGS = 15,
    BAG_SETTINGS = 16,
    REAGENT_BANK_UNLOCK = 17,
    TOYBOX_FAVORITE = 18,
    TOYBOX_MOUSEWHEEL_PAGING = 19,
    LFG_LIST = 20,
    TOYBOX = 21,
    HEIRLOOM_JOURNAL = 22,
    HEIRLOOM_JOURNAL_TAB = 23,
    HEIRLOOM_JOURNAL_LEVEL = 24,
    GAME_TIME_AUCTION_HOUSE = 25,
    BOOSTED_SPELL_BOOK = 26,
    ARTIFACT_KNOWLEDGE_LEVEL_LIMIT = 27,
    WRAPPED_COLLECTION_ITEMS = 28,
    VIEWABLE_ARTIFACT = 29,
    ARTIFACT_APPEARANCE_TAB = 30,
    ARTIFACT_RELIC_MATCH = 31,
    BOUNTY_INTRO = 32,
    BOUNTY_FINISHED = 33,
    IGNORE_QUEST = 34,
    TRANSMOG_JOURNAL_TAB = 35,
    TRANSMOG_MODEL_CLICK = 36,
    TRANSMOG_SPECS_BUTTON = 37,
    TRANSMOG_OUTFIT_DROPDOWN = 38,
    HONOR_TALENT_FIRST_TALENT = 39,
    HONOR_TALENT_HONOR_LEVELS = 40,
    HONOR_TALENT_PRESTIGE = 41,
    ARTIFACT_KNOWLEDGE = 42,
    INVENTORY_FIXUP_EXPANSION_LEGION = 43,
    INVENTORY_FIXUP_CHECK_EXPANSION_LEGION = 44,
    BONUS_ROLL_ENCOUNTER_JOURNAL_LINK = 45,
    FRIENDS_LIST_QUICK_JOIN = 46,
    REPUTATION_EXALTED_PLUS = 47,
    TRANSMOG_SETS_TAB = 48,
    TRANSMOG_SETS_VENDOR_TAB = 49,
    BRAWL = 50,

    Max
};

enum ElementsOfTotem
{
    Earth,
    Fire,
    Water,
    Air,
    MaxElements
};

enum TotemSpells
{
    // Earth
    EarthbindTotem           = 2484,
    ResonanceTotem           = 202188,
    EarthgrabTotem           = 51485,
    VoodooTotem              = 196932,
    EarthenWallTotem         = 198838,
    AncestralProtectionTotem = 207399,

    // Fire
    SkyfuryTotem             = 204330,
    EmberTotem               = 210657,
    LiquidMagmaTotem         = 192222,

    // Water
    CloudburstTotem          = 157153,
    HealingStreamTotem       = 5394,
    SpiritLinkTotem          = 98008,
    HealingTideTotem         = 108280,
    StormTotem               = 210651,

    // Air
    WindRushTotem            = 192077,
    TailwindTotem            = 210660,
    GroundingTotem           = 204336,
    WindfuryTotem            = 204332,
    CapacitorTotem           = 192058,
    CounterstrikeTotem       = 204331,
};

enum ShamanRaces
{
    OrcShaman,
    DwarfShaman,
    TaurenShaman,
    TrollShaman,
    GoblinShaman,
    DraeneiShaman,
    PandarenShaman,
    HighmountainTaurenShaman,
    ShamanRaceMax
};

const uint32 TotemModelId[MaxElements][ShamanRaceMax]
{
    {30757, 30753, 4588, 30761, 30782, 19073, 41669, 81443},
    {30758, 30754, 4589, 30762, 30783, 19074, 41670, 81444},
    {30759, 30755, 4587, 30763, 30784, 19075, 41671, 81442},
    {30756, 30736, 4590, 30760, 30781, 19071, 41668, 81441}
};

enum Affixes : uint32
{
    Overflowing     = 1,
    Skittish        = 2,
    Volcanic        = 3,
    Necrotic        = 4,
    Teeming         = 5,
    Raging          = 6,
    Bolstering      = 7,
    Sanguine        = 8,
    Tyrannical      = 9,
    Fortified       = 10,
    Bursting        = 11,
    Grievous        = 12,
    FelExplosives   = 13,
    Quaking         = 14,
    Relentless      = 15, // BFA
    Infested        = 16, // BFA

    MaxAffixes
};

constexpr auto AFFIXES_ALL = 
	((1 << Affixes::Overflowing) | (1 << Affixes::Skittish) | (1 << Affixes::Volcanic) |
	(1 << Affixes::Necrotic) | (1 << Affixes::Teeming) | (1 << Affixes::Raging) |
	(1 << Affixes::Bolstering) | (1 << Affixes::Sanguine) | (1 << Affixes::Tyrannical) |
	(1 << Affixes::Fortified) | (1 << Affixes::Bursting) | (1 << Affixes::Grievous) |
	(1 << Affixes::FelExplosives) | (1 << Affixes::Quaking) | (1 << Affixes::Relentless) | (1 << Affixes::Infested));

static const int32 Reputation_Cap    =  42000;
static const int32 Reputation_Bottom = -42000;

enum SpecialSpells : uint32
{
    SPELL_MERCENARY_CONTRACT_HORDE      = 193472,
    SPELL_MERCENARY_CONTRACT_ALLIANCE   = 193475,
};

#endif
