// fichero 12325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12325;

Registro12325 crear_registro12325(int id) {
    Registro12325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12325(Registro12325 r) {
    return r.valor + r.id;
}
