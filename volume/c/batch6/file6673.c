// fichero 6673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6673;

Registro6673 crear_registro6673(int id) {
    Registro6673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6673(Registro6673 r) {
    return r.valor + r.id;
}
