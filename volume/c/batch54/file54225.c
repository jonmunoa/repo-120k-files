// fichero 54225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54225;

Registro54225 crear_registro54225(int id) {
    Registro54225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54225(Registro54225 r) {
    return r.valor + r.id;
}
