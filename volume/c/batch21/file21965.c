// fichero 21965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21965;

Registro21965 crear_registro21965(int id) {
    Registro21965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21965(Registro21965 r) {
    return r.valor + r.id;
}
