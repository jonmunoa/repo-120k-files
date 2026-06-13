// fichero 53005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53005;

Registro53005 crear_registro53005(int id) {
    Registro53005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53005(Registro53005 r) {
    return r.valor + r.id;
}
