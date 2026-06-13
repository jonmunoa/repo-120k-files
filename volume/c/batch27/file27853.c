// fichero 27853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27853;

Registro27853 crear_registro27853(int id) {
    Registro27853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27853(Registro27853 r) {
    return r.valor + r.id;
}
