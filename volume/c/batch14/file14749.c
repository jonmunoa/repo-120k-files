// fichero 14749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14749;

Registro14749 crear_registro14749(int id) {
    Registro14749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14749(Registro14749 r) {
    return r.valor + r.id;
}
