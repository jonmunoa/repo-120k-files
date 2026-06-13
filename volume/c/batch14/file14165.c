// fichero 14165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14165;

Registro14165 crear_registro14165(int id) {
    Registro14165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14165(Registro14165 r) {
    return r.valor + r.id;
}
