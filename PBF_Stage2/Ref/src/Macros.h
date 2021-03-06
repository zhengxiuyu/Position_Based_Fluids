#ifndef MACROS_H_
#define MACROS_H_

#define USE_TRANSPARENT

#define blockSize 128
#define checkCUDAErrorWithLine(msg) checkCUDAError(msg, __LINE__)
#define max(x,y) (x)>(y)?(x):(y)
#define min(x,y) (x)<(y)?(x):(y)
#define SHARED 0
#define PRESSURE 1
#define HEAP 0

#define GravityScale 9.8f
//#define ParticleConts 10000
#define DT 0.03

#define BOX_X 20
#define BOX_Y 20
#define BOX_Z 100

#define SOLVER_ITERATIONS 3
#define MAX_NEIGHBORS 30
#define REST_DENSITY 1000.0f
#define H 2.0f // smoothing radius
#define collision_restitution 0.001f
#define K_EPSILON 0.001f
#define frozenDistance 0.01f
#define POW_H_9 (float)(H*H*H*H*H*H*H*H*H) // h^9
#define POW_H_6 (float)(H*H*H*H*H*H) // h^6
#define RELAXATION .01 // relaxation term in lambda calculation

#define JACOBI_ITERATIONS 10

//Layer mask

#define FLUID			(0x1)
#define CONTAINER		(0x2)
#define RIGID_BODY		(0x4)
#define FROZEN			(1<<31)

#define PI_FLOAT				3.141592653589793f
//#define DELTA_Q				(float)(0.1*core_radius)

#define SQR(x)					((x) * (x))
#define CUBE(x)					((x) * (x) * (x))
#define POW6(x)					(CUBE(x) * CUBE(x))
#define POW9(x)					(POW6(x) * CUBE(x))


#if PRESSURE == 1
	#define DELTA_Q (float)(0.1*H)
	#define PRESSURE_K 0.1
	#define PRESSURE_N 6
#endif


#endif