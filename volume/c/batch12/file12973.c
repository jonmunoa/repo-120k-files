// fichero 12973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12973;

Registro12973 crear_registro12973(int id) {
    Registro12973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12973(Registro12973 r) {
    return r.valor + r.id;
}
