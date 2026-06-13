// fichero 43425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43425;

Registro43425 crear_registro43425(int id) {
    Registro43425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43425(Registro43425 r) {
    return r.valor + r.id;
}
