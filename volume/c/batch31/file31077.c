// fichero 31077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31077;

Registro31077 crear_registro31077(int id) {
    Registro31077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31077(Registro31077 r) {
    return r.valor + r.id;
}
