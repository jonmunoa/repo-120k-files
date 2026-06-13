// fichero 26577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26577;

Registro26577 crear_registro26577(int id) {
    Registro26577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26577(Registro26577 r) {
    return r.valor + r.id;
}
