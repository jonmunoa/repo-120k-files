// fichero 41329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41329;

Registro41329 crear_registro41329(int id) {
    Registro41329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41329(Registro41329 r) {
    return r.valor + r.id;
}
