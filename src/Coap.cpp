#include "Coap.h"

#include <iostream>

Coap::Coap(std::string host, int port) {
  std::cout << "Hello Coap lets rock!" << std::endl;

  this->host = host;
  this->port = port;
}

void Coap::printInfo() {
  std::cout << "CoAp client information:" << std::endl;
  std::cout << "Host: " << this->host << std::endl;
  std::cout << "Port: " << this->port << std::endl;
}
