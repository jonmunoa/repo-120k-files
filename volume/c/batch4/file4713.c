// fichero 4713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4713;

Registro4713 crear_registro4713(int id) {
    Registro4713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4713(Registro4713 r) {
    return r.valor + r.id;
}
