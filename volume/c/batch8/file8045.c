// fichero 8045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8045;

Registro8045 crear_registro8045(int id) {
    Registro8045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8045(Registro8045 r) {
    return r.valor + r.id;
}
