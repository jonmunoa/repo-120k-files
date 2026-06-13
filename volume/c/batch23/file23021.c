// fichero 23021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23021;

Registro23021 crear_registro23021(int id) {
    Registro23021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23021(Registro23021 r) {
    return r.valor + r.id;
}
