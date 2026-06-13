// fichero 26717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26717;

Registro26717 crear_registro26717(int id) {
    Registro26717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26717(Registro26717 r) {
    return r.valor + r.id;
}
