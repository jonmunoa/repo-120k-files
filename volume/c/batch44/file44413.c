// fichero 44413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44413;

Registro44413 crear_registro44413(int id) {
    Registro44413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44413(Registro44413 r) {
    return r.valor + r.id;
}
