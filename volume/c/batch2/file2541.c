// fichero 2541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2541;

Registro2541 crear_registro2541(int id) {
    Registro2541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2541(Registro2541 r) {
    return r.valor + r.id;
}
