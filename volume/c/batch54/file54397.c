// fichero 54397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54397;

Registro54397 crear_registro54397(int id) {
    Registro54397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54397(Registro54397 r) {
    return r.valor + r.id;
}
