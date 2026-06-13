// fichero 39105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39105;

Registro39105 crear_registro39105(int id) {
    Registro39105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39105(Registro39105 r) {
    return r.valor + r.id;
}
