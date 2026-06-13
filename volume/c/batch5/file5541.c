// fichero 5541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5541;

Registro5541 crear_registro5541(int id) {
    Registro5541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5541(Registro5541 r) {
    return r.valor + r.id;
}
