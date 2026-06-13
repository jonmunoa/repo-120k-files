// fichero 32237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32237;

Registro32237 crear_registro32237(int id) {
    Registro32237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32237(Registro32237 r) {
    return r.valor + r.id;
}
