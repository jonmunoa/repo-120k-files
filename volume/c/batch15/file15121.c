// fichero 15121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15121;

Registro15121 crear_registro15121(int id) {
    Registro15121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15121(Registro15121 r) {
    return r.valor + r.id;
}
