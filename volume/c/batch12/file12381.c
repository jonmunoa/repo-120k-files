// fichero 12381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12381;

Registro12381 crear_registro12381(int id) {
    Registro12381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12381(Registro12381 r) {
    return r.valor + r.id;
}
