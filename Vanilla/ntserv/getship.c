/*
 * getship.c
 */
#include "copyright.h"
#include "config.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include "defs.h"
#include "struct.h"
#include "data.h"

/* fill in ship characteristics */

void getshipdefaults(void)
{
    shipvals[SCOUT].s_turns = 570000; /* scout */
    shipvals[SCOUT].s_accint = 200; /* scout: was 185 */
    shipvals[SCOUT].s_decint = 270; /* scout: was 270 */
    shipvals[SCOUT].s_accs = 100; /* scout:  */
    shipvals[SCOUT].s_torpdamage = 25; /* scout: was 25 */
    shipvals[SCOUT].s_plasmadamage = -1;	/* scout:  */
    shipvals[SCOUT].s_phaserfuse = 10; /* scout:  */
    shipvals[SCOUT].s_phaserdamage = 75; /* scout: was 75 */
    shipvals[SCOUT].s_torpspeed = 16; /* scout: was 16 */
    shipvals[SCOUT].s_torpfuse = 16; /* scout:  */
    shipvals[SCOUT].s_torpturns = 0; /* scout:  */
    shipvals[SCOUT].s_plasmaspeed = 0; /* scout:  */
    shipvals[SCOUT].s_plasmafuse = 0; /* scout:  */
    shipvals[SCOUT].s_plasmaturns = 0; /* scout:  */
    shipvals[SCOUT].s_maxspeed = 12; /* scout:  */
    shipvals[SCOUT].s_repair = 80; /* scout:  */
    shipvals[SCOUT].s_maxfuel = 5000; /* scout:  */
    shipvals[SCOUT].s_detcost = 100; /* scout:  */
    shipvals[SCOUT].s_torpcost = 7 * shipvals[SCOUT].s_torpdamage; /* scout:  */
    shipvals[SCOUT].s_plasmacost = 20 * shipvals[SCOUT].s_plasmadamage; /* scout:  */
    shipvals[SCOUT].s_phasercost = 7 * shipvals[SCOUT].s_phaserdamage; /* scout:  */
    shipvals[SCOUT].s_warpcost = 2; /* scout:  */
    shipvals[SCOUT].s_cloakcost = 17; /* scout:  */
    shipvals[SCOUT].s_recharge = 8; /* scout:  */
    shipvals[SCOUT].s_maxarmies = 2; /* scout:  */
    shipvals[SCOUT].s_maxshield = 75; /* scout: was 75 */
    shipvals[SCOUT].s_maxdamage = 75; /* scout:  */
    shipvals[SCOUT].s_wpncoolrate = 3; /* scout:  */
    shipvals[SCOUT].s_egncoolrate = 8; /* scout:  */
    shipvals[SCOUT].s_maxwpntemp = 1000;	/* scout:  */
    shipvals[SCOUT].s_maxegntemp = 1000;	/* scout:  */
    shipvals[SCOUT].s_type = SCOUT; /* scout:  */
    shipvals[SCOUT].s_mass = 1500; /* scout:  */
    shipvals[SCOUT].s_tractstr = 2000; /* scout:  */
    shipvals[SCOUT].s_tractrng = .7; /* scout:  */
    shipvals[SCOUT].s_width = 20; /* scout:  */
    shipvals[SCOUT].s_height = 20; /* scout:  */
    shipvals[DESTROYER].s_turns = 310000; /* destroyer: */
    shipvals[DESTROYER].s_accint = 200; /* destroyer: */
    shipvals[DESTROYER].s_decint = 300; /* destroyer: */
    shipvals[DESTROYER].s_accs = 100; /* destroyer: */
    shipvals[DESTROYER].s_torpdamage = 30; /* destroyer: */
    shipvals[DESTROYER].s_plasmadamage = 75;	/* destroyer: */
    shipvals[DESTROYER].s_phaserfuse = 10; /* destroyer: */
    shipvals[DESTROYER].s_phaserdamage = 85;	/* destroyer: */
    shipvals[DESTROYER].s_torpspeed = 14; /* destroyer: */
    shipvals[DESTROYER].s_torpfuse = 30; /* destroyer: */
    shipvals[DESTROYER].s_torpturns = 0; /* destroyer: */
    shipvals[DESTROYER].s_plasmaspeed = 15; /* destroyer: */
    shipvals[DESTROYER].s_plasmafuse = 30; /* destroyer: */
    shipvals[DESTROYER].s_plasmaturns = 1; /* destroyer: */
    shipvals[DESTROYER].s_maxspeed = 10; /* destroyer: */
    shipvals[DESTROYER].s_repair = 100; /* destroyer: */
    shipvals[DESTROYER].s_maxfuel = 7000; /* destroyer: */
    shipvals[DESTROYER].s_detcost = 100; /* destroyer: */
    shipvals[DESTROYER].s_torpcost = 7 * shipvals[DESTROYER].s_torpdamage; /* destroyer: */
    shipvals[DESTROYER].s_plasmacost = 30 * shipvals[DESTROYER].s_plasmadamage; /* destroyer: */
    shipvals[DESTROYER].s_phasercost = 7 * shipvals[DESTROYER].s_phaserdamage; /* destroyer: */
    shipvals[DESTROYER].s_warpcost = 3; /* destroyer: */
    shipvals[DESTROYER].s_cloakcost = 21; /* destroyer: */
    shipvals[DESTROYER].s_recharge = 11; /* destroyer: */
    shipvals[DESTROYER].s_maxarmies = 5; /* destroyer: */
    shipvals[DESTROYER].s_maxshield = 85; /* destroyer: */
    shipvals[DESTROYER].s_maxdamage = 85; /* destroyer: */
    shipvals[DESTROYER].s_wpncoolrate = 2; /* destroyer: */
    shipvals[DESTROYER].s_egncoolrate = 7; /* destroyer: */ /* was 6. 6/29/92 TC */
    shipvals[DESTROYER].s_maxwpntemp = 1000;	/* destroyer: */
    shipvals[DESTROYER].s_maxegntemp = 1000;	/* destroyer: */
    shipvals[DESTROYER].s_mass = 1800; /* destroyer: */
    shipvals[DESTROYER].s_tractstr = 2500; /* destroyer: */
    shipvals[DESTROYER].s_tractrng = .9; /* destroyer: */
    shipvals[DESTROYER].s_width = 20; /* destroyer: */
    shipvals[DESTROYER].s_height = 20; /* destroyer: */
    shipvals[DESTROYER].s_type = DESTROYER; /* destroyer: */
    shipvals[SGALAXY].s_turns = 192500;
    shipvals[SGALAXY].s_accint = 150;
    shipvals[SGALAXY].s_decint = 240;
    shipvals[SGALAXY].s_accs = 100;
    shipvals[SGALAXY].s_torpdamage = 40;
    shipvals[SGALAXY].s_plasmadamage = 100;
    shipvals[SGALAXY].s_phaserfuse = 10;
    shipvals[SGALAXY].s_phaserdamage = 100;
    shipvals[SGALAXY].s_torpspeed = 13;
    shipvals[SGALAXY].s_torpfuse = 35;
    shipvals[SGALAXY].s_torpturns = 0;
    shipvals[SGALAXY].s_plasmaspeed = 15;
    shipvals[SGALAXY].s_plasmafuse = 33;
    shipvals[SGALAXY].s_plasmaturns = 1;
    shipvals[SGALAXY].s_maxspeed = 9;
    shipvals[SGALAXY].s_repair = 112;
    shipvals[SGALAXY].s_maxfuel = 12000;
    shipvals[SGALAXY].s_detcost = 100;
    shipvals[SGALAXY].s_torpcost = 7 * shipvals[SGALAXY].s_torpdamage;
    shipvals[SGALAXY].s_plasmacost = 30 * shipvals[SGALAXY].s_plasmadamage;
    shipvals[SGALAXY].s_phasercost = 7 * shipvals[SGALAXY].s_phaserdamage;
    shipvals[SGALAXY].s_warpcost = 4;
    shipvals[SGALAXY].s_cloakcost = 26;
    shipvals[SGALAXY].s_recharge = 13;
    shipvals[SGALAXY].s_maxarmies = 5;
    shipvals[SGALAXY].s_maxshield = 140;
    shipvals[SGALAXY].s_maxdamage = 120;
    shipvals[SGALAXY].s_wpncoolrate = 2;
    shipvals[SGALAXY].s_egncoolrate = 6;
    shipvals[SGALAXY].s_maxwpntemp = 1000;
    shipvals[SGALAXY].s_maxegntemp = 1000;
    shipvals[SGALAXY].s_mass = 2050;
    shipvals[SGALAXY].s_tractstr = 3000;
    shipvals[SGALAXY].s_tractrng = 1.0;
    shipvals[SGALAXY].s_width = 20;
    shipvals[SGALAXY].s_height = 20;
    shipvals[SGALAXY].s_type = SGALAXY;
    shipvals[BATTLESHIP].s_turns = 75000; /* battleship: */
    shipvals[BATTLESHIP].s_accint = 80; /* battleship: */
    shipvals[BATTLESHIP].s_decint = 180; /* battleship: */
    shipvals[BATTLESHIP].s_accs = 100; /* battleship: */
    shipvals[BATTLESHIP].s_torpdamage = 40; /* battleship: */
    shipvals[BATTLESHIP].s_plasmadamage = 130; /* battleship: */
    shipvals[BATTLESHIP].s_phaserfuse = 10; /* battleship: */
    shipvals[BATTLESHIP].s_phaserdamage = 105; /* battleship: */
    shipvals[BATTLESHIP].s_torpspeed = 12; /* battleship: */
    shipvals[BATTLESHIP].s_torpfuse = 40; /* battleship: */
    shipvals[BATTLESHIP].s_torpturns = 0; /* battleship: */
    shipvals[BATTLESHIP].s_plasmaspeed = 15; /* battleship: */
    shipvals[BATTLESHIP].s_plasmafuse = 35; /* battleship: */
    shipvals[BATTLESHIP].s_plasmaturns = 1; /* battleship: */
    shipvals[BATTLESHIP].s_maxspeed = 8; /* battleship: */
    shipvals[BATTLESHIP].s_repair = 125; /* battleship: */
    shipvals[BATTLESHIP].s_maxfuel = 14000; /* battleship: */
    shipvals[BATTLESHIP].s_detcost = 100; /* battleship: */
    shipvals[BATTLESHIP].s_torpcost = 9 * shipvals[BATTLESHIP].s_torpdamage; /* battleship: */
    shipvals[BATTLESHIP].s_plasmacost = 30 * shipvals[BATTLESHIP].s_plasmadamage; /* battleship: */
    shipvals[BATTLESHIP].s_phasercost = 10 * shipvals[BATTLESHIP].s_phaserdamage; /* battleship: */
    shipvals[BATTLESHIP].s_warpcost = 6; /* battleship: */
    shipvals[BATTLESHIP].s_cloakcost = 30; /* battleship: */
    shipvals[BATTLESHIP].s_recharge = 14; /* battleship: */
    shipvals[BATTLESHIP].s_maxarmies = 6; /* battleship: */
    shipvals[BATTLESHIP].s_maxshield = 130; /* battleship: */
    shipvals[BATTLESHIP].s_maxdamage = 130; /* battleship: */
    shipvals[BATTLESHIP].s_wpncoolrate = 3; /* battleship: */
    shipvals[BATTLESHIP].s_egncoolrate = 6; /* battleship: */
    shipvals[BATTLESHIP].s_maxwpntemp = 1000;	/* battleship: */
    shipvals[BATTLESHIP].s_maxegntemp = 1000;	/* battleship: */
    shipvals[BATTLESHIP].s_mass = 2300; /* battleship: */
    shipvals[BATTLESHIP].s_tractstr = 3700; /* battleship: */
    shipvals[BATTLESHIP].s_tractrng = 1.2; /* battleship: */
    shipvals[BATTLESHIP].s_width = 20; /* battleship: */
    shipvals[BATTLESHIP].s_height = 20; /* battleship: */
    shipvals[BATTLESHIP].s_type = BATTLESHIP;	/* battleship: */
    shipvals[ASSAULT].s_turns = 120000; /* assault */
    shipvals[ASSAULT].s_accint = 100; /* assault */
    shipvals[ASSAULT].s_decint = 200; /* assault */
    shipvals[ASSAULT].s_accs = 100; /* assault */
    shipvals[ASSAULT].s_torpdamage = 30; /* assault */
    shipvals[ASSAULT].s_plasmadamage = -1;	/* assault */
    shipvals[ASSAULT].s_phaserfuse = 10; /* assault */
    shipvals[ASSAULT].s_phaserdamage = 80;	/* assault */
    shipvals[ASSAULT].s_torpspeed = 16; /* assault */
    shipvals[ASSAULT].s_torpfuse = 30; /* assault */
    shipvals[ASSAULT].s_torpturns = 0; /* assault */
    shipvals[ASSAULT].s_plasmaspeed = 0; /* assault */
    shipvals[ASSAULT].s_plasmafuse = 0; /* assault */
    shipvals[ASSAULT].s_plasmaturns = 0; /* assault */
    shipvals[ASSAULT].s_maxspeed = 8; /* assault */
    shipvals[ASSAULT].s_repair = 120; /* assault */
    shipvals[ASSAULT].s_maxfuel = 6000; /* assault */
    shipvals[ASSAULT].s_detcost = 100; /* assault */
    shipvals[ASSAULT].s_torpcost = 9 * shipvals[ASSAULT].s_torpdamage; /* assault */
    shipvals[ASSAULT].s_plasmacost = 20 * shipvals[ASSAULT].s_plasmadamage; /* assault */
    shipvals[ASSAULT].s_phasercost = 7 * shipvals[ASSAULT].s_phaserdamage; /* assault */
    shipvals[ASSAULT].s_warpcost = 3; /* assault */
    shipvals[ASSAULT].s_cloakcost = 17; /* assault */
    shipvals[ASSAULT].s_recharge = 10; /* assault */
    shipvals[ASSAULT].s_maxarmies = 20; /* assault */
    shipvals[ASSAULT].s_maxshield = 80; /* assault */
    shipvals[ASSAULT].s_maxdamage = 200; /* assault */
    shipvals[ASSAULT].s_wpncoolrate = 2; /* assault */
    shipvals[ASSAULT].s_egncoolrate = 6; /* assault */
    shipvals[ASSAULT].s_maxwpntemp = 1000;	/* assault */
    shipvals[ASSAULT].s_maxegntemp = 1200;	/* assault */
    shipvals[ASSAULT].s_mass = 2300; /* assault */
    shipvals[ASSAULT].s_tractstr = 2500; /* assault */
    shipvals[ASSAULT].s_tractrng = .7; /* assault */
    shipvals[ASSAULT].s_width = 20; /* assault */
    shipvals[ASSAULT].s_height = 20; /* assault */
    shipvals[ASSAULT].s_type = ASSAULT; /* assault */
    shipvals[STARBASE].s_turns = 50000; /* starbase */
    shipvals[STARBASE].s_accint = 100; /* starbase */
    shipvals[STARBASE].s_decint = 200; /* starbase */
    shipvals[STARBASE].s_accs = 100; /* starbase */
    shipvals[STARBASE].s_torpdamage = 30; /* starbase */
    shipvals[STARBASE].s_plasmadamage = 150; /* starbase */
    shipvals[STARBASE].s_phaserfuse = 4; /* starbase */
    shipvals[STARBASE].s_phaserdamage = 120; /* starbase */
    shipvals[STARBASE].s_torpspeed = 14; /* starbase */
    shipvals[STARBASE].s_torpfuse = 30; /* starbase */
    shipvals[STARBASE].s_torpturns = 0; /* starbase */
    shipvals[STARBASE].s_plasmaspeed = 15; /* starbase */
    shipvals[STARBASE].s_plasmafuse = 25; /* starbase */
    shipvals[STARBASE].s_plasmaturns = 1; /* starbase */
    shipvals[STARBASE].s_repair = 140; /* starbase */
    shipvals[STARBASE].s_maxfuel = 60000; /* starbase */
    shipvals[STARBASE].s_detcost = 100; /* starbase */
    shipvals[STARBASE].s_torpcost = 10 * shipvals[STARBASE].s_torpdamage; /* starbase */
    shipvals[STARBASE].s_plasmacost = 25 * shipvals[STARBASE].s_plasmadamage; /* starbase */
    shipvals[STARBASE].s_phasercost = 8 * shipvals[STARBASE].s_phaserdamage; /* starbase */
    shipvals[STARBASE].s_warpcost = 10; /* starbase */
    shipvals[STARBASE].s_cloakcost = 75; /* starbase */
    shipvals[STARBASE].s_recharge = 35; /* starbase */
    shipvals[STARBASE].s_maxarmies = 25; /* starbase */
    shipvals[STARBASE].s_maxshield = 500; /* starbase */
    shipvals[STARBASE].s_maxdamage = 600; /* starbase */
    shipvals[STARBASE].s_wpncoolrate = 4; /* starbase */
    shipvals[STARBASE].s_egncoolrate = 4; /* starbase */
    if (!chaos || practice_mode) {  /* practice is realistic 10/17/94 [007] */
        shipvals[STARBASE].s_maxspeed = 2; /* starbase */
        shipvals[STARBASE].s_maxwpntemp = 1300; /* starbase */
        shipvals[STARBASE].s_maxegntemp = 1000; /* starbase */
#ifdef SB_RAPID_COOLDOWN
	shipvals[STARBASE].s_wpncoolrate = 8; /* starbase */
#endif
    } else {
        shipvals[STARBASE].s_maxspeed = 3; /* starbase */
        shipvals[STARBASE].s_maxwpntemp = 999999; /* starbase */
        shipvals[STARBASE].s_maxegntemp = 999999; /* starbase */
    }
    shipvals[STARBASE].s_mass = 5000; /* starbase */
    shipvals[STARBASE].s_tractstr = 8000; /* starbase */
    shipvals[STARBASE].s_tractrng = 1.5; /* starbase */
    shipvals[STARBASE].s_width = 20; /* starbase */
    shipvals[STARBASE].s_height = 20; /* starbase */
    shipvals[STARBASE].s_type = STARBASE; /* starbase */
    shipvals[ATT].s_turns = 2140000000; /* att: */
    shipvals[ATT].s_accint = 3000; /* att: */
    shipvals[ATT].s_decint = 3000; /* att: */
    shipvals[ATT].s_accs = 100; /* att: */
    shipvals[ATT].s_torpdamage = 1000;	/* att: */
    shipvals[ATT].s_plasmadamage = 1000; /* att: */
    shipvals[ATT].s_phaserfuse = 2; /* att: */
    shipvals[ATT].s_phaserdamage = 10000; /* att: */
    shipvals[ATT].s_torpspeed = 30; /* att: */
    shipvals[ATT].s_torpfuse = 200; /* att: */
    shipvals[ATT].s_torpturns = 10; /* att: */
    shipvals[ATT].s_plasmaspeed = 45; /* att: */
    shipvals[ATT].s_plasmafuse = 10000; /* att: */
    shipvals[ATT].s_plasmaturns = 14; /* att: */
    shipvals[ATT].s_maxspeed = 60; /* att: */
    shipvals[ATT].s_repair = 30000; /* att: */
    shipvals[ATT].s_maxfuel = 60000; /* att: */
    shipvals[ATT].s_detcost = 1; /* att: */
    shipvals[ATT].s_torpcost = 1; /* att: */
    shipvals[ATT].s_plasmacost = 1; /* att: */
    shipvals[ATT].s_phasercost = 1; /* att: */
    shipvals[ATT].s_warpcost = 1; /* att: */
    shipvals[ATT].s_cloakcost = 1; /* att: */
    shipvals[ATT].s_recharge = 1000; /* att: */
    shipvals[ATT].s_maxarmies = 1000; /* att: */
    shipvals[ATT].s_maxshield = 30000;	/* att: */
    shipvals[ATT].s_maxdamage = 30000;	/* att: */
    shipvals[ATT].s_wpncoolrate = 100;	/* att: */
    shipvals[ATT].s_egncoolrate = 100;	/* att: */
    shipvals[ATT].s_maxwpntemp = 10000; /* att: */
    shipvals[ATT].s_maxegntemp = 10000; /* att: */
    shipvals[ATT].s_mass = 32765; /* att: */
    shipvals[ATT].s_tractstr = 32765; /* att: */
    shipvals[ATT].s_tractrng = 25; /* att: */
    shipvals[ATT].s_width = 20; /* att: */
    shipvals[ATT].s_height = 20; /* att: */
    shipvals[ATT].s_type = ATT; /* att: */
    shipvals[CRUISER].s_turns = 170000; /* cruiser: */
    shipvals[CRUISER].s_accint = 150; /* cruiser: */
    shipvals[CRUISER].s_decint = 200; /* cruiser: */
    shipvals[CRUISER].s_accs = 100; /* cruiser: */
    shipvals[CRUISER].s_torpdamage = 40; /* cruiser: */
    shipvals[CRUISER].s_plasmadamage = 100; /* cruiser: */
    shipvals[CRUISER].s_phaserfuse = 10; /* cruiser: */
    shipvals[CRUISER].s_phaserdamage = 100; /* cruiser: */
    shipvals[CRUISER].s_torpspeed = 12; /* cruiser: */
    shipvals[CRUISER].s_torpfuse = 40; /* cruiser: */
    shipvals[CRUISER].s_torpturns = 0; /* cruiser: */
    shipvals[CRUISER].s_plasmaspeed = 15; /* cruiser: */
    shipvals[CRUISER].s_plasmafuse = 35; /* cruiser: */
    shipvals[CRUISER].s_plasmaturns = 1; /* cruiser: */
    shipvals[CRUISER].s_maxspeed = 9; /* cruiser: */
    shipvals[CRUISER].s_repair = 110; /* cruiser: */
    shipvals[CRUISER].s_maxfuel = 10000; /* cruiser: */
    shipvals[CRUISER].s_detcost = 100; /* cruiser: */
    shipvals[CRUISER].s_torpcost = 7 * shipvals[CRUISER].s_torpdamage; /* cruiser: */
    shipvals[CRUISER].s_plasmacost = 30 * shipvals[CRUISER].s_plasmadamage; /* cruiser: */
    shipvals[CRUISER].s_phasercost = 7 * shipvals[CRUISER].s_phaserdamage; /* cruiser: */
    shipvals[CRUISER].s_warpcost = 4; /* cruiser: */
    shipvals[CRUISER].s_cloakcost = 26; /* cruiser: */
    shipvals[CRUISER].s_recharge = 12; /* cruiser: */
    shipvals[CRUISER].s_maxarmies = 10; /* cruiser: */
    shipvals[CRUISER].s_maxshield = 100; /* cruiser: */
    shipvals[CRUISER].s_maxdamage = 100; /* cruiser: */
    shipvals[CRUISER].s_wpncoolrate = 2; /* cruiser: */
    shipvals[CRUISER].s_egncoolrate = 6; /* cruiser: */
    shipvals[CRUISER].s_maxwpntemp = 1000;	/* cruiser: */
    shipvals[CRUISER].s_maxegntemp = 1000;	/* cruiser: */
    shipvals[CRUISER].s_mass = 2000; /* cruiser: */
    shipvals[CRUISER].s_tractstr = 3000; /* cruiser: */
    shipvals[CRUISER].s_tractrng = 1.0; /* cruiser: */
    shipvals[CRUISER].s_width = 20; /* cruiser: */
    shipvals[CRUISER].s_height = 20; /* cruiser: */
    shipvals[CRUISER].s_type = CRUISER; /* cruiser: */
}


void getship( struct ship *shipp, int s_type)
{

    memcpy((char *) shipp, (char *) &(shipvals[s_type]), sizeof (struct ship));

}
