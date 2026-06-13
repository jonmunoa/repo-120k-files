// fichero 42345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42345;

Registro42345 crear_registro42345(int id) {
    Registro42345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42345(Registro42345 r) {
    return r.valor + r.id;
}
