// fichero 35185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35185;

Registro35185 crear_registro35185(int id) {
    Registro35185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35185(Registro35185 r) {
    return r.valor + r.id;
}
