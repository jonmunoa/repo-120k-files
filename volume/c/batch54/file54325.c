// fichero 54325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54325;

Registro54325 crear_registro54325(int id) {
    Registro54325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54325(Registro54325 r) {
    return r.valor + r.id;
}
