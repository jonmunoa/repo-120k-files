// fichero 46505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46505;

Registro46505 crear_registro46505(int id) {
    Registro46505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46505(Registro46505 r) {
    return r.valor + r.id;
}
