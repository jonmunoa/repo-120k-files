// fichero 20429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20429;

Registro20429 crear_registro20429(int id) {
    Registro20429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20429(Registro20429 r) {
    return r.valor + r.id;
}
