// fichero 27189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27189;

Registro27189 crear_registro27189(int id) {
    Registro27189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27189(Registro27189 r) {
    return r.valor + r.id;
}
