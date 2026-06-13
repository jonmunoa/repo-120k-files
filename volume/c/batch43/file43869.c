// fichero 43869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43869;

Registro43869 crear_registro43869(int id) {
    Registro43869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43869(Registro43869 r) {
    return r.valor + r.id;
}
