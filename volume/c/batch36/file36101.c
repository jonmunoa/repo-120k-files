// fichero 36101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36101;

Registro36101 crear_registro36101(int id) {
    Registro36101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36101(Registro36101 r) {
    return r.valor + r.id;
}
