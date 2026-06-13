// fichero 1541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1541;

Registro1541 crear_registro1541(int id) {
    Registro1541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1541(Registro1541 r) {
    return r.valor + r.id;
}
