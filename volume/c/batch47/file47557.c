// fichero 47557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47557;

Registro47557 crear_registro47557(int id) {
    Registro47557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47557(Registro47557 r) {
    return r.valor + r.id;
}
