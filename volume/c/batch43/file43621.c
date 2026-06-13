// fichero 43621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43621;

Registro43621 crear_registro43621(int id) {
    Registro43621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43621(Registro43621 r) {
    return r.valor + r.id;
}
