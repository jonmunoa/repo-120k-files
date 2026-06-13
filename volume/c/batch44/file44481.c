// fichero 44481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44481;

Registro44481 crear_registro44481(int id) {
    Registro44481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44481(Registro44481 r) {
    return r.valor + r.id;
}
