// fichero 38661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38661;

Registro38661 crear_registro38661(int id) {
    Registro38661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38661(Registro38661 r) {
    return r.valor + r.id;
}
