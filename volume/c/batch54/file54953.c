// fichero 54953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54953;

Registro54953 crear_registro54953(int id) {
    Registro54953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54953(Registro54953 r) {
    return r.valor + r.id;
}
