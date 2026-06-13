// fichero 7557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7557;

Registro7557 crear_registro7557(int id) {
    Registro7557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7557(Registro7557 r) {
    return r.valor + r.id;
}
