// fichero 18005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18005;

Registro18005 crear_registro18005(int id) {
    Registro18005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18005(Registro18005 r) {
    return r.valor + r.id;
}
