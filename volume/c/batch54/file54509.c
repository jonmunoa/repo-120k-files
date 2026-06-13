// fichero 54509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54509;

Registro54509 crear_registro54509(int id) {
    Registro54509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54509(Registro54509 r) {
    return r.valor + r.id;
}
