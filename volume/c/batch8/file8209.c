// fichero 8209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8209;

Registro8209 crear_registro8209(int id) {
    Registro8209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8209(Registro8209 r) {
    return r.valor + r.id;
}
