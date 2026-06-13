// fichero 39161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39161;

Registro39161 crear_registro39161(int id) {
    Registro39161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39161(Registro39161 r) {
    return r.valor + r.id;
}
