/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(1)                                                        */
/* BINDTOOL_HEADER_FILE(display_text_msg.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0dd59e74404a9a7ccac265575de80ace)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <display/display_text_msg.h>
// pydoc.h is automatically generated in the build directory
#include <display_text_msg_pydoc.h>

void bind_display_text_msg(py::module& m)
{

    using text_msg    = ::gr::display::text_msg;


    py::class_<text_msg, gr::block, gr::basic_block,
        std::shared_ptr<text_msg>>(m, "text_msg", D(text_msg))

        .def(py::init(&text_msg::make),
           py::arg("label"),
           py::arg("message_key"),
           py::arg("splitlength"),
           py::arg("parent") = nullptr,
           D(text_msg,make)
        )
        




        
        .def("exec_",&text_msg::exec_,       
            D(text_msg,exec_)
        )


        
        .def("qwidget",&text_msg::qwidget,       
            D(text_msg,qwidget)
        )



        .def("pyqwidget",
            [](std::shared_ptr<text_msg> p) {
               return PyLong_AsLongLong(p->pyqwidget());
        },       
            D(text_msg,pyqwidget)
        )

        ;




}








