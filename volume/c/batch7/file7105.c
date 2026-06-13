// fichero 7105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7105;

Registro7105 crear_registro7105(int id) {
    Registro7105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7105(Registro7105 r) {
    return r.valor + r.id;
}
