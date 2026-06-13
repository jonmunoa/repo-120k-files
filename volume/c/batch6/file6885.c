// fichero 6885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6885;

Registro6885 crear_registro6885(int id) {
    Registro6885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6885(Registro6885 r) {
    return r.valor + r.id;
}
