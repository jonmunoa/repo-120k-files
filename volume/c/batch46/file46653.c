// fichero 46653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46653;

Registro46653 crear_registro46653(int id) {
    Registro46653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46653(Registro46653 r) {
    return r.valor + r.id;
}
