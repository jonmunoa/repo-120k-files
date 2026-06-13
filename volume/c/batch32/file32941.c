// fichero 32941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32941;

Registro32941 crear_registro32941(int id) {
    Registro32941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32941(Registro32941 r) {
    return r.valor + r.id;
}
