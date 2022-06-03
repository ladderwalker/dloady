#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	CURL *curl = curl_easy_init();
	
	if (!curl) {
		fprintf(stderr, "init fialed\n");
		return EXIT_FAILURE;
	}

	//set options
	curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com");

	//perform out action
	curl_easy_perform(curl);

	curl_easy_cleanup(curl);
	return EXIT_SUCCESS;
}
