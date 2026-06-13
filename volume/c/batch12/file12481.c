// fichero 12481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12481;

Registro12481 crear_registro12481(int id) {
    Registro12481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12481(Registro12481 r) {
    return r.valor + r.id;
}
