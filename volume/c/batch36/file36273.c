// fichero 36273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36273;

Registro36273 crear_registro36273(int id) {
    Registro36273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36273(Registro36273 r) {
    return r.valor + r.id;
}
