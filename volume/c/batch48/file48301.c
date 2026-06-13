// fichero 48301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48301;

Registro48301 crear_registro48301(int id) {
    Registro48301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48301(Registro48301 r) {
    return r.valor + r.id;
}
