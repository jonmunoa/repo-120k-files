// fichero 42869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42869;

Registro42869 crear_registro42869(int id) {
    Registro42869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42869(Registro42869 r) {
    return r.valor + r.id;
}
