// fichero 48593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48593;

Registro48593 crear_registro48593(int id) {
    Registro48593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48593(Registro48593 r) {
    return r.valor + r.id;
}
