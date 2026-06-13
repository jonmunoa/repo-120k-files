// fichero 8805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8805;

Registro8805 crear_registro8805(int id) {
    Registro8805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8805(Registro8805 r) {
    return r.valor + r.id;
}
