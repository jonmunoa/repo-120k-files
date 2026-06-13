// fichero 17409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17409;

Registro17409 crear_registro17409(int id) {
    Registro17409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17409(Registro17409 r) {
    return r.valor + r.id;
}
