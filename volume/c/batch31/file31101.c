// fichero 31101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31101;

Registro31101 crear_registro31101(int id) {
    Registro31101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31101(Registro31101 r) {
    return r.valor + r.id;
}
