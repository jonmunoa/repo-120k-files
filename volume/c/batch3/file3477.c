// fichero 3477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3477;

Registro3477 crear_registro3477(int id) {
    Registro3477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3477(Registro3477 r) {
    return r.valor + r.id;
}
