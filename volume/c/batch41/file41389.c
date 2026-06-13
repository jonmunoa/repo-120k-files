// fichero 41389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41389;

Registro41389 crear_registro41389(int id) {
    Registro41389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41389(Registro41389 r) {
    return r.valor + r.id;
}
