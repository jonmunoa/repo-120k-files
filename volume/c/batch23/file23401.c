// fichero 23401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23401;

Registro23401 crear_registro23401(int id) {
    Registro23401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23401(Registro23401 r) {
    return r.valor + r.id;
}
