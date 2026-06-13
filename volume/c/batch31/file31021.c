// fichero 31021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31021;

Registro31021 crear_registro31021(int id) {
    Registro31021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31021(Registro31021 r) {
    return r.valor + r.id;
}
