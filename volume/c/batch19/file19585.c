// fichero 19585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19585;

Registro19585 crear_registro19585(int id) {
    Registro19585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19585(Registro19585 r) {
    return r.valor + r.id;
}
