// fichero 46977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46977;

Registro46977 crear_registro46977(int id) {
    Registro46977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46977(Registro46977 r) {
    return r.valor + r.id;
}
