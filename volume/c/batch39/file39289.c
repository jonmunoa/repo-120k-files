// fichero 39289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39289;

Registro39289 crear_registro39289(int id) {
    Registro39289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39289(Registro39289 r) {
    return r.valor + r.id;
}
