// fichero 169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro169;

Registro169 crear_registro169(int id) {
    Registro169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro169(Registro169 r) {
    return r.valor + r.id;
}
