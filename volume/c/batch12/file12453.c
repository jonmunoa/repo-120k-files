// fichero 12453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12453;

Registro12453 crear_registro12453(int id) {
    Registro12453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12453(Registro12453 r) {
    return r.valor + r.id;
}
