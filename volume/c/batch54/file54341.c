// fichero 54341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54341;

Registro54341 crear_registro54341(int id) {
    Registro54341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54341(Registro54341 r) {
    return r.valor + r.id;
}
