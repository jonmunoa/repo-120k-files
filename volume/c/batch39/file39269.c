// fichero 39269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39269;

Registro39269 crear_registro39269(int id) {
    Registro39269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39269(Registro39269 r) {
    return r.valor + r.id;
}
