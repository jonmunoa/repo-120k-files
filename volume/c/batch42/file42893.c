// fichero 42893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42893;

Registro42893 crear_registro42893(int id) {
    Registro42893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42893(Registro42893 r) {
    return r.valor + r.id;
}
