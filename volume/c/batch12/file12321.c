// fichero 12321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12321;

Registro12321 crear_registro12321(int id) {
    Registro12321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12321(Registro12321 r) {
    return r.valor + r.id;
}
