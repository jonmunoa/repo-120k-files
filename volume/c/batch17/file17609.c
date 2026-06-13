// fichero 17609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17609;

Registro17609 crear_registro17609(int id) {
    Registro17609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17609(Registro17609 r) {
    return r.valor + r.id;
}
