// fichero 31089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31089;

Registro31089 crear_registro31089(int id) {
    Registro31089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31089(Registro31089 r) {
    return r.valor + r.id;
}
