// fichero 40017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40017;

Registro40017 crear_registro40017(int id) {
    Registro40017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40017(Registro40017 r) {
    return r.valor + r.id;
}
