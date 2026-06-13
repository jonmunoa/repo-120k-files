// fichero 41341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41341;

Registro41341 crear_registro41341(int id) {
    Registro41341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41341(Registro41341 r) {
    return r.valor + r.id;
}
