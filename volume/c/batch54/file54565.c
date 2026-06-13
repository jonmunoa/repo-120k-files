// fichero 54565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54565;

Registro54565 crear_registro54565(int id) {
    Registro54565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54565(Registro54565 r) {
    return r.valor + r.id;
}
