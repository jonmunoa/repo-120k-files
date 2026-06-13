// fichero 6941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6941;

Registro6941 crear_registro6941(int id) {
    Registro6941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6941(Registro6941 r) {
    return r.valor + r.id;
}
