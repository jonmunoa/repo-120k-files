// fichero 12405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12405;

Registro12405 crear_registro12405(int id) {
    Registro12405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12405(Registro12405 r) {
    return r.valor + r.id;
}
