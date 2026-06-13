// fichero 54869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54869;

Registro54869 crear_registro54869(int id) {
    Registro54869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54869(Registro54869 r) {
    return r.valor + r.id;
}
