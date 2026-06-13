// fichero 4189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4189;

Registro4189 crear_registro4189(int id) {
    Registro4189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4189(Registro4189 r) {
    return r.valor + r.id;
}
