// Trabajo practico Final
// Materia: Electronica Digital II - 2019 (ECyT - UNSAM)
//
// Docentes:
//	- Sagreras Miguel
//	- Alvarez Nicolas
// Alumnos:
// 	- Gonzalez Joaquin - joagonzalez@gmail.com
// 	- Pedraza Sebastian - sebastianpedraza2002@yahoo.com.ar

/************************************************************************************
 Systick
 ************************************************************************************/
#define _SysTick_BASE		0xE000E010	// Systick Base Address
#define _SysTick			((SysTick_T 	*) 	_SysTick_BASE )

// SysTick CTRL: Mascaras (ARM pag. 4-33/4-35)
#define _SysTick_CTRL_CLKSOURCE_PROC_Msk	(1 << 2)	// SysTick CTRL: CLKSOURCE Mask
#define _SysTick_CTRL_CLKSOURCE_EXT_Msk		(0 << 2)	// SysTick CTRL: CLKSOURCE Mask
#define _SysTick_CTRL_TICKINT_Msk	(1 << 1)	// SysTick CTRL: TICKINT Mask
#define _SysTick_CTRL_ENABLE_Msk	(1 << 0)	// SysTick CTRL: ENABLE Mask

// SysTick (System Timer)
typedef struct {
  int CTRL;					// Offset: 0x000 (R/W)  SysTick Control and Status Register
  int LOAD;					// Offset: 0x004 (R/W)  SysTick Reload Value Register
  int VAL;					// Offset: 0x008 (R/W)  SysTick Current Value Register
  int CALIB;				// Offset: 0x00C (R/ )  SysTick Calibration Register
} SysTick_T;

