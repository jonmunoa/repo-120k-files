// fichero 41385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41385;

Registro41385 crear_registro41385(int id) {
    Registro41385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41385(Registro41385 r) {
    return r.valor + r.id;
}
