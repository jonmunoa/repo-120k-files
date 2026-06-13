// fichero 48261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48261;

Registro48261 crear_registro48261(int id) {
    Registro48261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48261(Registro48261 r) {
    return r.valor + r.id;
}
