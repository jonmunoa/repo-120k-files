// fichero 23305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23305;

Registro23305 crear_registro23305(int id) {
    Registro23305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23305(Registro23305 r) {
    return r.valor + r.id;
}
