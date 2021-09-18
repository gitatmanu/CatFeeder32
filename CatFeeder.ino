#include <WiFi.h>
#include <WebServer.h>
#include "External.h"

WebServer server(88);

void setup() {
  Serial.begin(9600);
  Serial.println("Try Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected successfully");
  Serial.print("Got IP: ");
  Serial.println(WiFi.localIP());

  server.on("/", handle_root);
  server.on("/manifest.json", handle_manifest);

  server.begin();
  Serial.println("HTTP server started");
  delay(100);
}

void loop() {
  server.handleClient();
  delay(1);
}


void handle_root() {
  server.send(200, "text/html", rootTemplate);
}

void handle_manifest() {
  server.send(200, "application/json", manifestTemplate);
}
