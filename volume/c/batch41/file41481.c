// fichero 41481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41481;

Registro41481 crear_registro41481(int id) {
    Registro41481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41481(Registro41481 r) {
    return r.valor + r.id;
}
