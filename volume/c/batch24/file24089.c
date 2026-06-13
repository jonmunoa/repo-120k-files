// fichero 24089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24089;

Registro24089 crear_registro24089(int id) {
    Registro24089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24089(Registro24089 r) {
    return r.valor + r.id;
}
