// fichero 6789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6789;

Registro6789 crear_registro6789(int id) {
    Registro6789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6789(Registro6789 r) {
    return r.valor + r.id;
}
