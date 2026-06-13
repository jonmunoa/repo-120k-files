// fichero 35037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35037;

Registro35037 crear_registro35037(int id) {
    Registro35037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35037(Registro35037 r) {
    return r.valor + r.id;
}
