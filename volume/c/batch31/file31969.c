// fichero 31969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31969;

Registro31969 crear_registro31969(int id) {
    Registro31969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31969(Registro31969 r) {
    return r.valor + r.id;
}
