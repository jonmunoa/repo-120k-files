// fichero 4005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4005;

Registro4005 crear_registro4005(int id) {
    Registro4005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4005(Registro4005 r) {
    return r.valor + r.id;
}
