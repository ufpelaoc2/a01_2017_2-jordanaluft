#include "tm.h"
#include <math.h>

uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2, float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem){
  float tempo_medio;

  // tratamento de valores invalidos - quando a porcentagem de falhas for menor que 0% ou maior que 100%
  if (t_miss_l1 < 0 || t_miss_l2 < 0 || t_miss_l3 < 0 || t_miss_l1 > 100 || t_miss_l2 > 100|| t_miss_l3 > 100)
    return 0;

  // nao ha acesso ao nivel l1 - acessos apenas ate memoria principal
  else if (acesso_l1 == 0){
    tempo_medio = acesso_mem;
    return tempo_medio;
  }

  // acessos ate nivel l1
  else if (acesso_l2 == 0){
    tempo_medio = ceil(acesso_l1 +  acesso_mem * (t_miss_l1 / 100));
    return tempo_medio;
  }

  // acessos ate nivel l2
  else if (acesso_l3 == 0){
    tempo_medio = ceil(acesso_l1 + (t_miss_l1 / 100) * (acesso_l2 + (t_miss_l2 / 100) * acesso_mem));
    return tempo_medio;
  }

  // acessos nivel l3
  else{
    tempo_medio = ceil(acesso_l1 + (t_miss_l1 / 100) * (acesso_l2 + (t_miss_l2 / 100) * (acesso_l3 + (t_miss_l3 / 100) * acesso_mem)));
    return tempo_medio;
  }
}
