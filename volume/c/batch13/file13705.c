// fichero 13705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13705;

Registro13705 crear_registro13705(int id) {
    Registro13705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13705(Registro13705 r) {
    return r.valor + r.id;
}
