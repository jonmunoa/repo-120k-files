// fichero 54541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54541;

Registro54541 crear_registro54541(int id) {
    Registro54541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54541(Registro54541 r) {
    return r.valor + r.id;
}
