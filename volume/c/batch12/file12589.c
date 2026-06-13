// fichero 12589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12589;

Registro12589 crear_registro12589(int id) {
    Registro12589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12589(Registro12589 r) {
    return r.valor + r.id;
}
