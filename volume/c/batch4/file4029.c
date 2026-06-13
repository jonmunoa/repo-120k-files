// fichero 4029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4029;

Registro4029 crear_registro4029(int id) {
    Registro4029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4029(Registro4029 r) {
    return r.valor + r.id;
}
