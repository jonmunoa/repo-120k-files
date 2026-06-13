// fichero 20201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20201;

Registro20201 crear_registro20201(int id) {
    Registro20201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20201(Registro20201 r) {
    return r.valor + r.id;
}
