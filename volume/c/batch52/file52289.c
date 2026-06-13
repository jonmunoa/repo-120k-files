// fichero 52289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52289;

Registro52289 crear_registro52289(int id) {
    Registro52289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52289(Registro52289 r) {
    return r.valor + r.id;
}
