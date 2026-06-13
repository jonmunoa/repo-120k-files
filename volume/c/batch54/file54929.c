// fichero 54929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54929;

Registro54929 crear_registro54929(int id) {
    Registro54929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54929(Registro54929 r) {
    return r.valor + r.id;
}
