// fichero 48725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48725;

Registro48725 crear_registro48725(int id) {
    Registro48725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48725(Registro48725 r) {
    return r.valor + r.id;
}
