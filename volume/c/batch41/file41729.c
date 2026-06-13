// fichero 41729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41729;

Registro41729 crear_registro41729(int id) {
    Registro41729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41729(Registro41729 r) {
    return r.valor + r.id;
}
