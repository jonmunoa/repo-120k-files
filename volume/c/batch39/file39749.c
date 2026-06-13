// fichero 39749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39749;

Registro39749 crear_registro39749(int id) {
    Registro39749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39749(Registro39749 r) {
    return r.valor + r.id;
}
