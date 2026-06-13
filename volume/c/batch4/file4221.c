// fichero 4221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4221;

Registro4221 crear_registro4221(int id) {
    Registro4221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4221(Registro4221 r) {
    return r.valor + r.id;
}
