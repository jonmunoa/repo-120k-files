// fichero 54753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54753;

Registro54753 crear_registro54753(int id) {
    Registro54753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54753(Registro54753 r) {
    return r.valor + r.id;
}
