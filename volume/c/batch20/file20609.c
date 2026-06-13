// fichero 20609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20609;

Registro20609 crear_registro20609(int id) {
    Registro20609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20609(Registro20609 r) {
    return r.valor + r.id;
}
