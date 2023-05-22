# LeetCode 25. Problem

# Kod Hakkında

1- Tek yönlü bağlı liste oluşturulur.

Ör: Bu kodda 1->2->3->4->5->6->7

2- Fonksiyona parametre olarak ilk elemanı ve grupdaki düğüm sayısı ( k ) parametresi verilerek fonksiyon çalıştırılır.

Ör: Bu koddaki parametreler ( head, 2 ) ve ( head, 3 )

3- Fonksyon da gönderilen k parametresine göre bağlı listeyi gruplandırıp ters çevirme ( reverse ) fonksiyonuna gönderir.

4- Bu foksiyon da başlangıç düğümünden itibaren ( head ) bir gruptaki düğüm sayısı kadarki düğümlere kadar olan düğümleri ters çevirir.

Ör-1: Bu kodda ( head, 2 ) için: 2->1->4->3->6->5->7 

Parametre 2 olduğu için gruplar 2'li oluyor: ( 1->2 ) -> ( 2->1 ), ( 3->4 ) -> ( 4->3 ), ( 5->6 ) -> ( 6-5 ), ( 7 ) (2 eleman kalmadığı için 7'ye dokunulmuyor.)

Ör-2: Bu kodda ( head, 3 ) için: 3->2->1->6->5->4->7

Parametre 3 olduğu için gruplar 3'lü oluyor: ( 1->2->3 ) -> ( 3->2->1 ), ( 4->5->6 ) -> ( 6->5->4 ) , ( 7 ) (3 eleman kalmadığı için 7'ye dokunulmuyor.)

# Kodu Ubuntu'da Derleme ve Calıştırma

1- `g++ kGrupTersCevirme.cpp -o kGrupTersCevirme`

2- `./kGrupTersCevirme`
