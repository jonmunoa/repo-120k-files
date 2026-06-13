// fichero 32869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32869;

Registro32869 crear_registro32869(int id) {
    Registro32869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32869(Registro32869 r) {
    return r.valor + r.id;
}
