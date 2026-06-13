// fichero 5449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5449;

Registro5449 crear_registro5449(int id) {
    Registro5449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5449(Registro5449 r) {
    return r.valor + r.id;
}
