// fichero 42833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42833;

Registro42833 crear_registro42833(int id) {
    Registro42833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42833(Registro42833 r) {
    return r.valor + r.id;
}
