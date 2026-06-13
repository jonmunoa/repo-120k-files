// fichero 42721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42721;

Registro42721 crear_registro42721(int id) {
    Registro42721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42721(Registro42721 r) {
    return r.valor + r.id;
}
