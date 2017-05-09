/*
 *Copyright 2016 yubo. All rights reserved.
 * Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file.
 */
package rrdlite

import (
	"strconv"
	"time"
)

func i64toa(i int64) string {
	return strconv.FormatInt(i, 10)
}

func (c *Creator) create() error {
	return nil
}

func (u *Updater) update(_args []string) error {

	return nil
}

// Info returns information about RRD file.
func Info(filename string) (map[string]interface{}, error) {
	return nil, nil
}

// Fetch retrieves data from RRD file.
func Fetch(filename, cf string, start, end time.Time, step time.Duration) (FetchResult, error) {
	return FetchResult{}, nil
}
