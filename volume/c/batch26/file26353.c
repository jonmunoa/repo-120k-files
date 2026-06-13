// fichero 26353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26353;

Registro26353 crear_registro26353(int id) {
    Registro26353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26353(Registro26353 r) {
    return r.valor + r.id;
}
