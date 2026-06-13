// fichero 15601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15601;

Registro15601 crear_registro15601(int id) {
    Registro15601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15601(Registro15601 r) {
    return r.valor + r.id;
}
