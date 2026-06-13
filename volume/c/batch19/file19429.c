// fichero 19429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19429;

Registro19429 crear_registro19429(int id) {
    Registro19429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19429(Registro19429 r) {
    return r.valor + r.id;
}
