// fichero 6657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6657;

Registro6657 crear_registro6657(int id) {
    Registro6657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6657(Registro6657 r) {
    return r.valor + r.id;
}
