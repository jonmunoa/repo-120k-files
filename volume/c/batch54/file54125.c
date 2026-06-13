// fichero 54125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54125;

Registro54125 crear_registro54125(int id) {
    Registro54125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54125(Registro54125 r) {
    return r.valor + r.id;
}
