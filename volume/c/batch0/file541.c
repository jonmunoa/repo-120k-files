// fichero 541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro541;

Registro541 crear_registro541(int id) {
    Registro541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro541(Registro541 r) {
    return r.valor + r.id;
}
