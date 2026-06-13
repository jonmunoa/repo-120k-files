// fichero 36725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36725;

Registro36725 crear_registro36725(int id) {
    Registro36725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36725(Registro36725 r) {
    return r.valor + r.id;
}
