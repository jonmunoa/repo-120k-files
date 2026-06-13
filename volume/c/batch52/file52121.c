// fichero 52121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52121;

Registro52121 crear_registro52121(int id) {
    Registro52121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52121(Registro52121 r) {
    return r.valor + r.id;
}
