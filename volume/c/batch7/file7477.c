// fichero 7477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7477;

Registro7477 crear_registro7477(int id) {
    Registro7477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7477(Registro7477 r) {
    return r.valor + r.id;
}
