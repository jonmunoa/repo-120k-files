// fichero 42577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42577;

Registro42577 crear_registro42577(int id) {
    Registro42577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42577(Registro42577 r) {
    return r.valor + r.id;
}
