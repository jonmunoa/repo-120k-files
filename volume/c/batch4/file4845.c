// fichero 4845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4845;

Registro4845 crear_registro4845(int id) {
    Registro4845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4845(Registro4845 r) {
    return r.valor + r.id;
}
