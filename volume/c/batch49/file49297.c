// fichero 49297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49297;

Registro49297 crear_registro49297(int id) {
    Registro49297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49297(Registro49297 r) {
    return r.valor + r.id;
}
