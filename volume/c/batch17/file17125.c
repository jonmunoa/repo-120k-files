// fichero 17125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17125;

Registro17125 crear_registro17125(int id) {
    Registro17125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17125(Registro17125 r) {
    return r.valor + r.id;
}
