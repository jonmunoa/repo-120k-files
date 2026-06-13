// fichero 54117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54117;

Registro54117 crear_registro54117(int id) {
    Registro54117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54117(Registro54117 r) {
    return r.valor + r.id;
}
