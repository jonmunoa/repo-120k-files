// fichero 8657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8657;

Registro8657 crear_registro8657(int id) {
    Registro8657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8657(Registro8657 r) {
    return r.valor + r.id;
}
