// fichero 18433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18433;

Registro18433 crear_registro18433(int id) {
    Registro18433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18433(Registro18433 r) {
    return r.valor + r.id;
}
