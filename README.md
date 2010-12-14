Tiny C++ Callback Library
=========================

This was written for mineserver (http://mineserver.be/) but may be useful for
other people or projects. It's light on features and footprint, consisting of
less than 100 lines of static (non-generated) code.

Usage
-----

The `Hook` class is used to store callbacks (or really anything else I guess),
generally of the `functorN` type. The `functorN` typedefs are what make this
whole thing tick right now. The `functorN` typedefs are used to store pointers
to functions in a consistent way.

There's an example in `app.cpp` that shows how it all comes together. The
`gen.pl` script can be used to generate more functorN definitions, should they
be required. The default `hook_typedefs.h` distributed with this contains
definitions for functors with up to 20 arguments.

License
-------

BSD 3 clause license. There's a copy included with the source.

Contact
-------

Probably github is easiest for this. You might find me in #mineserver on
irc.esper.net as well if you want some kind of real-time response. That is if
I'm not sleeping at the time (or pretending to sleep). If you want to send me
email, decode the following text using base64:

  ZGVveHhhQGZrbnNycy5iaXoK

(Try harvesting that, spam spiders!)
