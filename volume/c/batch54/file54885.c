// fichero 54885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54885;

Registro54885 crear_registro54885(int id) {
    Registro54885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54885(Registro54885 r) {
    return r.valor + r.id;
}
