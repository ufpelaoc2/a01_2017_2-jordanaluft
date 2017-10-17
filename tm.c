#include "tm.h"
#include <math.h>

uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2, float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem){
  float tempo_medio;

  // nao ha acesso ao nivel l1 - acessos apenas ate memoria principal
  if (acesso_l1 == 0){
    tempo_medio = acesso_mem;
    return tempo_medio;
  }

  // acessos ate nivel l1
  else if (acesso_l2 == 0){
    tempo_medio = ceil(acesso_l1 +  acesso_mem * (t_miss_l1 / 100));
    return tempo_medio;
  }
}
