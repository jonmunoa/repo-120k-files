// fichero 24121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24121;

Registro24121 crear_registro24121(int id) {
    Registro24121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24121(Registro24121 r) {
    return r.valor + r.id;
}
