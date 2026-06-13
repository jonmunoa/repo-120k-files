// fichero 47069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47069;

Registro47069 crear_registro47069(int id) {
    Registro47069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47069(Registro47069 r) {
    return r.valor + r.id;
}
