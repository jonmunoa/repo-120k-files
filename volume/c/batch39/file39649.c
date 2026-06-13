// fichero 39649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39649;

Registro39649 crear_registro39649(int id) {
    Registro39649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39649(Registro39649 r) {
    return r.valor + r.id;
}
