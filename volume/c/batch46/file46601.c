// fichero 46601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46601;

Registro46601 crear_registro46601(int id) {
    Registro46601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46601(Registro46601 r) {
    return r.valor + r.id;
}
