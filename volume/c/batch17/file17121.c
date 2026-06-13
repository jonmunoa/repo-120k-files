// fichero 17121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17121;

Registro17121 crear_registro17121(int id) {
    Registro17121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17121(Registro17121 r) {
    return r.valor + r.id;
}
