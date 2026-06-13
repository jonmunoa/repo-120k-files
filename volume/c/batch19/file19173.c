// fichero 19173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19173;

Registro19173 crear_registro19173(int id) {
    Registro19173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19173(Registro19173 r) {
    return r.valor + r.id;
}
