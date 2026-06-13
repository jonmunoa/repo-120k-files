// fichero 12509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12509;

Registro12509 crear_registro12509(int id) {
    Registro12509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12509(Registro12509 r) {
    return r.valor + r.id;
}
