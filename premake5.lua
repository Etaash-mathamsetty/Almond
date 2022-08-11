-- premake5.lua
workspace "AlmondApp"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "AlmondApp"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "AlmondExternal.lua"
include "AlmondApp"
