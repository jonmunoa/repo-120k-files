// fichero 41013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41013;

Registro41013 crear_registro41013(int id) {
    Registro41013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41013(Registro41013 r) {
    return r.valor + r.id;
}
