// fichero 4941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4941;

Registro4941 crear_registro4941(int id) {
    Registro4941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4941(Registro4941 r) {
    return r.valor + r.id;
}
