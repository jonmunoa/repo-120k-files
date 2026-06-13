// fichero 49641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49641;

Registro49641 crear_registro49641(int id) {
    Registro49641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49641(Registro49641 r) {
    return r.valor + r.id;
}
