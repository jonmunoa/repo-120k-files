// fichero 23745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23745;

Registro23745 crear_registro23745(int id) {
    Registro23745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23745(Registro23745 r) {
    return r.valor + r.id;
}
