#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int tanlov,  togri, javob, notogri_javob = 0, q;
    float togri_javob = 0;
    int matematika = 0, dasturlash = 0, tarix = 0;
    printf("\t\tAssalomu Alekum Test markaziga Xush Kelibsiz\n ");
    printf("\t\tTestlardan 1 donasini tanlang: \n");
menu:

/////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Matematika 1 bosing\n");
    printf("Dasturlash 2 bosing\n");
    printf("Tarix 3 bosing\n");
    printf("umumiy ballni kirish uchun 4 bosing\n");
    printf("Testni tugatish  0 bosing\n");
    scanf("%d", &tanlov);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (tanlov == 1)
    {
        if (matematika){
            system("cls");
            printf("\n\nsiz bu testni allaqachon ishlagasiz \n menu ga qaytish uchun ENTER bosing\n");
            q = fgetc(stdin);
            q = fgetc(stdin);           
            system("cls");
        }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

        else
        {          
            system("cls");
            matematika = 1;
            system("cls");
            printf("\t1 savol\n");
            printf("982 soni necha xonali son bor ?\n");
            printf("\t( 2 ) 1 bosing \n");
            printf("\t( 3 ) 2 bosing \n");
            printf("\t( 5 ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t2 savol\n");
            printf("100 * 2 == ?\n");
            printf("\t( 200 ) 1 bosing \n");
            printf("\t( 150 ) 2 bosing \n");
            printf("\t( 300 ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////


            if (javob == 1)
            {
                togri_javob++;
            }
            else if (javob == 2 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t3 savol\n");
            printf("12 * 10 == ?\n");
            printf("\t( 120 ) 1 bosing \n");
            printf("\t( 100 ) 2 bosing \n");
            printf("\t( 130 ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 1)
            {
                togri_javob++;
            }
            else if (javob == 2 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t4 savol\n");
            printf(" 5 * 2 == ?\n");
            printf("\t( 15 ) 1 bosing \n");
            printf("\t( 9 ) 2 bosing \n");
            printf("\t( 10 ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 3)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 2)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t5 savol\n");
            printf("4 * 2 == ?\n");
            printf("\t( 6 ) 1 bosing \n");
            printf("\t( 8 ) 2 bosing \n");
            printf("\t( 10 ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            char q;
            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            printf("menu ga qaytish uchun ENTER bosing:\n");
            q = fgetc(stdin);
            q = fgetc(stdin);
            system("cls");
        }
        goto menu;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (tanlov == 2)
    {
        if (dasturlash)
        {
            system("cls");
            printf("\n\nsiz bu testni allaqachon ishlagasiz \n menu ga qaytish uchun ENTER bosing\n");
            q = fgetc(stdin);
            q = fgetc(stdin);           
            system("cls");
        }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

        else
        {
            system("cls");
            dasturlash = 1;
            system("cls");
            printf("\t1 savol\n");
            printf("c dasturlash tilida dasturni ishlatib beradigan asosiy funksiya nima ?\n");
            printf("\t int main()  1 bosing \n");
            printf("\t WinMain ()  2 bosing \n");
            printf("\t Main ()   3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 1)
            {
                togri_javob++;
            }
            else if (javob == 2 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t2 savol\n");
            printf("kilobayt necha baytdan iborat ?\n");
            printf("\t( 10240 bayt ) 1 bosing \n");
            printf("\t( 1024 bayt ) 2 bosing \n");
            printf("\t( 256 bayt ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t3 savol\n");
            printf("bayt necha bitdan iborat ?\n");
            printf("\t( 32 bit ) 1 bosing \n");
            printf("\t( 2 bit ) 2 bosing \n");
            printf("\t( 8 bit ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 3)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 2)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t4 savol\n");
            printf("HTMLda matn va paragraflar qaysi teg bilan beriladi?\n");
            printf("\t( h1h6 ) 1 bosing \n");
            printf("\t( p ) 2 bosing \n");
            printf("\t( span ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 1)
            {
                togri_javob++;
            }
            else if (javob == 2 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t5 savol\n");
            printf("Foydalanuvchiga ma'lumotni yuklab olish imkoniyatini qaysi teg yaratib beradi?\n");
            printf("\t( a ) 1 bosing \n");
            printf("\t( button ) 2 bosing \n");
            printf("\t( data ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            char q;
            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            printf("menu ga qaytish uchun ENTER bosing:\n");
            q = fgetc(stdin);
            q = fgetc(stdin);
            system("cls");
        }

        goto menu;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (tanlov == 3)
    {
        if (tarix)
        {
            system("cls");
            printf("\n\nsiz bu testni allaqachon ishlagasiz \n menu ga qaytish uchun ENTER bosing\n");
            q = fgetc(stdin);
            q = fgetc(stdin);           
            system("cls");
        }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

        else
        {
            system("cls");
            tarix = 1;
            system("cls");
            printf("\t1 savol\n");
            printf("1968 yil tashkil etilgan Turkiston viloyati qaysi hudud tarkibiga kiritilgan ?\n");
            printf("\t( Turkiston general gubernatorligi ) 1 bosing \n");
            printf("\t( sirdaryo viloyati ) 2 bosing \n");
            printf("\t( orenburg genral gubernatorligi ) 3 bosing \n");
            scanf("%d", &javob);
//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 3)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 2)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t2 savol\n");
            printf("Turkistonning qaysi olkasi istiqLOLCHILAR harakati avj olgan ?\n");
            printf("\t( xorazm viloyati ) 1 bosing \n");
            printf("\t( fargona viloyati ) 2 bosing \n");
            printf("\t( jizzax viloyati ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t3 savol\n");
            printf("XIX asr ortalarida Xiva xonligi alohida sonini aniqlang ?\n");
            printf("\t( 1mln ) 1 bosing \n");
            printf("\t( 2mln ) 2 bosing \n");
            printf("\t( 800ming ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 1)
            {
                togri_javob++;
            }
            else if (javob == 2 || javob == 3)
            {
                notogri_javob++;
            }
        
//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t4 savol\n");
            printf("Shengen shahri qaysi mamlakatda joylashgan ?\n");
            printf("\t( fransiya ) 1 bosing \n");
            printf("\t( shvetsariya ) 2 bosing \n");
            printf("\t( Lyuksemburg ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            if (javob == 3)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 2)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            system("cls");
            printf("\t5 savol\n");
            printf("1990 yilda suriya iqtisodiy inqirozning sababi nima ?\n");
            printf("\t( harbiy muommolar ) 1 bosing \n");
            printf("\t( qurgoqchilik ) 2 bosing \n");
            printf("\t( qoshni iroqdagi  urush ) 3 bosing \n");
            scanf("%d", &javob);

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            char q;
            if (javob == 2)
            {
                togri_javob++;
            }
            else if (javob == 1 || javob == 3)
            {
                notogri_javob++;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

            printf("menu ga qaytish uchun ENTER bosing:\n");
            q = fgetc(stdin);
            q = fgetc(stdin);
            system("cls");
        }
        goto menu;
    }
   
//////////////////////////////////////////////////////////////////////////////////////////////////////////

    float bolish = 0;
    if (tanlov == 4)

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    {
        printf("\t\tsizning javoblaringiz");
        printf("\nsizning notogri javoblaringiz soni %d ta \n sizning togri javoblaringiz soni %.0f ta", notogri_javob, togri_javob);
        printf("\n15 ta savol mavjud");
        bolish = 100 / 15;
        togri_javob = togri_javob * bolish;
        printf("\n\tbalingiz: %.2f", togri_javob);
        q = fgetc(stdin);
        q = fgetc(stdin);
        system("cls");
        goto menu;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (tanlov == 0)
    {
        printf("test tugadi Salomat boling.");
        return 0;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////


    return 0;
}