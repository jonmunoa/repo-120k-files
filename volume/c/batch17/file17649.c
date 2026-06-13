// fichero 17649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17649;

Registro17649 crear_registro17649(int id) {
    Registro17649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17649(Registro17649 r) {
    return r.valor + r.id;
}
