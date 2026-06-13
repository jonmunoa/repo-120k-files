// fichero 54365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54365;

Registro54365 crear_registro54365(int id) {
    Registro54365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54365(Registro54365 r) {
    return r.valor + r.id;
}
