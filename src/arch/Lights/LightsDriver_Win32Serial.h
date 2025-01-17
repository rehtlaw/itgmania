#ifndef LightsDriver_SextetStream_H
#define LightsDriver_SextetStream_H

/*
 * `LightsDriver_Win32Serial` (abstract): Streams the light data (in
 * ASCII-safe sextets) to a pre-configure serial port. The protocol
 * of the messages sent follows the same protocol as the SextetStream
 * lights driver, but it sent to serial instead of a FIFO or pipe.
 */

#include "LightsDriver.h"
#include "SextetUtils.h"

#include <cstdint>

class LightsDriver_Win32Serial : public LightsDriver
{
protected:
	uint8_t lastOutput[FULL_SEXTET_COUNT];
public:
	LightsDriver_Win32Serial();
	virtual ~LightsDriver_Win32Serial();

	virtual void Set(const LightsState* ls);
};

#endif

/*
 * Copyright © 2020 Skogaby <skogabyskogaby@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to permit
 * persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN
 * NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
