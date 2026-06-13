// fichero 4361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4361;

Registro4361 crear_registro4361(int id) {
    Registro4361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4361(Registro4361 r) {
    return r.valor + r.id;
}
