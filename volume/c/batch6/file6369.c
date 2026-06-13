// fichero 6369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6369;

Registro6369 crear_registro6369(int id) {
    Registro6369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6369(Registro6369 r) {
    return r.valor + r.id;
}
