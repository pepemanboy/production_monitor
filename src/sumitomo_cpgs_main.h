/** @file
  CPG Main file

  Calls setup and void loops of either master or slave.

  @date 2019-01-31
  @author pepemanboy

  Copyright 2019 Cirotec Automation

  Permission is hereby granted, free of charge, to any person obtaining a copy 
  of this software and associated documentation files (the "Software"), to deal 
  in the Software without restriction, including without limitation the rights 
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
  copies of the Software, and to permit persons to whom the Software is 
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in 
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
  SOFTWARE.
*/

#ifndef SUMITOMO_CPGS_MAIN_H
#define SUMITOMO_CPGS_MAIN_H

/// CONFIGURABLE DEFINES
#define MASTER
#define DEBUG

/// INSTANTIATE OBJECT
#ifdef MASTER
#include "sumitomo_cpgs_master.h"
CPG_Master cpg;
#else
#include "sumitomo_cpgs_slave.h"
CPG_Slave cpg;
#endif

/// ARDUINO SETUP FUNCTION
void setup()
{
  cpg.setup();
}

/// ARDUINO LOOP FUNCTION
void loop()
{
  cpg.loop();
}

#endif // SUMITOMO_CPGS_MAIN_H