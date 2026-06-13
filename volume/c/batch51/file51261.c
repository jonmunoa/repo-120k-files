// fichero 51261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51261;

Registro51261 crear_registro51261(int id) {
    Registro51261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51261(Registro51261 r) {
    return r.valor + r.id;
}
