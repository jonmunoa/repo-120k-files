// fichero 48105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48105;

Registro48105 crear_registro48105(int id) {
    Registro48105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48105(Registro48105 r) {
    return r.valor + r.id;
}
