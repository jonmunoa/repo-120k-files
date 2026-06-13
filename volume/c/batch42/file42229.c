// fichero 42229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42229;

Registro42229 crear_registro42229(int id) {
    Registro42229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42229(Registro42229 r) {
    return r.valor + r.id;
}
