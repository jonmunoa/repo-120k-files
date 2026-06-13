// fichero 52757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52757;

Registro52757 crear_registro52757(int id) {
    Registro52757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52757(Registro52757 r) {
    return r.valor + r.id;
}
