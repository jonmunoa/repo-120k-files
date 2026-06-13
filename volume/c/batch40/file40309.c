// fichero 40309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40309;

Registro40309 crear_registro40309(int id) {
    Registro40309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40309(Registro40309 r) {
    return r.valor + r.id;
}
