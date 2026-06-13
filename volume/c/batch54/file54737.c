// fichero 54737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54737;

Registro54737 crear_registro54737(int id) {
    Registro54737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54737(Registro54737 r) {
    return r.valor + r.id;
}
