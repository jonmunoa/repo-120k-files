// fichero 12101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12101;

Registro12101 crear_registro12101(int id) {
    Registro12101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12101(Registro12101 r) {
    return r.valor + r.id;
}
