// fichero 21357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21357;

Registro21357 crear_registro21357(int id) {
    Registro21357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21357(Registro21357 r) {
    return r.valor + r.id;
}
