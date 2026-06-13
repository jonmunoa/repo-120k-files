// fichero 41649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41649;

Registro41649 crear_registro41649(int id) {
    Registro41649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41649(Registro41649 r) {
    return r.valor + r.id;
}
