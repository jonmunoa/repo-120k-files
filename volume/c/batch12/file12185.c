// fichero 12185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12185;

Registro12185 crear_registro12185(int id) {
    Registro12185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12185(Registro12185 r) {
    return r.valor + r.id;
}
