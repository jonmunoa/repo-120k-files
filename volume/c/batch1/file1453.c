// fichero 1453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1453;

Registro1453 crear_registro1453(int id) {
    Registro1453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1453(Registro1453 r) {
    return r.valor + r.id;
}
