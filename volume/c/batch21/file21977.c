// fichero 21977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21977;

Registro21977 crear_registro21977(int id) {
    Registro21977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21977(Registro21977 r) {
    return r.valor + r.id;
}
