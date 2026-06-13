// fichero 48689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48689;

Registro48689 crear_registro48689(int id) {
    Registro48689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48689(Registro48689 r) {
    return r.valor + r.id;
}
