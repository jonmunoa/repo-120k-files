// fichero 34541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34541;

Registro34541 crear_registro34541(int id) {
    Registro34541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34541(Registro34541 r) {
    return r.valor + r.id;
}
