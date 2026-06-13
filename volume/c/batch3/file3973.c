// fichero 3973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3973;

Registro3973 crear_registro3973(int id) {
    Registro3973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3973(Registro3973 r) {
    return r.valor + r.id;
}
