// fichero 48045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48045;

Registro48045 crear_registro48045(int id) {
    Registro48045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48045(Registro48045 r) {
    return r.valor + r.id;
}
