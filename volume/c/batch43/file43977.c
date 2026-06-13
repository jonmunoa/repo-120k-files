// fichero 43977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43977;

Registro43977 crear_registro43977(int id) {
    Registro43977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43977(Registro43977 r) {
    return r.valor + r.id;
}
