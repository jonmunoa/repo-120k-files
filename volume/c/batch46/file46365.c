// fichero 46365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46365;

Registro46365 crear_registro46365(int id) {
    Registro46365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46365(Registro46365 r) {
    return r.valor + r.id;
}
