// fichero 1869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1869;

Registro1869 crear_registro1869(int id) {
    Registro1869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1869(Registro1869 r) {
    return r.valor + r.id;
}
