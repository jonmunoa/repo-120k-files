// fichero 36121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36121;

Registro36121 crear_registro36121(int id) {
    Registro36121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36121(Registro36121 r) {
    return r.valor + r.id;
}
