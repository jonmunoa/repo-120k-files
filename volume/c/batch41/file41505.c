// fichero 41505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41505;

Registro41505 crear_registro41505(int id) {
    Registro41505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41505(Registro41505 r) {
    return r.valor + r.id;
}
