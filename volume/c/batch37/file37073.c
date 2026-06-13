// fichero 37073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37073;

Registro37073 crear_registro37073(int id) {
    Registro37073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37073(Registro37073 r) {
    return r.valor + r.id;
}
