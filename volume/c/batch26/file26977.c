// fichero 26977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26977;

Registro26977 crear_registro26977(int id) {
    Registro26977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26977(Registro26977 r) {
    return r.valor + r.id;
}
