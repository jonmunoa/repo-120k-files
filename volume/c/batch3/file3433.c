// fichero 3433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3433;

Registro3433 crear_registro3433(int id) {
    Registro3433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3433(Registro3433 r) {
    return r.valor + r.id;
}
