#include <stdio.h>

int main(){
    char stringa[100];
    char stringadue[2];
    char stringatre[100];
    char accompagnatore;

    printf("Benvenuto nella nostra app Wido! \n");
    printf("Per effettuare una ricerca più precisa, vorremmo sapere in che città ti trovi:");
    printf("%s \n", stringa);
    scanf(" %[^\t\n]s", stringa);

    printf("Vorremmo sapere con chi andrai a vedere l'evento! \n");
    printf("a. esco con il mio fidanzato/la mia fidanzata\nb. esco con amici\nc. esco con la mia famiglia\nd. esco con il mio cagnolino\n");
    ret:
        printf("Scegli l'opzione che rappresenta la tua situazione: %c", accompagnatore);
        scanf(" %c", &accompagnatore);

        if (accompagnatore == 97 || accompagnatore == 98 || accompagnatore == 99 || accompagnatore == 100){
            if (accompagnatore == 97){
                printf("Stai uscendo con il tuo fidanzato/la tua fidanzata? Ecco cosa abbiamo trovato per te: \n");
                printf("1. Mostra di Claude Monet al giardino di Villa Reale: lo splendido giardino di Villa Reale, che circonda l'imponente villa neoclassica ex residenza del conte Belgiojoso, è un elegante e curato parco all'inglese con sentieri alberati intervallati da ponticelli di legno, un laghetto popolato di anatre e un piccolo tempio che oggi ospiterà l'esclusiva mostra di Monet. \n");
                printf("Posizione: Via Palestro 16, 20121 Milano \nOrario di apertura: Tutti i giorni dalle 09:00 alle 16:00 \nTelefono: +39 02 8844 5943 \n\n");
                printf("2. Aperitivo al tramonto in un battello sui navigli: oggi verrà inaugurato il nuovo battello con sala per aperitivi sul ponte! Solo per oggi l'ingresso e la consumazione sono gratuiti. Goditi questa esclusiva esperienza al tramonto con la tua dolce metà, sui navigli di Milano. Non è necessaria una prenotazione. \n");
                printf("Posizione: Alzaia Naviglio Grande, 20144 Milano \nOrario di inizio: 18.30 \n\n");
            } else if (accompagnatore == 98){
                printf("Stai uscendo con i tuoi amici/e? Ecco cosa abbiamo trovato per te: \n");
                printf("1. Apertura Acquario Civico di Milano: oggi apre le porte al pubblico l'Acquario Civico di Milano, luogo ideale per vivere un'esperienza istruttiva in compagnia di amici in un ambiente rilassante. Ospitato in un grazioso edificio in stile liberty, la cui facciata è decorata da una statua di Nettuno e dai busti di diverse creature marine, l'acquario vanta un piccolo ma interessante percorso espositivo che riproduce diversi ecosistemi. \n");
                printf("Posizione: Viale Gadio 2, 20121, Milano \nOrario di apertura: dalle 09:00 alle 17:30 \nTelefono: +39 02 8846 5750 \nCosto: €5 per tutti i visitatori \n\n");
                printf("2. Museo di Storia Naturale di Milano: ospitato in un edificio ottocentesco all'interno dei giardini pubblici Indro Montanelli, il Museo Civico di Storia Naturale di Milano è considerato uno dei più importanti musei naturalistici d'Europa. Le esposizioni del piano terra, allestite oggi, comprendono una sala con fossili e scheletri di dinosauri, tra cui quello di un tirannosauro, e ricostruzioni in grandezza naturale di altri dinosauri. Il primo piano ospita invece grandi diorami con piante e animali che rappresentano i principali ecosistemi del mondo. Se sei un appassionato di storia naturale, il Museo ti aspetta! \n");
                printf("Posizione: Corso Venezia 55, 20121, Milano \nOrario di apertura: dalle 09:00 alle 17:30 \nTelefono: +39 02 8846 3337 \nCosto: €5 per tutti i visitatori \n\n");
            } else if (accompagnatore == 99){
                printf("Stai uscendo con la tua famiglia? Ecco cosa abbiamo trovato per te: \n");
                printf("1. Acquatica Park: il meraviglioso parco acquatico Acquatica Park, festeggia quest'oggi i 20 anni dall'apertura e offre al pubblico un'entrata giornaliera gratuita. Il parco offre svariati scivoli e attrazioni adatte a tutte le età! Goditi una splendida giornata in compagnia dei tuoi familiari all'Acuquatica Park, ma non dimenticarti di prenotare al recapito che trovi qui sotto poichè i posti sono limitati. \n");
                printf("Posizione: Via Gaetano Airaghi 61, 20153 Milano \nOrario di apertura: dalle 10:00 alle 19:30 \nTelefono: +39 02 4820 0134 \n\n");
                printf("2. Esposizione esclusiva al Museo Leonardo Da Vinci: per un'esperienza istruttiva e divertente allo stesso tempo, visita il Museo Nazionale della Scienza e della Tecnologia Leonardo da Vinci, che da oggi ospita la nuova collezione di modelli tridimensionali basati sui disegni di Leonardo (tra cui i famosi alianti e altre macchine volanti). Il museo inoltre propone numerose esposizioni interattive e attività educative. \n");
                printf("Posizione: Via San Vittore 21, Milano \nOrario di apertura: dalle 09:30 alle 17:00 \nTelefono: +39 02 485551 \nCosto: €10 per adulti, €5 per bambini di età inferiore ai 14 anni \n\n");
            } else if (accompagnatore == 100){
                printf("Stai uscendo con il tuo cagnolino? Ecco cosa abbiamo trovato per te: \n");
                printf("Maratona a parco Sempione: se hai voglia di fare un po' di sport con il tuo cagnolino in compagnia di altre persone, la maratona a parco sempione ti aspetta! L'evento offre anche un rinfresco per te e per il tuo cagnolino dopo la corsa, totalmente gratuito! \n");
                printf("Posizione: parco Sempione \nOrario: 16:30 \n\n");
            }
        }else {
            printf("Attenzione: non hai digitato una lettera corrispondente al tuo interesse! \n");
            accompagnatore = '\0';
            goto ret;
        }
    
    return (0);
}