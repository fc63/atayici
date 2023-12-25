//atayıcı
//programın yazdığım iç içe döngülere girmesi için her bir vektörün atanmış olması lazım bunun için yazdım.
//vektör atayıcının doğru çalışması için hospital oluşturulduktan hemen sonraki alanda çalışması ve ilgili değerlerin public olması lazım
    int size =10;
    for(int i=0; i<size;i++){
        string asciiString0,asciiString1,asciiString2,asciiString3,asciiString4;
        int Sayi0=i+1;
        while (Sayi0 > 0) {
            int sonBasamak = Sayi0%10;
            char asciiKarakter = 'A' + sonBasamak;
            asciiString0 = asciiKarakter + asciiString0;
            Sayi0 /= 10;
        }
        Department DepartmentDebugger(asciiString0,0);
        hospital.departments.push_back(DepartmentDebugger);
        int Sayi4=i+1;
        while (Sayi4 > 0) {
            int sonBasamak = Sayi4%10;
            char asciiKarakter = 'A' + sonBasamak;
            asciiString4 = asciiKarakter + asciiString4;
            Sayi4 /= 10;
        }
        hospital.departments[i].name=asciiString4;
        for (int j = 0; j < size; j++) {
            int Sayi1=i+j+1;
            while (Sayi1 > 0) {
                int sonBasamak = Sayi1 % 10;
                char asciiKarakter = 'A' + sonBasamak;
                asciiString1 = asciiKarakter + asciiString1;
                Sayi1 /= 10;
            }
            int Sayi2=i+j+1;
            while (Sayi2 > 0) {
                int sonBasamak = Sayi2 % 10;
                char asciiKarakter = 'A' + sonBasamak;
                asciiString2 = asciiKarakter + asciiString2;
                Sayi2 /= 10;
            }
            asciiString1+=asciiString0;
            asciiString2+=asciiString1;
            Doctor DoctorDebugger(asciiString2,i*j,i*i*j*j,asciiString1);
            hospital.departments[i].doctors.push_back(DoctorDebugger);
            string asciiString3;
            int Sayi3=i+j+1;
            while (Sayi3 > 0) {
                int sonBasamak = Sayi3%10;
                char asciiKarakter = 'A' + sonBasamak;
                asciiString3 = asciiKarakter + asciiString3;
                Sayi3 /= 10;
            }
            asciiString3+=asciiString2;
            hospital.departments[i].doctors[j].name=asciiString3;
            for (int k = 0; k < size; k++) {
                Appointment adebugger(i+j+k,i+j+k,i+j+k,"asda","asfa","asfas");
                hospital.departments[i].doctors[j].appointments.push_back(adebugger);
            }
        }
    }