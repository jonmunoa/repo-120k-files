// fichero 12409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12409;

Registro12409 crear_registro12409(int id) {
    Registro12409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12409(Registro12409 r) {
    return r.valor + r.id;
}
