// fichero 35121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35121;

Registro35121 crear_registro35121(int id) {
    Registro35121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35121(Registro35121 r) {
    return r.valor + r.id;
}
