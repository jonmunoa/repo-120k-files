// fichero 47289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47289;

Registro47289 crear_registro47289(int id) {
    Registro47289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47289(Registro47289 r) {
    return r.valor + r.id;
}
