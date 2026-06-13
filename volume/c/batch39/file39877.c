// fichero 39877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39877;

Registro39877 crear_registro39877(int id) {
    Registro39877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39877(Registro39877 r) {
    return r.valor + r.id;
}
