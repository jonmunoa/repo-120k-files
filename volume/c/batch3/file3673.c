// fichero 3673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3673;

Registro3673 crear_registro3673(int id) {
    Registro3673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3673(Registro3673 r) {
    return r.valor + r.id;
}
