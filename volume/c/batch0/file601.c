// fichero 601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro601;

Registro601 crear_registro601(int id) {
    Registro601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro601(Registro601 r) {
    return r.valor + r.id;
}
