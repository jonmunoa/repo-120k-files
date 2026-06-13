// fichero 28241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28241;

Registro28241 crear_registro28241(int id) {
    Registro28241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28241(Registro28241 r) {
    return r.valor + r.id;
}
