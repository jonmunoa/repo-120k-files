// fichero 4153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4153;

Registro4153 crear_registro4153(int id) {
    Registro4153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4153(Registro4153 r) {
    return r.valor + r.id;
}
