// fichero 17397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17397;

Registro17397 crear_registro17397(int id) {
    Registro17397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17397(Registro17397 r) {
    return r.valor + r.id;
}
