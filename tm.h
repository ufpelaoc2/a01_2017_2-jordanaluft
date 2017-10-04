#ifndef _TM_H_
#define _TM_H_

#include <stdint.h>


uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2,  
	float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem);


#endif // _TM_H_
