// fichero 41553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41553;

Registro41553 crear_registro41553(int id) {
    Registro41553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41553(Registro41553 r) {
    return r.valor + r.id;
}
