// fichero 44609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44609;

Registro44609 crear_registro44609(int id) {
    Registro44609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44609(Registro44609 r) {
    return r.valor + r.id;
}
