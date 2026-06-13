// fichero 24673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24673;

Registro24673 crear_registro24673(int id) {
    Registro24673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24673(Registro24673 r) {
    return r.valor + r.id;
}
