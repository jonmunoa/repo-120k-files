// fichero 28609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28609;

Registro28609 crear_registro28609(int id) {
    Registro28609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28609(Registro28609 r) {
    return r.valor + r.id;
}
