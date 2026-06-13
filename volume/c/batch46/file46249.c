// fichero 46249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46249;

Registro46249 crear_registro46249(int id) {
    Registro46249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46249(Registro46249 r) {
    return r.valor + r.id;
}
