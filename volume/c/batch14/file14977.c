// fichero 14977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14977;

Registro14977 crear_registro14977(int id) {
    Registro14977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14977(Registro14977 r) {
    return r.valor + r.id;
}
