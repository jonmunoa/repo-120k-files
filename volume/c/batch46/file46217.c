// fichero 46217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46217;

Registro46217 crear_registro46217(int id) {
    Registro46217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46217(Registro46217 r) {
    return r.valor + r.id;
}
