// fichero 493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro493;

Registro493 crear_registro493(int id) {
    Registro493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro493(Registro493 r) {
    return r.valor + r.id;
}
