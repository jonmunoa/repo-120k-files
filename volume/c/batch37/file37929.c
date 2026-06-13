// fichero 37929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37929;

Registro37929 crear_registro37929(int id) {
    Registro37929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37929(Registro37929 r) {
    return r.valor + r.id;
}
