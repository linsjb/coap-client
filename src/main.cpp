#include "Coap.h"
#include "Server.h"

int main() {
  Coap coapClient("127.0.0.1", 5683);
  coapClient.printInfo();
  return 0;
}
