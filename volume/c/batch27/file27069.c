// fichero 27069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27069;

Registro27069 crear_registro27069(int id) {
    Registro27069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27069(Registro27069 r) {
    return r.valor + r.id;
}
