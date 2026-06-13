// fichero 42885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42885;

Registro42885 crear_registro42885(int id) {
    Registro42885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42885(Registro42885 r) {
    return r.valor + r.id;
}
