// fichero 28201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28201;

Registro28201 crear_registro28201(int id) {
    Registro28201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28201(Registro28201 r) {
    return r.valor + r.id;
}
