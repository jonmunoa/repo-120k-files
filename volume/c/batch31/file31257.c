// fichero 31257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31257;

Registro31257 crear_registro31257(int id) {
    Registro31257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31257(Registro31257 r) {
    return r.valor + r.id;
}
