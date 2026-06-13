// fichero 17665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17665;

Registro17665 crear_registro17665(int id) {
    Registro17665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17665(Registro17665 r) {
    return r.valor + r.id;
}
