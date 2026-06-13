// fichero 30629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30629;

Registro30629 crear_registro30629(int id) {
    Registro30629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30629(Registro30629 r) {
    return r.valor + r.id;
}
