// fichero 41217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41217;

Registro41217 crear_registro41217(int id) {
    Registro41217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41217(Registro41217 r) {
    return r.valor + r.id;
}
