// fichero 7921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7921;

Registro7921 crear_registro7921(int id) {
    Registro7921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7921(Registro7921 r) {
    return r.valor + r.id;
}
