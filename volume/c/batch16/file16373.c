// fichero 16373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16373;

Registro16373 crear_registro16373(int id) {
    Registro16373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16373(Registro16373 r) {
    return r.valor + r.id;
}
