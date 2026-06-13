// fichero 32509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32509;

Registro32509 crear_registro32509(int id) {
    Registro32509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32509(Registro32509 r) {
    return r.valor + r.id;
}
