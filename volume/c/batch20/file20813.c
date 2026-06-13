// fichero 20813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20813;

Registro20813 crear_registro20813(int id) {
    Registro20813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20813(Registro20813 r) {
    return r.valor + r.id;
}
