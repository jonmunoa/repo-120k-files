// fichero 4325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4325;

Registro4325 crear_registro4325(int id) {
    Registro4325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4325(Registro4325 r) {
    return r.valor + r.id;
}
