#ifndef COAP_H
#define COAP_H
#include <string>

class Coap {
 private:
  std::string host;
  int port;
  bool doPrintInfo;

 public:
  Coap(std::string host, int port);
  void printInfo();
};

#endif
