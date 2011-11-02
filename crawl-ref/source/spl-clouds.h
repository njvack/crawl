#ifndef SPL_CLOUDS_H
#define SPL_CLOUDS_H

#include "spl-cast.h"

struct bolt;

spret_type conjure_flame(int pow, const coord_def& where, bool fail);
spret_type stinking_cloud(int pow, bolt &beam, bool fail);

void big_cloud(cloud_type cl_type, const actor *agent, const coord_def& where,
               int pow, int size, int spread_rate = -1, int colour = -1,
               std::string name = "", std::string tile = "");

spret_type cast_big_c(int pow, cloud_type cty, const actor *caster, bolt &beam,
                      bool fail);

spret_type cast_ring_of_flames(int power, bool fail);
void manage_fire_shield(int delay);

spret_type cast_corpse_rot(bool fail);
void corpse_rot(actor* caster);

int make_a_normal_cloud(coord_def where, int pow, int spread_rate,
                        cloud_type ctype, const actor *agent, int colour = -1,
                        std::string name = "", std::string tile = "",
                        int excl_rad = -1);

std::string get_evaporate_result_list(int potion);
spret_type cast_evaporate(int pow, bolt& beem, int potion, bool fail);

int holy_flames(monster* caster, actor* defender);
#endif
