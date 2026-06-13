// fichero 41357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41357;

Registro41357 crear_registro41357(int id) {
    Registro41357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41357(Registro41357 r) {
    return r.valor + r.id;
}
