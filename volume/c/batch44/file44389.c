// fichero 44389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44389;

Registro44389 crear_registro44389(int id) {
    Registro44389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44389(Registro44389 r) {
    return r.valor + r.id;
}
