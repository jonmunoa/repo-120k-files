// fichero 15797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15797;

Registro15797 crear_registro15797(int id) {
    Registro15797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15797(Registro15797 r) {
    return r.valor + r.id;
}
