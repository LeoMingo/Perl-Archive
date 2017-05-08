
/*
 * 1) Writing journals using notee(maybe)
 *  
 * 2) Writing commands
 *
 *
 *
 * FORMAT:  if content is one line then '[', ']' can both be ommited
 *
 * ID
 * [
 * content (e.g. command)
 * ]
 * [
 * explaination
 * ]
 * both contents and explanations can start with a number
 *
 * 1 nested blocks
 *
 * e.g.
3
Hash Sum mismatch & Bad header line Bad header data 
[
sol:[ 
    1
    #Create file /etc/apt/apt.conf.d/99fixbadproxy  with this content
    [
    Acquire::http::Pipeline-Depth 0;
    Acquire::http::No-Cache true;
    Acquire::BrokenProxy    true;
    ]
    2
    #Then 
    [
    sudo rm  /var/lib/apt/lists/*
    sudo rm  /var/lib/apt/lists/partial/*
    sudo apt-get update
    ]
    3
    [#See http://stackoverflow.com/questions/   \
        15505775/debian-apt-packages-hash-sum-mismatch
    ]
]
]
 *Note: In the same block have the same line breaks
 *4
 *access wnote's indices array-like
 *maybe directly output on terminal can just be clear formatted
 * 
 *5 c++ comment blocks
 *
 *
 * 6 file type .wn or .wnote
 *
 * 7 convert files to standard wnote files, with line's number to log converting err
 * 
 * 8 merge one note to another 
 *
 *
 * 9 link wnote 
 * [
 *      1
 *      [
 *
 *      ]
 *      2
 *      [
 *
 *      ]
 * 
 *      3 @link_addr
 *	[
 *        e.g. 3 @"path/user-control.wn"
 *	  
 *		 @"path2/index.html" open index.html with default browser
 *	         --> --open-html <number_at_a_time>    default value is 1
 *		 --> --open-html-all	
 * 	]
 *
 *]
 *
 * 10 find return note path/name or html index
 *
 *  
 *
 * 11 when displaying wn files use syntax highlight if possible(colorer lib c++), after that trim comments off
 *  or use other cuter macros instead 
 *
 * 12 import notes from text files -wn[note contents]wn-
 *      notice -w[]w- extracts contents despite it's commments or code secs
 *
 * 13 resort note indices
 *
 *
 *
 *
 *
 *
 *
 */












