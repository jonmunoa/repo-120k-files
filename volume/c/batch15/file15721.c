// fichero 15721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15721;

Registro15721 crear_registro15721(int id) {
    Registro15721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15721(Registro15721 r) {
    return r.valor + r.id;
}
