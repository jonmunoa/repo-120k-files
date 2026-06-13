// fichero 34065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34065;

Registro34065 crear_registro34065(int id) {
    Registro34065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34065(Registro34065 r) {
    return r.valor + r.id;
}
