// fichero 7837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7837;

Registro7837 crear_registro7837(int id) {
    Registro7837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7837(Registro7837 r) {
    return r.valor + r.id;
}
