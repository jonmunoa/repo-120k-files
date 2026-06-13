// fichero 54733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54733;

Registro54733 crear_registro54733(int id) {
    Registro54733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54733(Registro54733 r) {
    return r.valor + r.id;
}
