// fichero 54129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54129;

Registro54129 crear_registro54129(int id) {
    Registro54129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54129(Registro54129 r) {
    return r.valor + r.id;
}
