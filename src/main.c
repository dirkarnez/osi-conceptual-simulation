#include <stdio.h>

enum Role
{
    sender,
    receiver
};

enum Connection
{
    wifi,
    ethernet
};

/*
  HTTP, etc.
*/
void osi_application_layer(enum Role role, enum Connection connection) {

}

/*
  SSL/TLS, etc.
*/
void osi_presentation_layer(enum Role role, enum Connection connection) {

}

/*
  ensuring specific communication open and synchronized, etc.
*/
void osi_session_layer(enum Role role, enum Connection connection) {

}

/*
  TCP/UDP
*/
void osi_transport_layer(enum Role role, enum Connection connection) {

}

/*
  Stop and wait, IPV4 frame, fragmentation, addressing, routing, etc.
*/
void osi_network_layer(enum Role role, enum Connection connection) {

}

/*
  hamming code, checksum, HDLC, PPP, MAC, CSMA, CDMA, etc.
*/
void osi_data_link_layer(enum Role role, enum Connection connection) {

}

/*
  line-coding, etc.
*/
void osi_physical_layer(enum Role role, enum Connection connection) {

}

void fake_webbrowsing() {
    
}

void fake_ssl_tls_encryption() {
    
}

int main() {
    char msg[] = "Hello Computer B, i am Computer A!";
    printf("msg %d", sizeof(msg)); // contains \0

    enum Role role_sender = sender;

    osi_application_layer(sender);
    osi_presentation_layer(sender);
    osi_session_layer(sender);
    osi_transport_layer(sender);
    osi_network_layer(sender);
    osi_data_link_layer(sender);
    osi_physical_layer(sender);
    
    enum Role role_receiver = receiver;
    osi_physical_layer(receiver);
    osi_data_link_layer(receiver);
    osi_network_layer(receiver);
    osi_transport_layer(receiver);
    osi_session_layer(receiver);
    osi_presentation_layer(receiver);
    osi_application_layer(receiver);
    
    return 0;
}
