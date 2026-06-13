// fichero 20997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20997;

Registro20997 crear_registro20997(int id) {
    Registro20997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20997(Registro20997 r) {
    return r.valor + r.id;
}
