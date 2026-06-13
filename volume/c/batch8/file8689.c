// fichero 8689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8689;

Registro8689 crear_registro8689(int id) {
    Registro8689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8689(Registro8689 r) {
    return r.valor + r.id;
}
