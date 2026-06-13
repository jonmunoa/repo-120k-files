// fichero 4721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4721;

Registro4721 crear_registro4721(int id) {
    Registro4721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4721(Registro4721 r) {
    return r.valor + r.id;
}
