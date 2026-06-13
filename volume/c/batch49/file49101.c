// fichero 49101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49101;

Registro49101 crear_registro49101(int id) {
    Registro49101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49101(Registro49101 r) {
    return r.valor + r.id;
}
