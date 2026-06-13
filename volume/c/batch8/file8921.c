// fichero 8921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8921;

Registro8921 crear_registro8921(int id) {
    Registro8921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8921(Registro8921 r) {
    return r.valor + r.id;
}
