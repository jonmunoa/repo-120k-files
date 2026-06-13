// fichero 7097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7097;

Registro7097 crear_registro7097(int id) {
    Registro7097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7097(Registro7097 r) {
    return r.valor + r.id;
}
