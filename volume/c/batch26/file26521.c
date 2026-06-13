// fichero 26521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26521;

Registro26521 crear_registro26521(int id) {
    Registro26521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26521(Registro26521 r) {
    return r.valor + r.id;
}
