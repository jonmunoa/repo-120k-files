// fichero 12501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12501;

Registro12501 crear_registro12501(int id) {
    Registro12501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12501(Registro12501 r) {
    return r.valor + r.id;
}
