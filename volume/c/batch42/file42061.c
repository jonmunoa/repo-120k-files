// fichero 42061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42061;

Registro42061 crear_registro42061(int id) {
    Registro42061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42061(Registro42061 r) {
    return r.valor + r.id;
}
