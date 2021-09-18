#include <Arduino.h>
#include "External.h"

String rootTemplate  = "\
    <!DOCTYPE html>\
    <html>\
    <head>\
    <head>\
    <link rel=\"icon\" sizes=\"256x256\" href=\"https://bienesraicesmariposa.com/wp-content/uploads/2020/06/brm-fb.png\">\
    <link rel=\"manifest\" href=\"/manifest.json\">\
    </head>\
    <body>\
    <h1>CatFeeder Bitchaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa &#128522;</h1>\
    </body>\
    </html>";

String manifestTemplate = "\
    {\"name\": \"CatFeeder\",\
    \"icons\": [{\
    \"src\": \"https://bienesraicesmariposa.com/wp-content/uploads/2020/06/brm-fb.png\",\
    \"sizes\": \"256x256\",\
    \"type\": \"image/png\"\
    }],\
    \"manifest_version\": 3,\
    \"version\": \"versionString\",\
    \"short_name\": \"CatFeeder\",\
    \"start_url\": \"/\",\
    \"theme_color\": \"#000000\",\
    \"background_color\": \"#FFFFFF\",\
    \"display\": \"standalone\",\
    \"orientation\": \"portrait\"\
    }";
