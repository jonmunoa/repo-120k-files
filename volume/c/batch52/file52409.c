// fichero 52409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52409;

Registro52409 crear_registro52409(int id) {
    Registro52409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52409(Registro52409 r) {
    return r.valor + r.id;
}
