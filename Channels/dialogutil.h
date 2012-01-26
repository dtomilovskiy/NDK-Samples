/*
 * Copyright (c) 2011 Research In Motion Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef DIALOGUTIL_H_
#define DIALOGUTIL_H_

/**
 * Set up a basic screen, so that the navigator will send window state events
 * when the window state changes.
 *
 * @return @c EXIT_SUCCESS or @c EXIT_FAILURE
 */
int setup_screen();

/**
 * Clean up all the resources that were allocated by setup_screen().
 */
void cleanup_screen();

/**
 * Show two alert dialogs that will output general data.
 */
void create_dialogs();

/**
 * Destroy dialogs that were created by create_dialogs.
 */
void destroy_dialogs();

/**
 * Displays a message to the top dialog created by create_dialogs() and
 * outputs that message to stderr.  This means it will get added
 * to the log file in the sandbox and output to the console.
 *
 * @param msg the message to be displayed.
 */
void show_top_dialog_message(const char *msg);

/**
 * Displays a message to the bottom dialog created by create_dialogs() and
 * outputs that message to stderr.  This means it will get added
 * to the log file in the sandbox and output to the console.
 *
 * @param msg the message to be displayed.
 */
void show_bottom_dialog_message(const char *msg);

#endif /* DIALOGUTIL_H_ */
