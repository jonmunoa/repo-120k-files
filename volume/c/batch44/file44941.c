// fichero 44941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44941;

Registro44941 crear_registro44941(int id) {
    Registro44941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44941(Registro44941 r) {
    return r.valor + r.id;
}
