#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int main()
{
	int opsi; //veriabel ini berfungsi sebagai opsi di menu utama
	char buff; //variabel ini berfungsi sebagai penghenti program jika input untuk opsi bukan berupa intiger

	printf("                  ********************************************\n");
	printf("                  *                                          *\n");
	printf("                  *                DNA CIPHER                *\n");
	printf("                  *                                          *\n");
	printf("                  ********************************************\n\n");

// Disini memilih opsi untuk ke proses selajutnya//

	printf("[1] Finding codon pair \n");
	printf("[2] Determining protein sequences \n");
	printf("[3] How to use function \n");
	printf("[4] Library of protein");
	printf("\n");
	printf("Pilihan anda : ");
	scanf("%d",&opsi);

// Untuk opsi 4, hanya menampilkan library protein//

	if(opsi==4){

        system("cls"); //fungsi untuk menghapus semua tulisan di program

        printf("                  ********************************************\n");
        printf("                  *                                          *\n");
        printf("                  *                DNA CIPHER                *\n");
        printf("                  *                                          *\n");
        printf("                  ********************************************\n\n");

        printf("[4] Library of protein");
		printf("\n\nUUU = Phenylalanine\n"); Sleep(300);
		printf("UUC = Phenylalanine\n"); Sleep(300);
		printf("UUA = Leucine\n"); Sleep(300);
		printf("UUG = Leucine\n\n"); Sleep(300);

		printf("CUU = Leucine\n"); Sleep(300);
		printf("CUC = Leucine\n"); Sleep(300);
		printf("CUA = Leucine\n"); Sleep(300);
		printf("CUG = Leucine\n\n"); Sleep(300);

		printf("AUU = Isoleucine\n"); Sleep(300);
		printf("AUC = Isoleucine\n"); Sleep(300);
		printf("AUA = Isoleucine\n"); Sleep(300);
		printf("AUG = Methionine (Start Codon)\n\n"); Sleep(300);

		printf("GUU = Valine\n"); Sleep(300);
		printf("GUC = Valine\n"); Sleep(300);
		printf("GUA = Valine\n"); Sleep(300);
		printf("GUG = Valine\n\n"); Sleep(300);

		printf("UCU = Serine\n"); Sleep(300);
		printf("UCC = Serine\n"); Sleep(300);
		printf("UCA = Serine\n"); Sleep(300);
		printf("UCG = Serine\n\n"); Sleep(300);

		printf("CCU = Proline\n"); Sleep(300);
		printf("CCC = Proline\n"); Sleep(300);
		printf("CCA = Proline\n"); Sleep(300);
		printf("CCG = Proline\n\n"); Sleep(300);

		printf("ACU = Threonine\n"); Sleep(300);
		printf("ACC = Threonine\n"); Sleep(300);
		printf("ACA = Threonine\n"); Sleep(300);
		printf("ACG = Threonine\n\n"); Sleep(300);

		printf("GCU = Alanine\n"); Sleep(300);
		printf("GCC = Alanine\n"); Sleep(300);
		printf("GCA = Alanine\n"); Sleep(300);
		printf("GCG = Alanine\n\n"); Sleep(300);

		printf("UAU = Tyrosine\n"); Sleep(300);
		printf("UAC = Tyrosine\n"); Sleep(300);
		printf("UAA = STOP Codon\n"); Sleep(300);
		printf("UAG = STOP Codon\n\n"); Sleep(300);

		printf("CAU = Histidine\n"); Sleep(300);
		printf("CAC = Histidine\n"); Sleep(300);
		printf("CAA = Glutamine\n"); Sleep(300);
		printf("CAG = Glutamine\n\n"); Sleep(300);

		printf("AAU = Asparagine\n"); Sleep(300);
		printf("AAC = Asparagine\n"); Sleep(300);
		printf("AAA = Lysine\n"); Sleep(300);
		printf("AAG = Lysine\n\n"); Sleep(300);

		printf("GAU = Aspartic acid\n"); Sleep(300);
		printf("GAC = Aspartic acid\n"); Sleep(300);
		printf("GAA = Glutamic acid\n"); Sleep(300);
		printf("GAG = Glutamic acid\n\n"); Sleep(300);

		printf("UGU = Cysteine\n"); Sleep(300);
		printf("UGC = Cysteine\n"); Sleep(300);
		printf("UGA = STOP Codon\n"); Sleep(300);
		printf("UGG = Tryptophan\n\n"); Sleep(300);

		printf("CGU = Arginine\n"); Sleep(300);
		printf("CGC = Arginine\n"); Sleep(300);
		printf("CGA = Arginine\n"); Sleep(300);
		printf("CGG = Arginine\n\n"); Sleep(300);

		printf("AGU = Serine\n"); Sleep(300);
		printf("AGC = Serine\n"); Sleep(300);
		printf("AGA = Arginine\n"); Sleep(300);
		printf("AGG = Arginine\n\n"); Sleep(300);

		printf("GGU = Glycine\n"); Sleep(300);
		printf("GGC = Glycine\n"); Sleep(300);
		printf("GGA = Glycine\n"); Sleep(300);
		printf("GGG = Glycine\n\n"); Sleep(300);

		//sleep berfungsi agar program tidak berjalan sementara selama beberapa milidetik

        printf("\nTekan tombol apapun untuk kembali");
	}

//Untuk opsi 3, merupakan cara kerja atau bantuan untuk menggunakan program ini//

	else if(opsi==3)
	{
	    system("cls"); //fungsi untuk menghapus semua tulisan di program

	    printf("                  ********************************************\n");
        printf("                  *                                          *\n");
        printf("                  *                DNA CIPHER                *\n");
        printf("                  *                                          *\n");
        printf("                  ********************************************\n\n");

        printf("[3] How to use function \n");
		printf("\n\n[PANDUAN OPSI 1]\n\n1. Tentukan panjang dna yang ingin diubah\n");
		printf("2. Input dna yang ingin diubah\n");
		printf("3. Dan output akan menampilkan hasil proses\n");
		printf("4. Apabila lebih dari panjang dna yang ditentukan, output hanya menampilkan kode dna sesuai urutan yang pertama\n");
		printf("5. Apabila input yang dimasukkan selain kode dna, output akan ditampilkan dalam bentuk '*'\n\n\n");

		printf("[PANDUAN OPSI 2]\n\n1. Tentukan panjang dna yang ingin dibaca sesuai kelipatan 3\n");
		printf("2. Apabila bukan kelipatan 3, pertanyaan akan diulang\n");
		printf("3. Masukkan input DNA\n");
		printf("4. Input akan diproses lalu output merupakan nama protein yang dibaca\n");
		printf("5. Apabila input tidak tepat, output akan mengidentifikasi sebagai error\n");
		printf("\n\n\n~~~~~Selamat Ujicoba~~~~~\n\n");

		printf("\nTekan tombol apapun untuk kembali");
	}

//Untuk opsi 2, berfungsi membaca deret DNA menjadi nama protein//

	else if(opsi==2)
	{

		char rna1, rna2, rna3; //variabel ini digunakan untuk menyimpan basa dna sebelum diterjemahkan menjadi protein
    	char protein[20]; //array sebagai library protein
    	int length, i; //kedua variabel ini akan digunakan pada loop for dimana n adalah panjang array
    	int kembali; //variabel ini digunakan untuk memberi opsi keluar dari program atau tidak
    	char buff2; //variabel ini sebagai pembantu dalam error handling jika input char dimasukkan pada int

    	do {
            system("cls"); //fungsi untuk menghapus semua tulisan di program

            printf("                  ********************************************\n");
            printf("                  *                                          *\n");
            printf("                  *                DNA CIPHER                *\n");
            printf("                  *                                          *\n");
            printf("                  ********************************************\n\n");

            printf("[2] Determining protein sequences \n");
			printf("\nEnter the length of the sequence (Must be divisible by three):");
            scanf("%d", &length);

            if (length%3 == 0){
                    printf("\n");
            }
            else{
                    //while ini berfungsi sebagai looping kembali ketika input yang dimasukkan bukan merupakan int
                    while ((buff2 = getchar()) != '\n' && buff2 != EOF); //while ini berfungsi sebagai looping kembali ketika input yang dimasukkan bukan merupakan int
                    printf("\nSequence length is not divisible by three\n");
                    Sleep(600);
            }
    	}while (length%3 != 0);

    	char sequence[length]; //panjang array ditentukan oleh user sendiri
    	char ch; //variabel pembantu untuk menyimpan sementara data dari basa dna dan pasangannya

    	printf("\nEnter DNA sequence:");

    	for (i=0; i<=length; i++){ //looping untuk menbaca isi array
            scanf ("%c",&sequence[i]);
		}

    	for (i = 1; i <= length+1; i++){ //looping untuk menentukan pasangan basa dna
            ch = sequence[i];
            if (ch == 'a')
                ch = 'u';

            else if (ch == 't')
                ch = 'a';

            else if (ch == 'g')
                ch = 'c';

            else if (ch == 'c')
                ch = 'g';

            else {
                ch = '*';
            }
            sequence[i] = ch;
    	}

   		printf("\nThe RNA sequence is:");

        for (i = 1; i <= length; i++){ //looping untuk menampilkan isi array
            printf("%c", sequence[i]);
        }

    	printf("\n'*' denotes unidentified codon\n");

    	printf("\n\n");
    	printf("Protein sequence :");

    	for (i = 1; i <= length ; i = i + 3){ //fungsi untuk menerjemahkan basa dna ke protein
            rna1 = sequence[i];
            rna2 = sequence[i+1];
            rna3 = sequence[i+2];

            if ((rna1 == 'u' && rna2 == 'u' && rna3 == 'u') || (rna1 == 'u' || rna2 == 'u' || rna3 == 'c')){
                strcpy(protein, "Phenylalanine");
            }
            else if ((rna1 == 'u' && rna2 == 'u' && rna3 == 'a') || (rna1 == 'u' && rna2 == 'u' && rna3 == 'g') || (rna1 == 'c' && rna2 == 'u' && rna3 == 'u') || (rna1 == 'c' && rna2 == 'u' && rna3 == 'c') || (rna1 == 'c' && rna2 == 'u' && rna3 == 'a') || (rna1 == 'c' && rna2 == 'u' && rna3 == 'g')){
                strcpy(protein, "Leucine") ;
            }
            else if ((rna1 == 'a' && rna2 == 'u' && rna3 == 'u') || (rna1 == 'a' && rna2 == 'u' && rna3 == 'c') || (rna1 == 'a' && rna2 == 'u' && rna3 == 'a')){
                strcpy(protein, "Isoleucine") ;
            }
            else if ((rna1 == 'a' && rna2 == 'u' && rna3 == 'g')){
                strcpy(protein, "Methionine") ;
            }
            else if ((rna1 == 'g' && rna2 == 'u' && rna3 == 'u') || (rna1 == 'g' && rna2 == 'u' && rna3 == 'c') || (rna1 == 'g' && rna2 == 'u' && rna3 == 'a') || (rna1 == 'g' && rna2 == 'u' && rna3 == 'g')){
                strcpy(protein, "Valine");
            }
            else if ((rna1 == 'u' && rna2 == 'c' && rna3 == 'u') || (rna1 == 'u' && rna2 == 'c' && rna3 == 'c') || (rna1 == 'u' && rna2 == 'c' && rna3 == 'a') || (rna1 == 'u' && rna2 == 'c' && rna3 == 'g')){
                strcpy(protein, "Serine");
            }
            else if (rna1 == 'c' && rna2 == 'c' && rna3 != '*'){
                strcpy(protein, "Proline") ;
            }
            else if (rna1 == 'a' && rna2 == 'c' && rna3 != '*'){
                strcpy(protein, "Threonine") ;
            }
            else if (rna1 == 'g' && rna2 == 'c' && rna3 != '*'){
                strcpy(protein, "Alanine");
            }
            else if ((rna1 == 'u' && rna2 == 'a' && rna3 == 'u') || (rna1 == 'u' && rna2 == 'a' && rna3 == 'c')){
                strcpy(protein, "Tyrosine") ;
            }
            else if ((rna1 == 'u' && rna2 == 'a' && rna3 == 'a') || (rna1 == 'u' && rna2 == 'a' && rna3 == 'g') || (rna1 == 'u' && rna2 == 'g' && rna3 == 'a')){
                strcpy(protein, "Stop") ;
            }
            else if ((rna1 == 'c' && rna2 == 'a' && rna3 == 'u') || (rna1 == 'c' && rna2 == 'a' && rna3 == 'c')){
                strcpy(protein, "Histidine") ;
            }
            else if ((rna1 == 'c' && rna2 == 'a' && rna3 == 'a') || (rna1 == 'c' && rna2 == 'a' && rna3 == 'g')){
                strcpy(protein, "Glutamine") ;
            }
            else if ((rna1 == 'a' && rna2 == 'a' && rna3 == 'u') || (rna1 == 'a' && rna2 == 'a' && rna3 == 'c')){
                strcpy(protein, "Asparigine") ;
            }
            else if ((rna1 == 'a' && rna2 == 'a' && rna3 == 'a') || (rna1 == 'a' && rna2 == 'a' && rna3 == 'g')){
                strcpy(protein, "Lysine");
            }
            else if ((rna1 == 'g' && rna2 == 'a' && rna3 == 'c') || (rna1 == 'g' && rna2 == 'a' && rna3 == 'u')){
                strcpy(protein, "Aspartic Acid") ;
            }
            else if ((rna1 == 'g' && rna2 == 'a' && rna3 == 'a') || (rna1 == 'g' && rna2 == 'a' && rna3 == 'g')){
                strcpy(protein, "Glutamic Acid") ;
            }
            else if ((rna1 == 'u' && rna2 == 'g' && rna3 == 'c') || (rna1 == 'u' && rna2 == 'g' && rna3 == 'u')){
                strcpy(protein, "Cysteine") ;
            }
            else if (rna1 == 'u' && rna2 == 'g' && rna3 == 'g'){
                strcpy(protein, "Tryptophan") ;
            }
            else if ((rna1 == 'c' && rna2 == 'g' && rna3 != '*') || (rna1 == 'a' && rna2 == 'g' && rna3 == 'g') || (rna1 == 'a' && rna2 == 'g' && rna3 == 'a')){
                strcpy(protein, "Arginine") ;
            }
            else if ((rna1 == 'a' && rna2 == 'g' && rna3 == 'c') || (rna1 == 'a' && rna2 == 'g' && rna3 == 'u')){
                strcpy(protein, "Serine");
            }
            else if (rna1 == 'g' && rna2 == 'g' && rna3 != '*'){
                strcpy(protein, "Glycine") ;
            }
            else strcpy(protein, "Error");

            printf("%s | ", protein);
            Sleep(600);
    	}

    	//Opsi keluar atau tidak?//

    	printf("\n\n\n\n\nMasih mau melanjutkan?\n\n");
    	printf("[A] Ketik 1 untuk melanjutkan\n");
    	printf("[B] Ketik apapun untuk keluar\n\n");
    	printf("Silahkan pilih :");
    	scanf("%d", &kembali);

    	if (kembali==1){
    		printf("\n\nBaiklah (~*_*)~");
		}

    	else {
    		printf("\n\nOkay sayonara");
    		return 0;
		}

	}


//Untuk opsi 1, fungsi lebih sederhana dengan mengubah urutan DNA sesuai ketentuan yang ada//

	else if(opsi==1)
	{

		int length, i; //Untuk n merupakan  variabel panjang dna yang akan dibaca
		int kembali; //variabel ini digunakan untuk memberi opsi keluar dari program atau tidak
		char buff1; //variabel ini sebagai pembantu dalam error handling jika input char dimasukkan pada int

		do {
            system("cls"); //fungsi untuk menghapus semua tulisan di program

            printf("                  ********************************************\n");
            printf("                  *                                          *\n");
            printf("                  *                DNA CIPHER                *\n");
            printf("                  *                                          *\n");
            printf("                  ********************************************\n\n");

            printf("[1] Finding codon pair \n");
			printf("\nEnter the length of the sequence (Must be divisible by three):");
            scanf("%d", &length);

            if (length%3 == 0){
                    printf("\n");
            }
            else{
                //while ini berfungsi sebagai looping kembali ketika input yang dimasukkan bukan merupakan int
                while ((buff1 = getchar()) != '\n' && buff1 != EOF); //while ini berfungsi sebagai looping kembali ketika input yang dimasukkan bukan merupakan int
                printf("\nSequence length is not divisible by three\n");
                Sleep(600);
            }
    	}while (length%3 != 0);

	    char sequence[length]; //array untuk menyimpan basa dna
    	char ch; //variabel pembantu untuk menyimpan sementara data dari basa dna dan pasangannya

	    printf("\nEnter DNA sequence:");

    	for (i=0; i<=length; i++){ //looping untuk membaca isi array
        	scanf ("%c",&sequence[i]);
    	}

    	for (i = 1; i <= length+1; i++){ //looping untuk mengubah pasangan dna
        	ch = sequence[i];
        	if (ch == 'a')
            	ch = 't';

        	else if (ch == 't')
            	ch = 'a';

	        else if (ch == 'g')
    	        ch = 'c';

        	else if (ch == 'c')
            	ch = 'g';

        	else {
            	ch = '*';
        	}
        	sequence[i] = ch;
    	}

    	printf("\nThe pair of the DNA sequence is:");

    	for (i = 1; i <= length; i++){ //looping untuk menampilkan isi array
        	printf("%c", sequence[i]);
    	}

    	printf("\n'*' denotes unidentified codon\n");

		//Opsi keluar atau tidak?//

    	printf("\n\n\n\n\nMasih mau melanjutkan?\n\n");
    	printf("[A] Ketik 1 untuk melanjutkan\n");
    	printf("[B] Ketik apapun untuk keluar\n\n");
    	printf("Silahkan pilih :");
    	scanf("%d", &kembali);

    	if (kembali==1){
    		printf("\n\nBaiklah (~*_*)~");
		}

    	else {
    		printf("\n\nOkay sayonara");
    		return 0;
		}


	}

//Selain dari opsi yang ada hanya akan menampilkan tulisan Error//

	else {
            printf("Error!! Baca baik-baik uy\n");
	}

    while ((buff = getchar()) != '\n' && buff != EOF); //while ini berfungsi sebagai looping kembali ketika input yang dimasukkan bukan merupakan int

    getch(); //command untuk menahan program hingga suatu input dimasukkan

    system("cls"); //command untuk menghapus seluruh tampilan program

    return main();
}
