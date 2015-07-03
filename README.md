# software-tools
Examples from Kernighan &amp; Plauger Software Tools Book

><pre>software-tools/
>  WORKSPACE
>  1/       <= Chapter 1
>    BUILD
>    ...
>  2/       <= Chapter 2
>    BUILD
>    ...</pre>

Always work from the software-tools directory (e.g. pwd => ~/software-tools)

% bazel build //1:hello_world
% blaze-bin/1/hellow_world
hello_world
%
