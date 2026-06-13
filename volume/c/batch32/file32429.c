// fichero 32429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32429;

Registro32429 crear_registro32429(int id) {
    Registro32429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32429(Registro32429 r) {
    return r.valor + r.id;
}
