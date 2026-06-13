// fichero 19077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19077;

Registro19077 crear_registro19077(int id) {
    Registro19077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19077(Registro19077 r) {
    return r.valor + r.id;
}
