#ifndef INC_S_PORT_ARMV6M_H_
#define INC_S_PORT_ARMV6M_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int regs[12];   //psp,r4-r12,lr,sp
} ucontext_t;

//3. Implement the initilization function for clock. Leave it blank if not required.
void my_clock_init(void);

//4. Implement the function of getting current clock ticks.
my_clock_t my_clock(void);

//5. Implement the idle delay function.
void my_on_idle(uint64_t max_idle_ms);

#ifdef __cplusplus
}
#endif
#endif
