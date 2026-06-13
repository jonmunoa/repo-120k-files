// fichero 449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro449;

Registro449 crear_registro449(int id) {
    Registro449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro449(Registro449 r) {
    return r.valor + r.id;
}
