// fichero 42501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42501;

Registro42501 crear_registro42501(int id) {
    Registro42501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42501(Registro42501 r) {
    return r.valor + r.id;
}
