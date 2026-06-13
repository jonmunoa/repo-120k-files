// fichero 29585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29585;

Registro29585 crear_registro29585(int id) {
    Registro29585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29585(Registro29585 r) {
    return r.valor + r.id;
}
