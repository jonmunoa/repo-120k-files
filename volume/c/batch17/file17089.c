// fichero 17089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17089;

Registro17089 crear_registro17089(int id) {
    Registro17089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17089(Registro17089 r) {
    return r.valor + r.id;
}
