// fichero 23257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23257;

Registro23257 crear_registro23257(int id) {
    Registro23257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23257(Registro23257 r) {
    return r.valor + r.id;
}
