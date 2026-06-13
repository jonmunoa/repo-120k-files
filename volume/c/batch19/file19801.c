// fichero 19801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19801;

Registro19801 crear_registro19801(int id) {
    Registro19801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19801(Registro19801 r) {
    return r.valor + r.id;
}
