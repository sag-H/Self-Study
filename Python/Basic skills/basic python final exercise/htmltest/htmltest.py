""" 
htmlcode = "<html>\n<body>\n<img src=""\"http://data.cyber.org.il/python/logpuzzle/p-bccc-bbdc.jpg\""">\n</body>\n</html>"
first_half = htmlcode[:14]
#the middle is 69 chars for message_data URL:<img src=""\"http://data.cyber.org.il/python/logpuzzle/p-bccc-bbdc.jpg\""">
second_half = htmlcode[-16:]
with open("test.html",'w') as f:
    f.write(htmlcode)
 """
 
def generate_middle_section(lst):
    """
    Returns the concatenation of all strings in the list, after they
    have been proccessed for the HTML page with the <img src=""> tag.

    Args:
        lst = a list of URLs in string form.

    Eg:
        A string (URl) from the list looks like this:
        http://data.cyber.org.il/python/logpuzzle/p-bccc-bbdc.jpg

        The the function will transform every element in the list in this way:
        <img src="http://data.cyber.org.il/python/logpuzzle/p-bccc-bbdc.jpg">

    """
