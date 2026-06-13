// fichero 47005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47005;

Registro47005 crear_registro47005(int id) {
    Registro47005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47005(Registro47005 r) {
    return r.valor + r.id;
}
