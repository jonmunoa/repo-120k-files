// fichero 9825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9825;

Registro9825 crear_registro9825(int id) {
    Registro9825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9825(Registro9825 r) {
    return r.valor + r.id;
}
