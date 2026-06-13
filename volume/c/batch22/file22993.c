// fichero 22993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22993;

Registro22993 crear_registro22993(int id) {
    Registro22993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22993(Registro22993 r) {
    return r.valor + r.id;
}
