// fichero 54497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54497;

Registro54497 crear_registro54497(int id) {
    Registro54497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54497(Registro54497 r) {
    return r.valor + r.id;
}
