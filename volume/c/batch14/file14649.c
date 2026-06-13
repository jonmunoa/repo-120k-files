// fichero 14649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14649;

Registro14649 crear_registro14649(int id) {
    Registro14649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14649(Registro14649 r) {
    return r.valor + r.id;
}
