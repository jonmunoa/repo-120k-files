// fichero 19649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19649;

Registro19649 crear_registro19649(int id) {
    Registro19649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19649(Registro19649 r) {
    return r.valor + r.id;
}
