// fichero 33369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33369;

Registro33369 crear_registro33369(int id) {
    Registro33369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33369(Registro33369 r) {
    return r.valor + r.id;
}
