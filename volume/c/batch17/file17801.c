// fichero 17801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17801;

Registro17801 crear_registro17801(int id) {
    Registro17801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17801(Registro17801 r) {
    return r.valor + r.id;
}
