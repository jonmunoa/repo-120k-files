// fichero 41 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41;

Registro41 crear_registro41(int id) {
    Registro41 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41(Registro41 r) {
    return r.valor + r.id;
}
