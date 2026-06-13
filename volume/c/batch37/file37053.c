// fichero 37053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37053;

Registro37053 crear_registro37053(int id) {
    Registro37053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37053(Registro37053 r) {
    return r.valor + r.id;
}
