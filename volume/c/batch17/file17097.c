// fichero 17097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17097;

Registro17097 crear_registro17097(int id) {
    Registro17097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17097(Registro17097 r) {
    return r.valor + r.id;
}
