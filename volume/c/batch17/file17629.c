// fichero 17629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17629;

Registro17629 crear_registro17629(int id) {
    Registro17629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17629(Registro17629 r) {
    return r.valor + r.id;
}
