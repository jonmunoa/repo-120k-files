// fichero 7585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7585;

Registro7585 crear_registro7585(int id) {
    Registro7585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7585(Registro7585 r) {
    return r.valor + r.id;
}
