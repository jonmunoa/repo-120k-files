// fichero 46241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46241;

Registro46241 crear_registro46241(int id) {
    Registro46241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46241(Registro46241 r) {
    return r.valor + r.id;
}
