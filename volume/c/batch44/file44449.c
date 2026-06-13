// fichero 44449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44449;

Registro44449 crear_registro44449(int id) {
    Registro44449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44449(Registro44449 r) {
    return r.valor + r.id;
}
