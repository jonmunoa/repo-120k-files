// fichero 41909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41909;

Registro41909 crear_registro41909(int id) {
    Registro41909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41909(Registro41909 r) {
    return r.valor + r.id;
}
