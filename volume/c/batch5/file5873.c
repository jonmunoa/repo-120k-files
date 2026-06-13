// fichero 5873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5873;

Registro5873 crear_registro5873(int id) {
    Registro5873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5873(Registro5873 r) {
    return r.valor + r.id;
}
