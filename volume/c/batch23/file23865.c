// fichero 23865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23865;

Registro23865 crear_registro23865(int id) {
    Registro23865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23865(Registro23865 r) {
    return r.valor + r.id;
}
