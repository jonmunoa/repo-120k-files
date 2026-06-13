// fichero 37521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37521;

Registro37521 crear_registro37521(int id) {
    Registro37521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37521(Registro37521 r) {
    return r.valor + r.id;
}
