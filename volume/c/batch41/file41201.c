// fichero 41201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41201;

Registro41201 crear_registro41201(int id) {
    Registro41201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41201(Registro41201 r) {
    return r.valor + r.id;
}
