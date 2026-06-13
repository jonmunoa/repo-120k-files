// fichero 52169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52169;

Registro52169 crear_registro52169(int id) {
    Registro52169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52169(Registro52169 r) {
    return r.valor + r.id;
}
