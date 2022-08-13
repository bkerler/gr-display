#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Copyright 2020 dl1ksv.
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

from gnuradio import gr, gr_unittest
from PyQt5 import Qt
import sip

try:
    from display_python import show_image
except ImportError:
    import os
    import sys
    dirname, filename = os.path.split(os.path.abspath(__file__))
    sys.path.append(os.path.join(dirname, "bindings"))
    from display import show_image

class qa_show_image(gr_unittest.TestCase):

    def setUp(self):
        self.tb = gr.top_block()

    def tearDown(self):
        self.tb = None

    def test_instance(self):
        instance = show_image(1024 ,512,None)
        b = sip.wrapinstance(instance.pyqwidget(),Qt.QWidget)        

    def test_001_descriptive_test_name(self):
        # set up fg
        self.tb.run()
        # check data


if __name__ == '__main__':
    gr_unittest.run(qa_show_image)
