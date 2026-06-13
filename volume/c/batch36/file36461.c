// fichero 36461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36461;

Registro36461 crear_registro36461(int id) {
    Registro36461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36461(Registro36461 r) {
    return r.valor + r.id;
}
