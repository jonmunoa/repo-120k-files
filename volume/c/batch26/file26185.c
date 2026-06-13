// fichero 26185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26185;

Registro26185 crear_registro26185(int id) {
    Registro26185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26185(Registro26185 r) {
    return r.valor + r.id;
}
