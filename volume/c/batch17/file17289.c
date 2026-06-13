// fichero 17289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17289;

Registro17289 crear_registro17289(int id) {
    Registro17289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17289(Registro17289 r) {
    return r.valor + r.id;
}
