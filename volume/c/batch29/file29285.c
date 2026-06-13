// fichero 29285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29285;

Registro29285 crear_registro29285(int id) {
    Registro29285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29285(Registro29285 r) {
    return r.valor + r.id;
}
