// fichero 47573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47573;

Registro47573 crear_registro47573(int id) {
    Registro47573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47573(Registro47573 r) {
    return r.valor + r.id;
}
