// fichero 8945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8945;

Registro8945 crear_registro8945(int id) {
    Registro8945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8945(Registro8945 r) {
    return r.valor + r.id;
}
