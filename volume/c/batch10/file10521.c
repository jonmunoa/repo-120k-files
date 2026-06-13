// fichero 10521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10521;

Registro10521 crear_registro10521(int id) {
    Registro10521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10521(Registro10521 r) {
    return r.valor + r.id;
}
