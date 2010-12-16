Tiny C++ Callback Library
=========================

This was written for mineserver (http://mineserver.be/) but may be useful for
other people or projects. It's light on features and footprint, consisting of
a single header file of less than 100 lines per HookN definition.

Usage
-----

The `Hook[N]` classes are used to store function pointers primarily and contain
a couple of convenience functions to call said functions a) sequentially from
first to last, b) sequentially until one returns true or c) by index.

There's an example in `app.cpp` that shows how it all comes together. The
`gen.pl` script can be used to generate more Hook[N] definitions, should they
be required. The default `hook.h` distributed with this contains definitions for
hooks with up to 20 arguments. If you're using more than 20 arguments... Wow.

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
