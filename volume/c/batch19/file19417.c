// fichero 19417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19417;

Registro19417 crear_registro19417(int id) {
    Registro19417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19417(Registro19417 r) {
    return r.valor + r.id;
}
