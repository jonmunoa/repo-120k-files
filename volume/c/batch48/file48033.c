// fichero 48033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48033;

Registro48033 crear_registro48033(int id) {
    Registro48033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48033(Registro48033 r) {
    return r.valor + r.id;
}
