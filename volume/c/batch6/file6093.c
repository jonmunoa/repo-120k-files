// fichero 6093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6093;

Registro6093 crear_registro6093(int id) {
    Registro6093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6093(Registro6093 r) {
    return r.valor + r.id;
}
