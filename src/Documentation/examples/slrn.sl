% $Id: slrn.sl,v 1.1 2000/11/12 01:32:09 michael Exp $
%
% This is an example function, you can add to your slrn-configuration.
% It creates a function mmimport, which pipes a usenet-article to
% mmimport. The function is bound to the key "I".
% So pressing "I" will import any recipes within the current article.

define mmimport ()
{
    pipe_article ("mmimport");
}
definekey ("mmimport", "I", "article");  

