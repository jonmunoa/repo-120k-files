// fichero 361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro361;

Registro361 crear_registro361(int id) {
    Registro361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro361(Registro361 r) {
    return r.valor + r.id;
}
