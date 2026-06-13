// fichero 36341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36341;

Registro36341 crear_registro36341(int id) {
    Registro36341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36341(Registro36341 r) {
    return r.valor + r.id;
}
