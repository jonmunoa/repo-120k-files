// fichero 6073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6073;

Registro6073 crear_registro6073(int id) {
    Registro6073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6073(Registro6073 r) {
    return r.valor + r.id;
}
