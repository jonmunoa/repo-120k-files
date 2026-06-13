// fichero 23065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23065;

Registro23065 crear_registro23065(int id) {
    Registro23065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23065(Registro23065 r) {
    return r.valor + r.id;
}
