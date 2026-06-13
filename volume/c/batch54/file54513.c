// fichero 54513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54513;

Registro54513 crear_registro54513(int id) {
    Registro54513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54513(Registro54513 r) {
    return r.valor + r.id;
}
