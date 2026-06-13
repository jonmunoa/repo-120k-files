// fichero 45613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45613;

Registro45613 crear_registro45613(int id) {
    Registro45613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45613(Registro45613 r) {
    return r.valor + r.id;
}
