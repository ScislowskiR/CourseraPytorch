/*
#include <stdio.h>
struct state;
typedef void state_fn(struct state *);
struct state{
    state_fn * next;
    int i; // data
};
state_fn foo, bar;
void foo(struct state * state){
    printf("%s %i\n", __func__, ++state->i);
    state->next = bar;
}
void bar(struct state * state){
    printf("%s %i\n", __func__, ++state->i);
    state->next = state->i < 10 ? foo : 0;
}
int main(void){
    struct state state = { foo, 0 };
    while(state.next) state.next(&state);
}*/
/*#include <stdio.h>
struct state;
typedef void state_fn(struct state *);
struct state{
    state_fn * next;
    int i; // data
};
state_fn foo, bar;
void foo(struct state * state){
    printf("%s %i\n", __func__, ++state->i);
    state->next = bar;
}
void bar(struct state * state){
    printf("%s %i\n", __func__, ++state->i);
    state->next = state->i < 10 ? foo : 0;
}
int main(void){
    struct state state = { foo, 0 };
    while(state.next) state.next(&state);
}*/

/*
#include <stdio.h>
#include <stdbool.h>

typedef enum State {
    LED_OFF , // Stan S1
    LED_ON // Stan S2
}State_t;
void turnOnLed () ;
void turnOffLed () ;
unsigned short getNextBit();
State_t currentState = LED_OFF ;
int main(){
    while ( true ) {
        unsigned short nextBit = getNextBit();
        switch ( currentState ) {
            case LED_OFF :
                if ( nextBit == 1) {
                    turnOnLed();
                    currentState = LED_ON;
                }
                break;
            case LED_ON :
                if ( nextBit == 0) {
                    turnOffLed();
                    currentState = LED_OFF;
                }
            break;
        }
    }
}*/
