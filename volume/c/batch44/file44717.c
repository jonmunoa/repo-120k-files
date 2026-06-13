// fichero 44717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44717;

Registro44717 crear_registro44717(int id) {
    Registro44717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44717(Registro44717 r) {
    return r.valor + r.id;
}
