// fichero 6077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6077;

Registro6077 crear_registro6077(int id) {
    Registro6077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6077(Registro6077 r) {
    return r.valor + r.id;
}
