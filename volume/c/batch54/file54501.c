// fichero 54501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54501;

Registro54501 crear_registro54501(int id) {
    Registro54501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54501(Registro54501 r) {
    return r.valor + r.id;
}
