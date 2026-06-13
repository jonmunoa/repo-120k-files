// fichero 41669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41669;

Registro41669 crear_registro41669(int id) {
    Registro41669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41669(Registro41669 r) {
    return r.valor + r.id;
}
