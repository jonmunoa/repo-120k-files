// fichero 41885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41885;

Registro41885 crear_registro41885(int id) {
    Registro41885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41885(Registro41885 r) {
    return r.valor + r.id;
}
