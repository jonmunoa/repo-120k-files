// fichero 6169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6169;

Registro6169 crear_registro6169(int id) {
    Registro6169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6169(Registro6169 r) {
    return r.valor + r.id;
}
