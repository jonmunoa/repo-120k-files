// fichero 49413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49413;

Registro49413 crear_registro49413(int id) {
    Registro49413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49413(Registro49413 r) {
    return r.valor + r.id;
}
