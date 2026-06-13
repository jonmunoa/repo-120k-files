// fichero 48489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48489;

Registro48489 crear_registro48489(int id) {
    Registro48489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48489(Registro48489 r) {
    return r.valor + r.id;
}
