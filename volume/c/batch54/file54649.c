// fichero 54649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54649;

Registro54649 crear_registro54649(int id) {
    Registro54649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54649(Registro54649 r) {
    return r.valor + r.id;
}
