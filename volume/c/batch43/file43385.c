// fichero 43385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43385;

Registro43385 crear_registro43385(int id) {
    Registro43385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43385(Registro43385 r) {
    return r.valor + r.id;
}
