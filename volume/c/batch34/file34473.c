// fichero 34473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34473;

Registro34473 crear_registro34473(int id) {
    Registro34473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34473(Registro34473 r) {
    return r.valor + r.id;
}
