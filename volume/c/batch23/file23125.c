// fichero 23125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23125;

Registro23125 crear_registro23125(int id) {
    Registro23125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23125(Registro23125 r) {
    return r.valor + r.id;
}
