// fichero 36141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36141;

Registro36141 crear_registro36141(int id) {
    Registro36141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36141(Registro36141 r) {
    return r.valor + r.id;
}
