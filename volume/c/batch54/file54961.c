// fichero 54961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54961;

Registro54961 crear_registro54961(int id) {
    Registro54961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54961(Registro54961 r) {
    return r.valor + r.id;
}
