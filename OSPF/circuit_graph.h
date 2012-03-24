#ifndef CIRCUIT_GRAPH_H_INCLUDED
#define CIRCUIT_GRAPH_H_INCLUDED

#define NBR_ROUTER 5                        /* for simplicity we consider only 5 routers */

struct link_cost
{
    unsigned int link;                      /* link id */
    unsigned int cost;                      /* associated cost */
}

struct circuit_DB
{
    unsigned int nbr_link;                  /* number of links attached to a router */
    struct link_cost linkcost[NBR_ROUTER];  /* we assume that at most NBR_ROUTER links are attached to each router */
}


#endif // CIRCUIT_GRAPH_H_INCLUDED
