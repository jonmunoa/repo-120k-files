// fichero 41733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41733;

Registro41733 crear_registro41733(int id) {
    Registro41733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41733(Registro41733 r) {
    return r.valor + r.id;
}
