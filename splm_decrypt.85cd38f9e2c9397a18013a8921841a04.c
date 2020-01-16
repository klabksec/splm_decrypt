#include <stdio.h>

main() {
  char filename[] = "data";
  FILE *fp;
  unsigned int blob_base;
  unsigned int blob_size;
  unsigned int blob_offset;
  unsigned int offset_count;
  int i;
  char blob_byte;
  char blob_prevbyte;
  char byte_decrypted;
  char val, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16, val17, val18, val19, val20, val21, val22, val23, val24, val25, val26, val27, val28, val29, val30, val31, val32;
  char *c_array;

  printf("What is the base location of the blob? ");
  scanf(" %d", &blob_base);

  printf("What is the size of the blob? ");
  scanf(" %d", &blob_size);


  if ((fp=fopen(filename, "rb"))==NULL) {
    printf("\n\n*** file does not exist ***\n\n");
    exit();
  }

  blob_offset = blob_base + blob_size;
  offset_count = blob_size;
  c_array = (char *)malloc(sizeof(char)*(blob_size));

  while (offset_count > 0) {

    fseek(fp, blob_offset, SEEK_SET);
    blob_byte = fgetc(fp);
    blob_byte = blob_byte & 0xff;
    //  printf("Got it: %hx\n", blob_byte);

    fseek(fp, blob_offset - 1, SEEK_SET);
    blob_prevbyte = fgetc(fp);
    blob_prevbyte = blob_prevbyte & 0xff;
    //  printf("Got it: %hx\n", blob_prevbyte);


    val = (blob_byte ^ 0x8) & 0x800000ff;
    //  printf("val: %hx\n", val);

    if (val < blob_byte) {
      val = (((val - 1) | 0xffffff00) + 1);
    }

    val = val & 0xff;
    val1 = (val ^ 0x85) & 0x800000ff;

    if (val1 < val) {
      val1 = (((val1 - 1) | 0xffffff00) + 1);
    }

    val1 = val1 & 0xff;
  //  printf("val1: %hx\n",val1);
    val2 = (val1 ^ 0xa8) & 0x800000ff;

    if (val2 < val1) {
      val2 = (((val2 - 1) | 0xffffff00) + 1);
    }

    val2 = val2 & 0xff;
  //  printf("val2: %hx\n", val2);

    val3 = (val2 - 0xe6) & 0x800000ff;

    if (val3 < val2) {
      val3 = (((val3 - 1) | 0xffffff00) + 1);
    }
    val3 = val3 & 0xff;
  //  printf("val3: %hx\n", val3);

    val4 = (val3 - 0x54) & 0x800000ff;

    if (val4 < val3) {
      val4 = (((val4 - 1) | 0xffffff00) + 1);
    }

    val4 = val4 & 0xff;
  //  printf("val4: %hx\n", val4);

    val5 = (val4 ^ 0x6b) & 0x800000ff;


    if (val5 < val4) {
      val5 = (((val5 - 1) | 0xffffff00) + 1);
    }

    val5 = val5 & 0xff;
  //  printf("val5: %hx\n", val5);

    val6 = (val5 ^ 0xd5) & 0x800000ff;

    if (val6 < val5) {
      val6 = (((val6 - 1) | 0xffffff00) + 1);
    }

    val6 = val6 & 0xff;
  //    printf("val6: %hx\n", val6);

    val7 = (val6 ^ 0xf4) & 0x800000ff;

    if (val7 < val6) {
      val7 = (((val7 - 1) | 0xffffff00) + 1);
    }

    val7 = val7 & 0xff;
  //  printf("val7: %hx\n", val7);

    val8 = (val7 ^ 0x6) & 0x800000ff;
    if (val8 < val7) {
      val8 = (((val8 - 1) | 0xffffff00) + 1);
    }

    val8 = val8 & 0xff;
  //  printf("val8: %hx\n", val8);

    val9 = (val8 - 0xf3) & 0x800000ff;

    if (val9 < val8) {
      val9 = (((val9 - 1) | 0xffffff00) + 1);
    }

    val9 = val9 & 0xff;
  //  printf("val9: %hx\n", val9);

    val10 = (val9 - blob_prevbyte) & 0x800000ff;
    if (val10 < val9) {
      val10 = (((val10 - 1) | 0xffffff00) + 1);
    }

    val10 = val10 & 0xff;
  //  printf("val10: %hx\n", val10);

    val11 = (val10 ^ 0x84) & 0x800000ff;
    if (val11 < val10) {
      val11 = (((val11 - 1) | 0xffffff00) + 1);
    }

    val11 = val11 & 0xff;
  //  printf("val11: %hx\n", val11);

    val12 = (val11 ^ 0x2b) & 0x800000ff;
    if (val12 < val11) {
      val12 = (((val12 - 1) | 0xffffff00) + 1);
    }
    val12 = val12 & 0xff;
  //  printf("val12: %hx\n", val12);

    val13 = (val12 - 0x4d) & 0x800000ff;
    if (val13 < val12) {
      val13 = (((val13 - 1) | 0xffffff00) + 1);
    }

    val13 = val13 & 0xff;
    //  printf("val13: %hx\n", val13);
    val14 = (val13 - 0x15) & 0x800000ff;

    if (val14 < val13) {
      val14 = (((val14 - 1) | 0xffffff00) + 1);
    }

    val14 = val14 & 0xff;
    val15 = (val14 ^ 0xa0) & 0x800000ff;

    if (val15 < val14) {
      val15 = (((val15 - 1) | 0xffffff00) + 1);
    }

    val15 = val15 & 0xff;
    val16 = (val15 ^ 0x7b) & 0x800000ff;

    if (val16 < val15) {
      val15 = (((val15 - 1) | 0xffffff00) + 1);
    }

    val16 = val16 & 0xff;
    val17 = (val16 - 0xa8) & 0x800000ff;

    if (val17 < val16) {
      val17 = (((val17 - 1) | 0xffffff00) + 1);
    }

    val17 = val17 & 0xff;
  //  printf("val17: %hx\n", val17);

    val18 = (val17 ^ 0xe5) & 0x800000ff;

    if (val18 < val17) {
      val18 = (((val18 - 1) | 0xffffff00) + 1);
    }

    val18 = val18 & 0xff;
    val19 = (val18 ^ 0x28) & 0x800000ff;

    if (val19 < val18) {
      val19 = (((val19 - 1) | 0xffffff00) + 1);
    }

    val19 = val19 & 0xff;
    val20 = (val19 - 0xe8) & 0x800000ff;

    if (val20 < val19) {
      val20 = (((val20 - 1) | 0xffffff00) + 1);
    }

    val20 = val20 & 0xff;
  //  printf("val20: %hx\n", val20);

    val21 = (val20 ^ blob_prevbyte) & 0x800000ff;

    if (val21 < val20) {
      val21 = (((val21 - 1) | 0xffffff00) + 1);
    }

    val21 = val21 & 0xff;
    val22 = (val21 ^ 0x1d) & 0x800000ff;

    if (val22 < val21) {
      val22 = (((val22 - 1) | 0xffffff00) + 1);
    }

    val22 = val22 & 0xff;
    val23 = (val22 ^ 0x3b) & 0x800000ff;

    if (val23 < val22) {
      val23 = (((val23 - 1) | 0xffffff00) + 1);
    }

    val23 = val23 & 0xff;
    val24 = (val23 ^ 0xae) & 0x800000ff;

    if (val24 < val23) {
      val24 = (((val24 - 1) | 0xffffff00) + 1);
    }

    val24 = val24 & 0xff;
    val25 = (val24 ^ 0xbf) & 0x800000ff;

    if (val25 < val24) {
      val25 = (((val25 - 1) | 0xffffff00) + 1);
    }

    val25 = val25 & 0xff;
    val26 = (val25 - 0x66) & 0x800000ff;

    if (val26 < val25) {
      val26 = (((val26 - 1) | 0xffffff00) + 1);
    }

    val26 = val26 & 0xff;
    val27 = (val26 - 0xa8) & 0x800000ff;

    if (val27 < val26) {
      val27 = (((val27 - 1) | 0xffffff00) + 1);
    }

    val27 = val27 & 0xff;
    val28 = (val27 - 0x89) & 0x800000ff;

    if (val28 < val27) {
      val28 = (((val28 - 1) | 0xffffff00) + 1);
    }

    val28 = val28 & 0xff;
    val29 = (val28 ^ 0x81) & 0x800000ff;

    if (val29 < val28) {
      val29 = (((val29 - 1) | 0xffffff00) + 1);
    }

    val29 = val29 & 0xff;
  //  printf("val29: %hx\n", val29);

    val30 = (val29 ^ 0xc2) & 0x800000ff;

    if (val30 < val29) {
      val30 = (((val30 - 1) | 0xffffff00) + 1);
    }

    val30 = val30 & 0xff;
    val31 = (val30 ^ 0xe4) & 0x800000ff;

    if (val31 < val30) {
      val31 = (((val31 - 1) | 0xffffff00) + 1);
    }

//    printf("%c", val31);

    blob_offset = blob_offset - 1;
    offset_count = offset_count - 1;
    c_array[offset_count] = val31;

  }

  val31 = val31 & 0xff;
  val32 = (val31 - 0xb8) & 0x800000ff;

  if (val32 < val31) {
    val31 = (((val31 - 1) | 0xffffff00) + 1);
  }
  fclose(fp);

  printf("\n");
  for (i = 0; i < (blob_size - 1); i++) {
    printf("%c",c_array[i]);
  }
  printf("\n");

  return 0;
}