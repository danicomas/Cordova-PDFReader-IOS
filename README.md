Cordova-PDFReader-IOS
==================

PDF Reader cordova plugin for IOS 7+ (https://github.com/etabard/Cordova-PDFReader-IOS fork adding buttons over the reader)

Installation
------------

cordova plugin add https://github.com/danicomas/Cordova-PDFReader-IOS.git

Documentation
-------------

```js
var options = {                  
	bookmarks: false,
	enableShare: true,
	showButtons: 0, //0: no buttons; 1: ok button, 2: ok and cancel button
	cancel: "Cancel", //text for cancel button
	ok: "OK" //text for ok button
};                

PDFReader.open(fileURL, options, function() {}, function() {});

var PDFReaderClosed = function() { //fired after click on done or cancel button
  PDFReader.clearCache(fileURL);
  document.removeEventListener('PDFReaderClosed', PDFReaderClosed);
  document.removeEventListener('PDFReaderButtonOK', PDFReaderButtonOK);
};
document.addEventListener('PDFReaderClosed', PDFReaderClosed);

var PDFReaderButtonOK = function() { //fired after click on OK Button
	document.removeEventListener('PDFReaderClosed', PDFReaderClosed);
	document.removeEventListener('PDFReaderButtonOK', PDFReaderButtonOK);
};
document.addEventListener('PDFReaderButtonOK', PDFReaderButtonOK);
```

    
	