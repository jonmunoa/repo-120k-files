// fichero 46573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46573;

Registro46573 crear_registro46573(int id) {
    Registro46573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46573(Registro46573 r) {
    return r.valor + r.id;
}
