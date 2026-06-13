// fichero 20105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20105;

Registro20105 crear_registro20105(int id) {
    Registro20105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20105(Registro20105 r) {
    return r.valor + r.id;
}
