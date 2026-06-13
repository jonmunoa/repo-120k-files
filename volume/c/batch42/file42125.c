// fichero 42125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42125;

Registro42125 crear_registro42125(int id) {
    Registro42125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42125(Registro42125 r) {
    return r.valor + r.id;
}
