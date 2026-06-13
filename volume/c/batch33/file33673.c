// fichero 33673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33673;

Registro33673 crear_registro33673(int id) {
    Registro33673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33673(Registro33673 r) {
    return r.valor + r.id;
}
