// fichero 14533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14533;

Registro14533 crear_registro14533(int id) {
    Registro14533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14533(Registro14533 r) {
    return r.valor + r.id;
}
