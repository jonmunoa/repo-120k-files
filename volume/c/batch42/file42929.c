// fichero 42929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42929;

Registro42929 crear_registro42929(int id) {
    Registro42929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42929(Registro42929 r) {
    return r.valor + r.id;
}
