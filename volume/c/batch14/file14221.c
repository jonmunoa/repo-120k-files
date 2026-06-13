// fichero 14221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14221;

Registro14221 crear_registro14221(int id) {
    Registro14221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14221(Registro14221 r) {
    return r.valor + r.id;
}
