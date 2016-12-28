/*
 * Copyright 2016 Capital One Services, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __GIRAFFEZ_EXPORT_OBJECT_H
#define __GIRAFFEZ_EXPORT_OBJECT_H

#include <Python.h>

// Teradata Parallel Transporter API
//#include <connection.h>
//#include <schema.h>

//#include "encoder.h"
#include "connection.h"

#ifdef __cplusplus
extern "C" {
#endif

//using namespace teradata::client::API;

typedef struct {
    PyObject_HEAD
    //bool connected;
    //int status;
    //Connection *conn;
    //TeradataEncoder *encoder;
    Giraffez::Connection *conn;
} Export;

extern PyTypeObject ExportType;

#ifdef __cplusplus
}
#endif

#endif
