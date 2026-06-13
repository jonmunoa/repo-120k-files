// fichero 17921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17921;

Registro17921 crear_registro17921(int id) {
    Registro17921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17921(Registro17921 r) {
    return r.valor + r.id;
}
