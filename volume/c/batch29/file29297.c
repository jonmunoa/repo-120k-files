// fichero 29297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29297;

Registro29297 crear_registro29297(int id) {
    Registro29297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29297(Registro29297 r) {
    return r.valor + r.id;
}
