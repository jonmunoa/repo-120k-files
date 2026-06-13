// fichero 27061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27061;

Registro27061 crear_registro27061(int id) {
    Registro27061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27061(Registro27061 r) {
    return r.valor + r.id;
}
