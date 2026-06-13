// fichero 28629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28629;

Registro28629 crear_registro28629(int id) {
    Registro28629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28629(Registro28629 r) {
    return r.valor + r.id;
}
