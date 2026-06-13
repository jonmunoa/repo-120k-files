// fichero 241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro241;

Registro241 crear_registro241(int id) {
    Registro241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro241(Registro241 r) {
    return r.valor + r.id;
}
