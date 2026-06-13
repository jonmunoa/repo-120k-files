// fichero 54069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54069;

Registro54069 crear_registro54069(int id) {
    Registro54069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54069(Registro54069 r) {
    return r.valor + r.id;
}
