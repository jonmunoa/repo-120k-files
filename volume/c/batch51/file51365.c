// fichero 51365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51365;

Registro51365 crear_registro51365(int id) {
    Registro51365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51365(Registro51365 r) {
    return r.valor + r.id;
}
