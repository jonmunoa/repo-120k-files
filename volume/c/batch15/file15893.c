// fichero 15893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15893;

Registro15893 crear_registro15893(int id) {
    Registro15893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15893(Registro15893 r) {
    return r.valor + r.id;
}
