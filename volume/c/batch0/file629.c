// fichero 629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro629;

Registro629 crear_registro629(int id) {
    Registro629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro629(Registro629 r) {
    return r.valor + r.id;
}
