// fichero 42133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42133;

Registro42133 crear_registro42133(int id) {
    Registro42133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42133(Registro42133 r) {
    return r.valor + r.id;
}
