/*
 * Deep Neural Network Framwork designed by Wangjun
 * Define Some Core Struct 
 */

#ifndef TINY_DNN_CORE_CORE_H
#define TINY_DNN_CORE_CORE_H

enum DNN_STATUS{
    DNN_SUCCESSFUL = 0,
    DNN_ERROR,
    DNN_INTERRUPTION
};

enum Layout{
    DNN_LAYOUT_NCHW = 0,
    DNN_LAYOUT_NHWC = 1,
    DNN_LAYOUT_ARRAY = 3
};

enum DataType{
    DNN_DATATYPE_INT32 = 0,
    DNN_DATATYPE_UINT32,
    DNN_DATATYPE_INT16,
    DNN_DATATYPE_INT8,
    DNN_DATATYPE_FLOAT32,
    DNN_DATATYPE_FLOAT16,
    DNN_DATATYPE_FLOAT64,
};

#endif 