// fichero 17201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17201;

Registro17201 crear_registro17201(int id) {
    Registro17201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17201(Registro17201 r) {
    return r.valor + r.id;
}
