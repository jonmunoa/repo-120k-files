// fichero 23385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23385;

Registro23385 crear_registro23385(int id) {
    Registro23385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23385(Registro23385 r) {
    return r.valor + r.id;
}
