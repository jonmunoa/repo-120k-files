// fichero 44289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44289;

Registro44289 crear_registro44289(int id) {
    Registro44289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44289(Registro44289 r) {
    return r.valor + r.id;
}
