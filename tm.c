#include "tm.h"
#include <math.h>

uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2, float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem){
  float tempo_medio;

  if (acesso_l1 == 0){
    tempo_medio = acesso_mem;
    return tempo_medio;
  }


}
