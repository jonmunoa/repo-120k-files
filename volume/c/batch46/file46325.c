// fichero 46325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46325;

Registro46325 crear_registro46325(int id) {
    Registro46325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46325(Registro46325 r) {
    return r.valor + r.id;
}
