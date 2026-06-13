// fichero 50329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50329;

Registro50329 crear_registro50329(int id) {
    Registro50329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50329(Registro50329 r) {
    return r.valor + r.id;
}
