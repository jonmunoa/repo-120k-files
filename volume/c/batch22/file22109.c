// fichero 22109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22109;

Registro22109 crear_registro22109(int id) {
    Registro22109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22109(Registro22109 r) {
    return r.valor + r.id;
}
