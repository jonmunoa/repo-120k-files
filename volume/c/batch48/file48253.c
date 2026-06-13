// fichero 48253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48253;

Registro48253 crear_registro48253(int id) {
    Registro48253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48253(Registro48253 r) {
    return r.valor + r.id;
}
