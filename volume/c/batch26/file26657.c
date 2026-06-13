// fichero 26657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26657;

Registro26657 crear_registro26657(int id) {
    Registro26657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26657(Registro26657 r) {
    return r.valor + r.id;
}
