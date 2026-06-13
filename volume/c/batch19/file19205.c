// fichero 19205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19205;

Registro19205 crear_registro19205(int id) {
    Registro19205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19205(Registro19205 r) {
    return r.valor + r.id;
}
