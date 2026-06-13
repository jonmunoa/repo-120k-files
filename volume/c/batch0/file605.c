// fichero 605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro605;

Registro605 crear_registro605(int id) {
    Registro605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro605(Registro605 r) {
    return r.valor + r.id;
}
