// fichero 14249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14249;

Registro14249 crear_registro14249(int id) {
    Registro14249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14249(Registro14249 r) {
    return r.valor + r.id;
}
