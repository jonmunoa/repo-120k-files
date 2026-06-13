// fichero 46385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46385;

Registro46385 crear_registro46385(int id) {
    Registro46385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46385(Registro46385 r) {
    return r.valor + r.id;
}
