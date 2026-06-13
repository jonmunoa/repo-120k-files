// fichero 27293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27293;

Registro27293 crear_registro27293(int id) {
    Registro27293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27293(Registro27293 r) {
    return r.valor + r.id;
}
