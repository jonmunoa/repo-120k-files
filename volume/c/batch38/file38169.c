// fichero 38169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38169;

Registro38169 crear_registro38169(int id) {
    Registro38169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38169(Registro38169 r) {
    return r.valor + r.id;
}
