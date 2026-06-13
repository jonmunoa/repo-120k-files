// fichero 54697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54697;

Registro54697 crear_registro54697(int id) {
    Registro54697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54697(Registro54697 r) {
    return r.valor + r.id;
}
