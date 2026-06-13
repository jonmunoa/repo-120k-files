// fichero 46945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46945;

Registro46945 crear_registro46945(int id) {
    Registro46945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46945(Registro46945 r) {
    return r.valor + r.id;
}
