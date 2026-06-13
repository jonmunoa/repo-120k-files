// fichero 20249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20249;

Registro20249 crear_registro20249(int id) {
    Registro20249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20249(Registro20249 r) {
    return r.valor + r.id;
}
