// fichero 19217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19217;

Registro19217 crear_registro19217(int id) {
    Registro19217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19217(Registro19217 r) {
    return r.valor + r.id;
}
