// fichero 12601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12601;

Registro12601 crear_registro12601(int id) {
    Registro12601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12601(Registro12601 r) {
    return r.valor + r.id;
}
