// fichero 32061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32061;

Registro32061 crear_registro32061(int id) {
    Registro32061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32061(Registro32061 r) {
    return r.valor + r.id;
}
