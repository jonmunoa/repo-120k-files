// fichero 27733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27733;

Registro27733 crear_registro27733(int id) {
    Registro27733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27733(Registro27733 r) {
    return r.valor + r.id;
}
