// fichero 26593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26593;

Registro26593 crear_registro26593(int id) {
    Registro26593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26593(Registro26593 r) {
    return r.valor + r.id;
}
