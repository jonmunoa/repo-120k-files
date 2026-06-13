// fichero 17177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17177;

Registro17177 crear_registro17177(int id) {
    Registro17177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17177(Registro17177 r) {
    return r.valor + r.id;
}
