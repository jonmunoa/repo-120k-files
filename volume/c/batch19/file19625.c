// fichero 19625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19625;

Registro19625 crear_registro19625(int id) {
    Registro19625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19625(Registro19625 r) {
    return r.valor + r.id;
}
