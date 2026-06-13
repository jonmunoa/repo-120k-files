// fichero 46093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46093;

Registro46093 crear_registro46093(int id) {
    Registro46093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46093(Registro46093 r) {
    return r.valor + r.id;
}
