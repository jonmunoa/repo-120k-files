// fichero 19685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19685;

Registro19685 crear_registro19685(int id) {
    Registro19685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19685(Registro19685 r) {
    return r.valor + r.id;
}
