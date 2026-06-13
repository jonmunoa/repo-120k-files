// fichero 19269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19269;

Registro19269 crear_registro19269(int id) {
    Registro19269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19269(Registro19269 r) {
    return r.valor + r.id;
}
