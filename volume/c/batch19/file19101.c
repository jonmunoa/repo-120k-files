// fichero 19101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19101;

Registro19101 crear_registro19101(int id) {
    Registro19101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19101(Registro19101 r) {
    return r.valor + r.id;
}
