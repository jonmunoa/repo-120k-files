// fichero 23685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23685;

Registro23685 crear_registro23685(int id) {
    Registro23685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23685(Registro23685 r) {
    return r.valor + r.id;
}
