// fichero 26845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26845;

Registro26845 crear_registro26845(int id) {
    Registro26845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26845(Registro26845 r) {
    return r.valor + r.id;
}
