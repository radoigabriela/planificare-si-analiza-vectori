# Proiect 4 – Planificare și Algoritmi Recursivi în C

Acest repository conține două programe scrise în limbajul C, care abordează planificarea de intervale și calculul recursiv folosind tehnica divide et impera:

### 1. Planificarea spectacolelor fără suprapunere

Programul citește de la tastatură un număr `n` de spectacole, fiecare cu un interval de desfășurare [start, sfârșit], exprimat în ore și minute.

Obiectivul este:
- să se determine un număr maxim de spectacole care pot fi programate fără suprapunere

Funcționalitățile programului includ:
- conversia orei în minute pentru o comparație precisă
- sortarea spectacolelor în funcție de ora de sfârșit
- selecția non-greedy a spectacolelor compatibile

### 2. Determinarea minimului și maximului prin divide-et-impera

Programul lucrează cu un vector de numere întregi și folosește tehnica recursivă divide-et-impera pentru a calcula:
- valoarea maximă
- valoarea minimă

Avantaje ale metodei:
- reduce numărul de comparații
- este o soluție eficientă pentru vectori mari

Soluția este implementată printr-o funcție recursivă care împarte vectorul în două jumătăți până la cazul de bază, apoi reconstruiește răspunsul prin comparații între subsoluții.
