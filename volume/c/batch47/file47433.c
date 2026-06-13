// fichero 47433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47433;

Registro47433 crear_registro47433(int id) {
    Registro47433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47433(Registro47433 r) {
    return r.valor + r.id;
}
