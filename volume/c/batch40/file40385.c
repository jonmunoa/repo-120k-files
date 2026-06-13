// fichero 40385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40385;

Registro40385 crear_registro40385(int id) {
    Registro40385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40385(Registro40385 r) {
    return r.valor + r.id;
}
