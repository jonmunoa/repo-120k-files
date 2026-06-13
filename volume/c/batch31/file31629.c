// fichero 31629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31629;

Registro31629 crear_registro31629(int id) {
    Registro31629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31629(Registro31629 r) {
    return r.valor + r.id;
}
