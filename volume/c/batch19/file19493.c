// fichero 19493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19493;

Registro19493 crear_registro19493(int id) {
    Registro19493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19493(Registro19493 r) {
    return r.valor + r.id;
}
