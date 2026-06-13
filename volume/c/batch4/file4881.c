// fichero 4881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4881;

Registro4881 crear_registro4881(int id) {
    Registro4881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4881(Registro4881 r) {
    return r.valor + r.id;
}
