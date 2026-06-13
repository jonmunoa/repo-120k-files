// fichero 37517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37517;

Registro37517 crear_registro37517(int id) {
    Registro37517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37517(Registro37517 r) {
    return r.valor + r.id;
}
