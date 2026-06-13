// fichero 22069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22069;

Registro22069 crear_registro22069(int id) {
    Registro22069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22069(Registro22069 r) {
    return r.valor + r.id;
}
