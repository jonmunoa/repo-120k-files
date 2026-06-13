// fichero 44061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44061;

Registro44061 crear_registro44061(int id) {
    Registro44061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44061(Registro44061 r) {
    return r.valor + r.id;
}
