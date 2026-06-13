// fichero 21321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21321;

Registro21321 crear_registro21321(int id) {
    Registro21321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21321(Registro21321 r) {
    return r.valor + r.id;
}
