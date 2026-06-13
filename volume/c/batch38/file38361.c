// fichero 38361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38361;

Registro38361 crear_registro38361(int id) {
    Registro38361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38361(Registro38361 r) {
    return r.valor + r.id;
}
