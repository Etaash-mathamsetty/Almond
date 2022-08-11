-- WalnutExternal.lua

IncludeDir = {}
IncludeDir["glm"] = "../vendor/glm"
IncludeDir["SDL"] = "../vendor/SDL/include"

Library = {}
if os.ishost("linux") and os.istarget("linux") then
   Library["SDL"] = "../vendor/SDL/build/libSDL2.la"
end

group "Dependencies"
      include "vendor/imgui"
      -- include "vendor/SDL"
group ""

group "Core"
include "Almond"
group ""
