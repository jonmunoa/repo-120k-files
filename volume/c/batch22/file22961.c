// fichero 22961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22961;

Registro22961 crear_registro22961(int id) {
    Registro22961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22961(Registro22961 r) {
    return r.valor + r.id;
}
