// fichero 23273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23273;

Registro23273 crear_registro23273(int id) {
    Registro23273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23273(Registro23273 r) {
    return r.valor + r.id;
}
