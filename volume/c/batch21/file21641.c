// fichero 21641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21641;

Registro21641 crear_registro21641(int id) {
    Registro21641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21641(Registro21641 r) {
    return r.valor + r.id;
}
