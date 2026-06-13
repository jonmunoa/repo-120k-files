// fichero 7409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7409;

Registro7409 crear_registro7409(int id) {
    Registro7409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7409(Registro7409 r) {
    return r.valor + r.id;
}
