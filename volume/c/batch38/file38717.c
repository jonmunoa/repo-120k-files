// fichero 38717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38717;

Registro38717 crear_registro38717(int id) {
    Registro38717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38717(Registro38717 r) {
    return r.valor + r.id;
}
