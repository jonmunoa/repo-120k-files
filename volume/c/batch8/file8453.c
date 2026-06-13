// fichero 8453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8453;

Registro8453 crear_registro8453(int id) {
    Registro8453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8453(Registro8453 r) {
    return r.valor + r.id;
}
