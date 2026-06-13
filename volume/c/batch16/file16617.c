// fichero 16617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16617;

Registro16617 crear_registro16617(int id) {
    Registro16617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16617(Registro16617 r) {
    return r.valor + r.id;
}
