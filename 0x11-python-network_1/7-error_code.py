#!/usr/bin/python3
"""
A script that will
- take in a URL
- send a request to the URL
- display the body of the response.
"""
import sys
import requests


if __name__ == "__main__":
    url = sys.argv[1]

    r = requests.get(url)
    if r.status_code >= 400:
        print("Error code: {}".format(r.status_code))
    else:
        print(r.text)
