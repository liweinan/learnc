#include <stdio.h>
#include <stdlib.h>

char *x(char *p) {
    return p;
}

char *y(char *p) {
    return p;
}

int main() {
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char *(*p_x)(char *);
    p_x = x;

    printf("%s\n", p_x("Red"));
    printf("%s\n", p_x("Blue"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    typedef char *(*p_x_t)(char *);
    p_x_t p2_x = x;

    printf("%s\n", p2_x("Black"));
    printf("%s\n", p2_x("White"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char *(*p_xy[2])(char *);
    p_xy[0] = x;
    p_xy[1] = y;

    printf("%s\n", p_xy[0]("Tomato"));
    printf("%s\n", p_xy[1]("Kiwi"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    typedef char *(*p_xy_t[2])(char *);
    p_xy_t p2_xy;
    p2_xy[0] = x;
    p2_xy[1] = y;

    printf("%s\n", p2_xy[0]("Banana"));
    printf("%s\n", p2_xy[1]("Apple"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    p_xy_t *pp_xy;
    pp_xy = &p_xy;

    printf("%s\n", (*pp_xy)[0]("Earth"));
    printf("%s\n", (*pp_xy)[1]("Mars"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char *(*(*pp2_xy))(char *);
    pp2_xy = &p_xy;
    printf("%s\n", pp2_xy[0]("Jupiter"));
    printf("%s\n", pp2_xy[1]("Sun"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    typedef char *(*(*pp_xy_t))(char *);
    pp_xy_t pp3_xy = &p_xy;
    printf("%s\n", pp3_xy[0]("Mercury"));
    printf("%s\n", pp3_xy[1]("Neptune"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char *(*(*pPp_xy[2]))(char *);
    pPp_xy[0] = pp_xy;
    pPp_xy[1] = pp2_xy;

    printf("%s\n", pPp_xy[0][0]("Are"));
    printf("%s\n", pPp_xy[0][1]("you"));
    printf("%s\n", pPp_xy[1][0]("ok"));
    printf("%s\n", pPp_xy[1][1]("?"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    pp_xy_t pPp2_xy[2];

    pPp2_xy[0] = pp_xy;
    pPp2_xy[1] = pp2_xy;
    printf("%s\n", pPp2_xy[0][0]("I"));
    printf("%s\n", pPp2_xy[0][1]("am"));
    printf("%s\n", pPp2_xy[1][0]("fine"));
    printf("%s\n", pPp2_xy[1][1]("!"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    p_xy_t *pPp3_xy[2];

    pPp3_xy[0] = pp_xy;
    pPp3_xy[1] = pp2_xy;
    printf("%s\n", (*pPp3_xy[0])[0]("How"));
    printf("%s\n", (*pPp3_xy[0])[1]("are"));
    printf("%s\n", (*pPp3_xy[1])[0]("you"));
    printf("%s\n", (*pPp3_xy[1])[1]("?"));

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");


}