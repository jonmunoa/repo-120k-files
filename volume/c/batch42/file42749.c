// fichero 42749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42749;

Registro42749 crear_registro42749(int id) {
    Registro42749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42749(Registro42749 r) {
    return r.valor + r.id;
}
