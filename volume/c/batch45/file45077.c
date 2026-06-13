// fichero 45077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45077;

Registro45077 crear_registro45077(int id) {
    Registro45077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45077(Registro45077 r) {
    return r.valor + r.id;
}
