// fichero 6493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6493;

Registro6493 crear_registro6493(int id) {
    Registro6493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6493(Registro6493 r) {
    return r.valor + r.id;
}
