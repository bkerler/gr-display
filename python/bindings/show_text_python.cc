/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(1)                                                        */
/* BINDTOOL_HEADER_FILE(show_text.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1a31fd95a45a9b99dafd0e189074c6a1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <display/show_text.h>
// pydoc.h is automatically generated in the build directory
#include <show_text_pydoc.h>

void bind_show_text(py::module& m)
{

    using show_text    = ::gr::display::show_text;


    py::class_<show_text, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<show_text>>(m, "show_text", D(show_text))

        .def(py::init(&show_text::make),
           py::arg("label"),
           py::arg("parent") = (QWidget *) __null,
           D(show_text,make)
        )
        

        //.def("pyqwidget",&show_text::pyqwidget,
        //    D(show_text,pyqwidget)
        //)
        // For the sip conversion to python to work, the widget object
        // needs to be explicitly converted to long long.
        .def(
            "pyqwidget",
            [](std::shared_ptr<show_text> p) {
                return PyLong_AsLongLong(p->pyqwidget());
            },
            D(show_text, pyqwidget))

        ;


}







