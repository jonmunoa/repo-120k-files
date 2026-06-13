// fichero 20165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20165;

Registro20165 crear_registro20165(int id) {
    Registro20165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20165(Registro20165 r) {
    return r.valor + r.id;
}
