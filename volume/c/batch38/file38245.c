// fichero 38245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38245;

Registro38245 crear_registro38245(int id) {
    Registro38245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38245(Registro38245 r) {
    return r.valor + r.id;
}
