// fichero 27013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27013;

Registro27013 crear_registro27013(int id) {
    Registro27013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27013(Registro27013 r) {
    return r.valor + r.id;
}
