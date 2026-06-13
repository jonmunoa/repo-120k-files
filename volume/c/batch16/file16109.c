// fichero 16109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16109;

Registro16109 crear_registro16109(int id) {
    Registro16109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16109(Registro16109 r) {
    return r.valor + r.id;
}
