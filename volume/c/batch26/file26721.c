// fichero 26721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26721;

Registro26721 crear_registro26721(int id) {
    Registro26721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26721(Registro26721 r) {
    return r.valor + r.id;
}
