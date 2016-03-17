/*
 * Copyright 2016 Nils van Mulekom
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "datafilter.h"

int16_t XGforce;
int16_t ZGforce;

uint16_t freq;

int16_t Xacc;
int16_t Zacc;

int16_t distance;
int16_t speed;



int main(void) {
	calcInit(freq);
	setTimeDiff(freq);

	while (1) {
		//get data somehow
		Xacc = XGforce * 9.81;
		Zacc = ZGforce * 9.81;

		speed = calcSpeed(Xacc, Zacc, &distance);

		if (distance < 200) {
			//send data
		}
	}

}