// fichero 14189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14189;

Registro14189 crear_registro14189(int id) {
    Registro14189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14189(Registro14189 r) {
    return r.valor + r.id;
}
