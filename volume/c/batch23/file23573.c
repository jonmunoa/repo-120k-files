// fichero 23573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23573;

Registro23573 crear_registro23573(int id) {
    Registro23573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23573(Registro23573 r) {
    return r.valor + r.id;
}
