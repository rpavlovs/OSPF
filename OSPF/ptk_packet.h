#ifndef PTK_PACKET_INCLUDED
#define PTK_PACKET_INCLUDED

struct pkt_HELLO
{
    unsigned int router_id;     /* id of the router who sends the HELLO PDU */
    unsigned int link_id;       /* id of the link through which it is sent */
}

struct pkt_LSPDU
{
    unsigned int sender;        /* sender of the LS PDU */
    unsigned int router_id;     /* router id */
    unsigned int link_id;       /* link id */
    unsigned int cost;          /* cost of the link */
    unsigned int via;           /* id of the link through which the LS PDU is sent */
}

struct pkt_INIT
{
    unsigned int router_id;     /* id of the router that send the INIT PDU */
}


#endif // PTK_PACKET_INCLUDED
