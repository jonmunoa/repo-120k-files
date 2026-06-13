// fichero 54413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54413;

Registro54413 crear_registro54413(int id) {
    Registro54413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54413(Registro54413 r) {
    return r.valor + r.id;
}
