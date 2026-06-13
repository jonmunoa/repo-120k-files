// fichero 54161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54161;

Registro54161 crear_registro54161(int id) {
    Registro54161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54161(Registro54161 r) {
    return r.valor + r.id;
}
