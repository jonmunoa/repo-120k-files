// fichero 47505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47505;

Registro47505 crear_registro47505(int id) {
    Registro47505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47505(Registro47505 r) {
    return r.valor + r.id;
}
