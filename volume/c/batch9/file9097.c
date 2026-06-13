// fichero 9097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9097;

Registro9097 crear_registro9097(int id) {
    Registro9097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9097(Registro9097 r) {
    return r.valor + r.id;
}
