// fichero 17509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17509;

Registro17509 crear_registro17509(int id) {
    Registro17509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17509(Registro17509 r) {
    return r.valor + r.id;
}
