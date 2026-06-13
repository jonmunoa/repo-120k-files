// fichero 14789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14789;

Registro14789 crear_registro14789(int id) {
    Registro14789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14789(Registro14789 r) {
    return r.valor + r.id;
}
