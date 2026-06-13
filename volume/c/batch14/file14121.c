// fichero 14121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14121;

Registro14121 crear_registro14121(int id) {
    Registro14121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14121(Registro14121 r) {
    return r.valor + r.id;
}
