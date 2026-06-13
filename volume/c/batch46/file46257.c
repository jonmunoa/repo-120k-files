// fichero 46257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46257;

Registro46257 crear_registro46257(int id) {
    Registro46257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46257(Registro46257 r) {
    return r.valor + r.id;
}
