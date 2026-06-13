// fichero 42429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42429;

Registro42429 crear_registro42429(int id) {
    Registro42429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42429(Registro42429 r) {
    return r.valor + r.id;
}
