// fichero 48417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48417;

Registro48417 crear_registro48417(int id) {
    Registro48417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48417(Registro48417 r) {
    return r.valor + r.id;
}
