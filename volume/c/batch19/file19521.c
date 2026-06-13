// fichero 19521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19521;

Registro19521 crear_registro19521(int id) {
    Registro19521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19521(Registro19521 r) {
    return r.valor + r.id;
}
