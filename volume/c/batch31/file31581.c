// fichero 31581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31581;

Registro31581 crear_registro31581(int id) {
    Registro31581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31581(Registro31581 r) {
    return r.valor + r.id;
}
