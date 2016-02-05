## Lab 2 - Friday February 5, 2016

### Four Criteria for Free Software
1.  The freedom to run the program as you wish, for any purpose.
2.  The freedom to study how the program works, and change it so it does your
computing as you wish.  Access to the source code is a precondition to this.
3.  The freedom to redistribute copies so you can help your neighbor.
4.  The freedom to distribute copies of your modified versions to others.  By
doing this you can give the whole community a chance to benefit from your
changes.  Access to the source code is a precondition for this.

### Why is it important to choose a LICENSE?
A license is necessary to outline how you allow your project to be used.  If
you don't have a license, you haven't legally defined the ways that you want
people to use your project.  It's very important, for you and for others, to
have an explicit definition of what you allow people to do with your code.

### Why SHOULDN'T you use a project that doesn't have an explicit licence?
If a project doesn't have an explicit licence, it is by default protected by
copyright (All Rights Reserved).  Therefore, you are not allowed to use the
project's code unless their license explicitly gives you permission.

### Do you agree with the article, "Why the Web beat Gopher?"
I agree with the fundamental idea that this article follows.  By releasing your
software to the public, you allow a much larger development community to work
on and improve your code.  As the old saying goes, two heads are better than
one, and a huge development community is better than a smaller development
team.  This is one of the greatest strenghts of open source software.

### Why does Linux use the GPL v2 license?
Linux uses the GPL (GNU General Public License) v2, which is a widely used free
software license which guarantees end users the freedom to run, study, share,
copy, and modify the software.  It makes sense for Linux to use this type of
license, because Linux's philosophy is centered around creating free and open
source software.  Linux is meant to be shared and tinkered with, so it has this
license to explicity grant these rights to its users.

### Example Project with License
As an example, say that I have made a piece of software that accepts a document
written in English, and parses each sentence such that it identifies the
subject, verb, clauses, etc.  I want to release this simple piece of software
to the public so that other experienced programmers can improve upon it.  It
would also help to allow some language specialists to weigh in on how to parse
the English language.  I want to allow companies to use this code in their
projects, so I choose the MIT License:

The MIT License (MIT)

Copyright (c) 2016 Jayson Tung

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

### Discussing GPL vs. LGPL vs. Apache/BSD

A developer would likely want to use the GPL or LGPL (if they are developing a
library).  This allows their code to be used freely as long as derivative works
are redistributed under GPL/LGPL (applications that use libraries under LGPL
don't have to be).  For the "greater good," the GPL is probably best, as it
ensures that the project and all derivative works will remain open source.
This ensures that the community can continue to work and improve on the
project.  A company that wants to make a commercial profit would want to use
Apache, because while it is still open source, it allows the  company to keep
their poject a version or two ahead of the public source code, which gives
people an incentive to buy their product.

### Example RCOS Licenses

Website | License Present | License
---------|:----------|:-------
https://github.com/rcos/Observatory | Yes | Two Clause BSD License https://en.wikipedia.org/wiki/ISC_license
https://github.com/AutoRoute/node | Yes | MIT License https://en.wikipedia.org/wiki/MIT_License
https://github.com/Robmaister/SharpNav | Yes | MIT License https://en.wikipedia.org/wiki/MIT_License
https://github.com/astonshane/davisputnamGo | Yes | MIT License https://en.wikipedia.org/wiki/MIT_License 
https://github.com/CloudBench-IDE/cloudbench | Yes | Apache 2.0 https://en.wikipedia.org/wiki/Apache_License
https://github.com/hosier/free-of-charge | Yes | MIT License https://en.wikipedia.org/wiki/MIT_License 

### Project and License for this Course
I would actually be interested in creating some kind of English parser.  I
don't know how difficult this would be, but I would like to see if I could make
some type of program that takes in an English sentence/paragraph/etc. and
identifies the important grammatical constructs (e.g. subject, main verb,
subordinate clauses, etc.).  This kind of software could be used in many
different projects, such as article summarizers, text-based adventure games,
command lines, etc.  Users could be indiviudals or companies who want to use
this parser to develop their own software.  I would want them to be able to use
this software in their own projects, so I would choose the MIT License.  This
keeps my project open source, but allows companies to use it as they wish.

![Creative Commons License](images/lab2/creatComm.png)
This work is licensed under a http://creativecommons.org/licenses/by/4.0/
Creative Commons Attribution 4.0 International License.
