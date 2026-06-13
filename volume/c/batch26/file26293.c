// fichero 26293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26293;

Registro26293 crear_registro26293(int id) {
    Registro26293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26293(Registro26293 r) {
    return r.valor + r.id;
}
