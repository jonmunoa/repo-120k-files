// fichero 28625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28625;

Registro28625 crear_registro28625(int id) {
    Registro28625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28625(Registro28625 r) {
    return r.valor + r.id;
}
