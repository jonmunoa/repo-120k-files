// fichero 217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro217;

Registro217 crear_registro217(int id) {
    Registro217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro217(Registro217 r) {
    return r.valor + r.id;
}
