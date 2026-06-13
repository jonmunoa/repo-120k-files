// fichero 38509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38509;

Registro38509 crear_registro38509(int id) {
    Registro38509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38509(Registro38509 r) {
    return r.valor + r.id;
}
