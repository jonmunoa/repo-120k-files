// fichero 37761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37761;

Registro37761 crear_registro37761(int id) {
    Registro37761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37761(Registro37761 r) {
    return r.valor + r.id;
}
