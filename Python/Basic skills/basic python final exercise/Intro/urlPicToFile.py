"""
1) Taking a URL of a png image, and an empty file ending with .png,
and populating that file with the image from the URL
"""
import urllib.request
URL = 'https://www.google.co.il/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png'
FILENAME = r'C:\\Networks\work\basic python final exercise\\output_file.png'

# Creating an HTTPResponse object: "response"
with urllib.request.urlopen(URL) as response:
    image = response.read() 
    with open(FILENAME, 'wb') as output_file:
        output_file.write(image)
