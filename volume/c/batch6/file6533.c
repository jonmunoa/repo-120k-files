// fichero 6533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6533;

Registro6533 crear_registro6533(int id) {
    Registro6533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6533(Registro6533 r) {
    return r.valor + r.id;
}
