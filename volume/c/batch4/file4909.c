// fichero 4909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4909;

Registro4909 crear_registro4909(int id) {
    Registro4909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4909(Registro4909 r) {
    return r.valor + r.id;
}
