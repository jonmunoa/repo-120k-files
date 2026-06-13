// fichero 4529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4529;

Registro4529 crear_registro4529(int id) {
    Registro4529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4529(Registro4529 r) {
    return r.valor + r.id;
}
