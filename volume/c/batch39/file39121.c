// fichero 39121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39121;

Registro39121 crear_registro39121(int id) {
    Registro39121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39121(Registro39121 r) {
    return r.valor + r.id;
}
