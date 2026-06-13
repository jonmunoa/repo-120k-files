// fichero 23233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23233;

Registro23233 crear_registro23233(int id) {
    Registro23233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23233(Registro23233 r) {
    return r.valor + r.id;
}
