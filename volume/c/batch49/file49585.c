// fichero 49585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49585;

Registro49585 crear_registro49585(int id) {
    Registro49585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49585(Registro49585 r) {
    return r.valor + r.id;
}
