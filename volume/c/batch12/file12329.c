// fichero 12329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12329;

Registro12329 crear_registro12329(int id) {
    Registro12329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12329(Registro12329 r) {
    return r.valor + r.id;
}
