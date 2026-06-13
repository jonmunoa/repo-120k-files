// fichero 12805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12805;

Registro12805 crear_registro12805(int id) {
    Registro12805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12805(Registro12805 r) {
    return r.valor + r.id;
}
