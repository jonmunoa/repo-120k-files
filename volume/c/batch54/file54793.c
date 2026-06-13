// fichero 54793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54793;

Registro54793 crear_registro54793(int id) {
    Registro54793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54793(Registro54793 r) {
    return r.valor + r.id;
}
