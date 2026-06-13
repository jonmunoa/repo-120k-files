// fichero 23181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23181;

Registro23181 crear_registro23181(int id) {
    Registro23181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23181(Registro23181 r) {
    return r.valor + r.id;
}
