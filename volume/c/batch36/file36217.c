// fichero 36217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36217;

Registro36217 crear_registro36217(int id) {
    Registro36217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36217(Registro36217 r) {
    return r.valor + r.id;
}
