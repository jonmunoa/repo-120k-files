// fichero 31553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31553;

Registro31553 crear_registro31553(int id) {
    Registro31553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31553(Registro31553 r) {
    return r.valor + r.id;
}
