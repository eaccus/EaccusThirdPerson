#!/bin/sh
UE_TRUE_SCRIPT_NAME=$(echo \"$0\" | xargs readlink -f)
UE_PROJECT_ROOT=$(dirname "$UE_TRUE_SCRIPT_NAME")
chmod +x "$UE_PROJECT_ROOT/Binaries/Linux/ThirdPerson"
#"$UE_PROJECT_ROOT/Binaries/Linux/ThirdPerson" ThirdPerson "$@" 
"$UE_PROJECT_ROOT/Binaries/Linux/ThirdPerson" ThirdPerson "-RenderOffscreen" "-Windowed" "-ForceRes" "-ResX=1920" "-ResY=1080" "-PixelStreamingIP=127.0.0.1" "-PixelStreamingPort=8888"
