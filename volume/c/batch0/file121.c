// fichero 121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro121;

Registro121 crear_registro121(int id) {
    Registro121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro121(Registro121 r) {
    return r.valor + r.id;
}
