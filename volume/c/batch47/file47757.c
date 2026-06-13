// fichero 47757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47757;

Registro47757 crear_registro47757(int id) {
    Registro47757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47757(Registro47757 r) {
    return r.valor + r.id;
}
