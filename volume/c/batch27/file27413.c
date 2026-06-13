// fichero 27413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27413;

Registro27413 crear_registro27413(int id) {
    Registro27413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27413(Registro27413 r) {
    return r.valor + r.id;
}
