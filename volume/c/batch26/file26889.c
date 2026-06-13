// fichero 26889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26889;

Registro26889 crear_registro26889(int id) {
    Registro26889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26889(Registro26889 r) {
    return r.valor + r.id;
}
