// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <string.h>
#ifdef WIN32
#include <Windows.h>
#endif
// #include "stdafx.h"


// TODO:  在此处引用程序需要的其他头文件

// glew扩展库
#include <gl/glew.h>
#pragma comment(lib, "glew32.lib")
// freeGLUT窗口库
#include <freeglut.h>
// 自定义3d函数库
#include "ogldev_math_3d.h"
// 自定义工具函数
#include "ogldev_util.h"
// 管线类
#include "ogldev_pipeline.h"
// AntTweakBar.lib
#include <AntTweakBar.h>
#include "ogldev_glut_backend.h"
#include "ogldev_camera.h"

//#include <sys/time.h>
