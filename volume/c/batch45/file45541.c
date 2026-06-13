// fichero 45541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45541;

Registro45541 crear_registro45541(int id) {
    Registro45541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45541(Registro45541 r) {
    return r.valor + r.id;
}
