// fichero 23977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23977;

Registro23977 crear_registro23977(int id) {
    Registro23977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23977(Registro23977 r) {
    return r.valor + r.id;
}
