// fichero 17373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17373;

Registro17373 crear_registro17373(int id) {
    Registro17373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17373(Registro17373 r) {
    return r.valor + r.id;
}
