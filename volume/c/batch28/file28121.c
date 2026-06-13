// fichero 28121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28121;

Registro28121 crear_registro28121(int id) {
    Registro28121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28121(Registro28121 r) {
    return r.valor + r.id;
}
