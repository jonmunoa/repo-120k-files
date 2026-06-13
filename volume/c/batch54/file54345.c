// fichero 54345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54345;

Registro54345 crear_registro54345(int id) {
    Registro54345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54345(Registro54345 r) {
    return r.valor + r.id;
}
