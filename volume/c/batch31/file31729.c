// fichero 31729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31729;

Registro31729 crear_registro31729(int id) {
    Registro31729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31729(Registro31729 r) {
    return r.valor + r.id;
}
