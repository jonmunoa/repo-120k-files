// fichero 6109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6109;

Registro6109 crear_registro6109(int id) {
    Registro6109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6109(Registro6109 r) {
    return r.valor + r.id;
}
