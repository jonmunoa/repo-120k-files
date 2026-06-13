// fichero 7929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7929;

Registro7929 crear_registro7929(int id) {
    Registro7929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7929(Registro7929 r) {
    return r.valor + r.id;
}
