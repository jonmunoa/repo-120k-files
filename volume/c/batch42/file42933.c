// fichero 42933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42933;

Registro42933 crear_registro42933(int id) {
    Registro42933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42933(Registro42933 r) {
    return r.valor + r.id;
}
