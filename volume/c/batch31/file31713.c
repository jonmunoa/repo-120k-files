// fichero 31713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31713;

Registro31713 crear_registro31713(int id) {
    Registro31713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31713(Registro31713 r) {
    return r.valor + r.id;
}
