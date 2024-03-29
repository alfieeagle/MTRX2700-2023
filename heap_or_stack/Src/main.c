/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

// define a struct with a 16 byte string, 2 uint32_t values
//  and 4 uint8_t values called module_data
typedef struct {
  uint8_t module_name[16];
  uint32_t module_id;
  uint32_t module_version;
  uint8_t module_status;
  uint8_t module_error;
  uint8_t module_warning;
  uint8_t module_info;
} module_data;


int main(void)
{
  // create three instances of the module_data struct on the stack with initial values of zero
  module_data module1 = {0};
  module_data module2;
  
  // create a pointer to the first module_data struct
  module_data *module1_ptr = &module1;

  // create two instances of module_data on the heap
  module_data *module3_ptr = malloc(sizeof(module_data));
  module_data *module4_ptr = malloc(sizeof(module_data));

  // compare the values inside the structs of module1 and module3_ptr
  if (memcmp(&module1, module3_ptr, sizeof(module_data)) == 0) {
    // if the data is the same, set the module_status of module3_ptr to 1
    module3_ptr->module_status = 1;
  }
  // clear the data in module3_ptr and module4_ptr
  memset(module3_ptr, 0, sizeof(module_data));
  memset(module4_ptr, 0, sizeof(module_data));

  // compare the values inside the structs of module1 and module3_ptr
  if (memcmp(&module1, module3_ptr, sizeof(module_data)) == 0) {
    // if the data is the same, set the module_status of module3_ptr to 1
    module3_ptr->module_status = 1;
  }
  

    /* Loop forever */
	for(;;);
}
