// fichero 31529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31529;

Registro31529 crear_registro31529(int id) {
    Registro31529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31529(Registro31529 r) {
    return r.valor + r.id;
}
