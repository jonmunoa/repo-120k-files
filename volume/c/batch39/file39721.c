// fichero 39721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39721;

Registro39721 crear_registro39721(int id) {
    Registro39721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39721(Registro39721 r) {
    return r.valor + r.id;
}
