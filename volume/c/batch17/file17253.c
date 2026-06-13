// fichero 17253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17253;

Registro17253 crear_registro17253(int id) {
    Registro17253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17253(Registro17253 r) {
    return r.valor + r.id;
}
