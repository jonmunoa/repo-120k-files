// fichero 32173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32173;

Registro32173 crear_registro32173(int id) {
    Registro32173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32173(Registro32173 r) {
    return r.valor + r.id;
}
