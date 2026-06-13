// fichero 37621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37621;

Registro37621 crear_registro37621(int id) {
    Registro37621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37621(Registro37621 r) {
    return r.valor + r.id;
}
