// fichero 8733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8733;

Registro8733 crear_registro8733(int id) {
    Registro8733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8733(Registro8733 r) {
    return r.valor + r.id;
}
