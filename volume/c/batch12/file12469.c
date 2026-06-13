// fichero 12469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12469;

Registro12469 crear_registro12469(int id) {
    Registro12469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12469(Registro12469 r) {
    return r.valor + r.id;
}
