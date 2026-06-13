// fichero 42593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42593;

Registro42593 crear_registro42593(int id) {
    Registro42593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42593(Registro42593 r) {
    return r.valor + r.id;
}
