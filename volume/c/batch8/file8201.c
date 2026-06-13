// fichero 8201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8201;

Registro8201 crear_registro8201(int id) {
    Registro8201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8201(Registro8201 r) {
    return r.valor + r.id;
}
