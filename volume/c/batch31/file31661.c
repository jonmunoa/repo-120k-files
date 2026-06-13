// fichero 31661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31661;

Registro31661 crear_registro31661(int id) {
    Registro31661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31661(Registro31661 r) {
    return r.valor + r.id;
}
