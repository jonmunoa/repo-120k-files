// fichero 8041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8041;

Registro8041 crear_registro8041(int id) {
    Registro8041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8041(Registro8041 r) {
    return r.valor + r.id;
}
