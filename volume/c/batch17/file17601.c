// fichero 17601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17601;

Registro17601 crear_registro17601(int id) {
    Registro17601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17601(Registro17601 r) {
    return r.valor + r.id;
}
