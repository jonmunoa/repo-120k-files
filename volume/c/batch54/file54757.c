// fichero 54757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54757;

Registro54757 crear_registro54757(int id) {
    Registro54757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54757(Registro54757 r) {
    return r.valor + r.id;
}
