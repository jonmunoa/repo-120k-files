// fichero 42917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42917;

Registro42917 crear_registro42917(int id) {
    Registro42917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42917(Registro42917 r) {
    return r.valor + r.id;
}
