// fichero 29325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29325;

Registro29325 crear_registro29325(int id) {
    Registro29325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29325(Registro29325 r) {
    return r.valor + r.id;
}
