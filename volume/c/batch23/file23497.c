// fichero 23497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23497;

Registro23497 crear_registro23497(int id) {
    Registro23497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23497(Registro23497 r) {
    return r.valor + r.id;
}
