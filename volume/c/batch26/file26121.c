// fichero 26121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26121;

Registro26121 crear_registro26121(int id) {
    Registro26121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26121(Registro26121 r) {
    return r.valor + r.id;
}
