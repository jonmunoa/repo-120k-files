// fichero 6165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6165;

Registro6165 crear_registro6165(int id) {
    Registro6165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6165(Registro6165 r) {
    return r.valor + r.id;
}
