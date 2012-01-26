Channels - Display current location data

========================================================================
Sample Description:

 The Channels application demonstrates how to two different threads can
 communicate by sending events through channels.

 We retrieve and display geolocation specific information, such as the latitude,
 longitude, altitude, and bearing of the tablet from the default channel of the
 main thread.  This thread also listens for the navigator's event telling it to
 exit.  Before joining on the child thread, it sends a custom event to the child
 thread's channel letting it know that it should exit.

 We retrieve and display the x, y and z values of the accelerometer device of
 the tablet from the default channel of the child thread.

 When the application is executed, geolocation data is displayed in a dialog and
 accelerometer data is displayed in another.

 Feature summary
 - Requesting events from different channels
 - Multiple dialogs

========================================================================
Requirements:

 - BlackBerry Native SDK for Tablet OS 2.0 or later
 - One of the following:
   - BlackBerry PlayBook tablet running BlackBerry Tablet OS 2.0 or later
   - BlackBerry Tablet Simulator 2.0 or later

========================================================================
Importing a project into the Native SDK:

 1. From the the Sample apps page, download and extract the sample application.
 2. Launch the Native SDK.
 3. On the File menu, click Import.
 4. Expand General, and select Existing Projects into Workspace. Click Next.
 5. Browse to the location where you extracted the sample app, and click OK.
    The sample project should display in the the Projects section.
 6. Click Finish to import the project into your workspace.

