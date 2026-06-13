// fichero 17313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17313;

Registro17313 crear_registro17313(int id) {
    Registro17313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17313(Registro17313 r) {
    return r.valor + r.id;
}
