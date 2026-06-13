// fichero 17241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17241;

Registro17241 crear_registro17241(int id) {
    Registro17241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17241(Registro17241 r) {
    return r.valor + r.id;
}
