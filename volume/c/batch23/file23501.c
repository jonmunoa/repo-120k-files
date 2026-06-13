// fichero 23501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23501;

Registro23501 crear_registro23501(int id) {
    Registro23501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23501(Registro23501 r) {
    return r.valor + r.id;
}
