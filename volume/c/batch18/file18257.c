// fichero 18257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18257;

Registro18257 crear_registro18257(int id) {
    Registro18257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18257(Registro18257 r) {
    return r.valor + r.id;
}
