// fichero 34145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34145;

Registro34145 crear_registro34145(int id) {
    Registro34145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34145(Registro34145 r) {
    return r.valor + r.id;
}
