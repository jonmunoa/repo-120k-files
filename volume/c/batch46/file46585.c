// fichero 46585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46585;

Registro46585 crear_registro46585(int id) {
    Registro46585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46585(Registro46585 r) {
    return r.valor + r.id;
}
