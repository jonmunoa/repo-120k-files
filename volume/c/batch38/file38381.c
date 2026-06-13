// fichero 38381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38381;

Registro38381 crear_registro38381(int id) {
    Registro38381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38381(Registro38381 r) {
    return r.valor + r.id;
}
