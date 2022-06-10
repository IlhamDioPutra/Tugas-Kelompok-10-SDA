//Algoritma Djikstra bekerja dengan cara:

//1.mengunjungi simpul-simpul pada graf dimulai dengan simpul sumber. Kemudian secara
//berulang memilih simpul-simpul terdekat dan menghitung total bobot semua sisi yang
//dilewati untuk mencapai simpul tersebut.
//2. Menandai simpul awal dengan [0,-] dan statusnya permanen. 
//3. Beri label untuk node yang dapat berhubungan dengan node permanen dengan [a,b] dan
//status temporary dimana: a = jarak terpendek ke node awal b = node sebelumnya/yang
//mendahului. 
//4. Mencari a terkecil dan status temporary berubah menjadi permanen. 
//5. Apabila status sudah permanen semua maka proses berhenti, tetapi apabila belum akan
//kembali ke langkah 2.