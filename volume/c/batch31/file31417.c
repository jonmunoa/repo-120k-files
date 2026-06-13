// fichero 31417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31417;

Registro31417 crear_registro31417(int id) {
    Registro31417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31417(Registro31417 r) {
    return r.valor + r.id;
}
