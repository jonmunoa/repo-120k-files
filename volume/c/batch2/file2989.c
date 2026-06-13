// fichero 2989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2989;

Registro2989 crear_registro2989(int id) {
    Registro2989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2989(Registro2989 r) {
    return r.valor + r.id;
}
