// fichero 23381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23381;

Registro23381 crear_registro23381(int id) {
    Registro23381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23381(Registro23381 r) {
    return r.valor + r.id;
}
