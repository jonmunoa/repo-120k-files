// fichero 54369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54369;

Registro54369 crear_registro54369(int id) {
    Registro54369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54369(Registro54369 r) {
    return r.valor + r.id;
}
