// fichero 16609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16609;

Registro16609 crear_registro16609(int id) {
    Registro16609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16609(Registro16609 r) {
    return r.valor + r.id;
}
