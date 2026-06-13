// fichero 44477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44477;

Registro44477 crear_registro44477(int id) {
    Registro44477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44477(Registro44477 r) {
    return r.valor + r.id;
}
