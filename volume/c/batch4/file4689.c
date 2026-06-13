// fichero 4689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4689;

Registro4689 crear_registro4689(int id) {
    Registro4689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4689(Registro4689 r) {
    return r.valor + r.id;
}
