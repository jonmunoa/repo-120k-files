// fichero 54181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54181;

Registro54181 crear_registro54181(int id) {
    Registro54181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54181(Registro54181 r) {
    return r.valor + r.id;
}
