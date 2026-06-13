// fichero 12717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12717;

Registro12717 crear_registro12717(int id) {
    Registro12717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12717(Registro12717 r) {
    return r.valor + r.id;
}
