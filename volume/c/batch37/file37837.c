// fichero 37837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37837;

Registro37837 crear_registro37837(int id) {
    Registro37837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37837(Registro37837 r) {
    return r.valor + r.id;
}
