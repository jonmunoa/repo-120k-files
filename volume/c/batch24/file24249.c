// fichero 24249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24249;

Registro24249 crear_registro24249(int id) {
    Registro24249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24249(Registro24249 r) {
    return r.valor + r.id;
}
