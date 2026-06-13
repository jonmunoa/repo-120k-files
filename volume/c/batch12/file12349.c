// fichero 12349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12349;

Registro12349 crear_registro12349(int id) {
    Registro12349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12349(Registro12349 r) {
    return r.valor + r.id;
}
