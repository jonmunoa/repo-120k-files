// fichero 46409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46409;

Registro46409 crear_registro46409(int id) {
    Registro46409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46409(Registro46409 r) {
    return r.valor + r.id;
}
