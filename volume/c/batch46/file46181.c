// fichero 46181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46181;

Registro46181 crear_registro46181(int id) {
    Registro46181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46181(Registro46181 r) {
    return r.valor + r.id;
}
