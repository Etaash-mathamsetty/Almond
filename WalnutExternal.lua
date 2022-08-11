-- WalnutExternal.lua

IncludeDir = {}
IncludeDir["glm"] = "../vendor/glm"
IncludeDir["SDL"] = "../vendor/SDL/include"

Library = {}
Library["SDL"] = "../vendor/SDL/"

group "Dependencies"
   include "vendor/imgui"
   include "vendor/SDL"
group ""

group "Core"
include "Walnut"
group ""
