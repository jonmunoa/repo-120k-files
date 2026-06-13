// fichero 44673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44673;

Registro44673 crear_registro44673(int id) {
    Registro44673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44673(Registro44673 r) {
    return r.valor + r.id;
}
