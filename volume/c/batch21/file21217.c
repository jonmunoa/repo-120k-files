// fichero 21217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21217;

Registro21217 crear_registro21217(int id) {
    Registro21217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21217(Registro21217 r) {
    return r.valor + r.id;
}
