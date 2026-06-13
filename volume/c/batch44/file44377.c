// fichero 44377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44377;

Registro44377 crear_registro44377(int id) {
    Registro44377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44377(Registro44377 r) {
    return r.valor + r.id;
}
