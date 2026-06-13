// fichero 4541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4541;

Registro4541 crear_registro4541(int id) {
    Registro4541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4541(Registro4541 r) {
    return r.valor + r.id;
}
