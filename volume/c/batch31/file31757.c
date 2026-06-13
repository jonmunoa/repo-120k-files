// fichero 31757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31757;

Registro31757 crear_registro31757(int id) {
    Registro31757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31757(Registro31757 r) {
    return r.valor + r.id;
}
