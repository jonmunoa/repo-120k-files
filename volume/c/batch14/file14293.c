// fichero 14293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14293;

Registro14293 crear_registro14293(int id) {
    Registro14293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14293(Registro14293 r) {
    return r.valor + r.id;
}
