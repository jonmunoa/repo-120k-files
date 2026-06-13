// fichero 29361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29361;

Registro29361 crear_registro29361(int id) {
    Registro29361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29361(Registro29361 r) {
    return r.valor + r.id;
}
