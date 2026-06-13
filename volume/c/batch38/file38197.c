// fichero 38197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38197;

Registro38197 crear_registro38197(int id) {
    Registro38197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38197(Registro38197 r) {
    return r.valor + r.id;
}
