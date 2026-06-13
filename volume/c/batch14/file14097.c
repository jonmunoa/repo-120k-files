// fichero 14097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14097;

Registro14097 crear_registro14097(int id) {
    Registro14097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14097(Registro14097 r) {
    return r.valor + r.id;
}
