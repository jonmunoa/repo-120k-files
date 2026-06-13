// fichero 35885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35885;

Registro35885 crear_registro35885(int id) {
    Registro35885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35885(Registro35885 r) {
    return r.valor + r.id;
}
