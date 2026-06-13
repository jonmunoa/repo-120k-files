// fichero 46493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46493;

Registro46493 crear_registro46493(int id) {
    Registro46493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46493(Registro46493 r) {
    return r.valor + r.id;
}
