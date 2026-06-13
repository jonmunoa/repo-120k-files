// fichero 42609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42609;

Registro42609 crear_registro42609(int id) {
    Registro42609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42609(Registro42609 r) {
    return r.valor + r.id;
}
