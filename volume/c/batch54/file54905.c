// fichero 54905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54905;

Registro54905 crear_registro54905(int id) {
    Registro54905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54905(Registro54905 r) {
    return r.valor + r.id;
}
