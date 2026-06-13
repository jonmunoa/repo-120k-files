// fichero 19509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19509;

Registro19509 crear_registro19509(int id) {
    Registro19509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19509(Registro19509 r) {
    return r.valor + r.id;
}
