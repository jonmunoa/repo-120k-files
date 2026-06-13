// fichero 7169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7169;

Registro7169 crear_registro7169(int id) {
    Registro7169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7169(Registro7169 r) {
    return r.valor + r.id;
}
