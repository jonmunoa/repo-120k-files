// fichero 14213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14213;

Registro14213 crear_registro14213(int id) {
    Registro14213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14213(Registro14213 r) {
    return r.valor + r.id;
}
