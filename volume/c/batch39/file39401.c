// fichero 39401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39401;

Registro39401 crear_registro39401(int id) {
    Registro39401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39401(Registro39401 r) {
    return r.valor + r.id;
}
