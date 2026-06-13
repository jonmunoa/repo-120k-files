// fichero 21401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21401;

Registro21401 crear_registro21401(int id) {
    Registro21401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21401(Registro21401 r) {
    return r.valor + r.id;
}
