// fichero 41557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41557;

Registro41557 crear_registro41557(int id) {
    Registro41557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41557(Registro41557 r) {
    return r.valor + r.id;
}
